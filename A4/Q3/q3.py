
class Solution():
    def __init__(self,rule_filename:str,input_filename:str,grammar:dict):
        """
        A high Level Class Constructor
        
        """
        self.rule_filename=rule_filename
        self.grammar_dict=grammar
        self.terminal_list=['n','+','x']
        self.terminal_set=set()
        self.input_filename=input_filename
        self.input_string=''
        self.start_state=''
        self.sentential=''
        self.yet_to_parse=''
        self.grammar_list=[]
        
        with open(rule_filename) as file:
            for i,line in enumerate(file):
                left, right = line.strip().split("->")
                lhs = left.strip()
                if(i==0):
                    self.start_state=lhs
                rhs = [symbol.strip() for symbol in right.split("|")]
                self.grammar_dict[lhs]=rhs
                

        for key, values in self.grammar_dict.items():
            for value in values:
                self.grammar_list.append((key, value))

        
        with open(input_filename) as file:
            self.input_string=file.read()
        
        print(self.terminal_list)
        self.rdp(self.start_state,self.input_string)

    def rdp(self,sent_form:str,remaining_input:str):
        """
        A generic recursive descent parser
        Parameters:
            sent_form       : The sentential form string. To be 
                              initialised with Start State.
            remaining_input : Input yet to be parsed. To be
                              initialised with input string.
        
        Returns : A bool stating whether string is parsed using the
                  given grammar.
        """
        if remaining_input=="" and sent_form=="":
            return True
        
        if len(remaining_input)!=0 and len(sent_form)!=0 and (sent_form[0] in self.terminal_list): 
            
                if remaining_input[0]==sent_form[0]:
                    add_string=' Match'
                    print(sent_form,remaining_input,f"{remaining_input[0]} -> {sent_form[0]}{add_string}",sep="\t\t\t\t")
                    return self.rdp(sent_form[1:],remaining_input[1:])
                else:
                    print(sent_form,remaining_input,"Backtrack",sep="\t\t\t\t")
                    return False
        if sent_form!="":
            for elem in self.grammar_list:
                if sent_form[0]==elem[0]:
                    print(sent_form,remaining_input,f"{elem[0]} -> {elem[1]}",sep="\t\t\t\t")
                    if elem[1]=="ε":
                        if self.rdp(sent_form[1:],remaining_input):
                            return True
                    else:   
                        if self.rdp(elem[1]+sent_form[1:],remaining_input):
                            return True
        return False
            
    


def main():
    solution_instance = Solution('rules.txt', 'input.txt', {})

    if solution_instance.rdp(solution_instance.start_state, solution_instance.input_string):
        print("String is accepted by Recursive Descent Parser")
    else:
        print("String isn't accepted by Recursive Descent Parser")

if __name__=='__main__':
    main()