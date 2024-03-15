index=0
terminals=['n','+','x']
rules=[ ("S","nB"),("B","nBAB"),("B","eps"),("A","+"),("A","x")]
s="nn+n+"
def match(sent_form,remaining_input):
    if remaining_input=="" and sent_form=="":
        return True
    if remaining_input!="" and sent_form!="" and sent_form[0] in terminals:
        # print("\t\t\t\tmatching terminals",sent_form[0],remaining_input[0])
 
        if remaining_input[0]==sent_form[0]:
            print(sent_form,remaining_input,f"{remaining_input[0]} -> {sent_form[0]}",sep="\t\t\t\t")
            return match(sent_form[1:],remaining_input[1:])
        else:
            print(sent_form,remaining_input,"BackTracking...",sep="\t\t\t\t")
            return False
    if sent_form!="":
        for rule in rules:
            if sent_form[0]==rule[0]:
                print(sent_form,remaining_input,f"{rule[0]} -> {rule[1]}",sep="\t\t\t\t")
                if rule[1]=="eps":
                    if match(sent_form[1:],remaining_input):
                        return True
                else:   
                    if match(rule[1]+sent_form[1:],remaining_input):
                        return True
    return False
 
print("Sentential Form","Remaining Input","Rule Applied",sep="\t\t\t")
print(match("S",s))
    
    