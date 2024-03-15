

class NonTerminal:
    def __init__(self, name):
        self.name = name
        self.rules = []

    def addRule(self, rule):
        self.rules.append(rule)

    def setRules(self, rules):
        self.rules = rules

    def getName(self):
        return self.name

    def getRules(self):
        return self.rules

    def printRule(self):
        print(self.name + " -> ", end="")
        for i in range(len(self.rules)):
            print(self.rules[i], end="")
            if i != len(self.rules) - 1:
                print(" | ", end="")
        print()
        
    def printRuleToFile(self):
        with open('output.txt', "a") as file:
            file.write(self.name + " -> ")
            for i in range(len(self.rules)):
                file.write(self.rules[i])
                if i != len(self.rules) - 1:
                    file.write(" | ")
            file.write("\n")





class Grammar:
    def __init__(self):
        self.nonTerminals = []
        self.ntn=""
        with open("../non_char.txt", "r") as file:
            self.ntn = file.readline()
        

    def addRule(self, rule):
        nt = False
        parse = ""

        for i in range(len(rule)):
            c = rule[i]
            if c == " ":
                if not nt:
                    newNonTerminal = NonTerminal(parse)
                    self.nonTerminals.append(newNonTerminal)
                    nt = True
                    parse = ""
                elif parse != "":
                    self.nonTerminals[len(self.nonTerminals) - 1].addRule(parse)
                    parse = ""
            # elif c != "|" and c != "-" and c != ">":
            #     parse += c
            elif c != "|"  and c != ">":
                if c =='-':
                    if rule[i+1]!='>':
                        parse+=c
                else:
                    parse+=c
                    
                    
                    
        if parse != "":
            self.nonTerminals[len(self.nonTerminals) - 1].addRule(parse)

    def inputData(self):
        # self.addRule("G -> E")
        # self.addRule("E -> E+T | E-T |T")
        # self.addRule("T -> T*F | T/F | F")
        # self.addRule("F -> N | id")
        
        # self.addRule('S -> Aa | b')
        # self.addRule('A -> Ac | Aad | bd | ε')
        # Open the text file in read mode
        file_path = "input.txt"  # Replace with the actual path of your file
        with open(file_path, "r") as file:
            lines = file.readlines()

        # Remove newline characters and store each line in a list
        cleaned_lines = [line.strip() for line in lines]

        # Print the list of cleaned lines
        for line in cleaned_lines:
            self.addRule(line)
            # print(line)

        
        # self.addRule("E -> E+T | T")
        # self.addRule("T -> T*F | F")
        # self.addRule("F -> (E) | id")
        
    def solveNonImmediateLR(self, A, B):
        nameA = A.getName()
        nameB = B.getName()

        rulesA = []
        rulesB = []
        newRulesA = []
        rulesA = A.getRules()
        rulesB = B.getRules()
        
        for rule in rulesA:
            if rule[0 : len(nameB)] == nameB:
                for rule1 in rulesB:
                    newRulesA.append(rule1 + rule[len(nameB) :])
            else:
                newRulesA.append(rule)
        A.setRules(newRulesA)

    def solveImmediateLR(self, A):
        name = A.getName()
       
        # newName = name + "'"
        alphas = []
        betas = []
        rules = A.getRules()
        newRulesA = []
        newRulesA1 = []

        rules = A.getRules()
        # print(rules)

        # Checks if there is left recursion or not
        for rule in rules:
            if rule[0 : len(name)] == name:
                alphas.append(rule[len(name) :])
            else:
                betas.append(rule)

        # If no left recursion, exit
        if len(alphas) == 0:
            return
        newName=self.ntn
        # print(newName)
        self.ntn=chr(ord(self.ntn)+1)
        if len(betas) == 0:
            
            newRulesA.append(newName)

        for beta in betas:

            newRulesA.append(beta + newName)

        for alpha in alphas:
            newRulesA1.append(alpha + newName)

        # Amends the original rule

        A.setRules(newRulesA)
        newRulesA1.append("#")

        # Adds new production rule
        newNonTerminal = NonTerminal(newName)
        newNonTerminal.setRules(newRulesA1)
        self.nonTerminals.append(newNonTerminal)

    def applyAlgorithm(self):
        size = len(self.nonTerminals)
        for i in range(size):
            for j in range(i):
                self.solveNonImmediateLR(self.nonTerminals[i], self.nonTerminals[j])
            self.solveImmediateLR(self.nonTerminals[i])

    def printRules(self):
        for nonTerminal in self.nonTerminals:
            nonTerminal.printRule()
    def wtofile(self):
        for nonTerminal in self.nonTerminals:
            nonTerminal.printRuleToFile()
        with open("../non_char.txt", "w") as file:
            file.write(self.ntn)


grammar = Grammar()
grammar.inputData()
grammar.applyAlgorithm()
grammar.printRules()
grammar.wtofile()


