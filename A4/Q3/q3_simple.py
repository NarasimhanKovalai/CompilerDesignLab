SUCCESS = 1
FAILED = 0

def S():
    print(f"{cursor: <16}S -> n B ")
    if match('n'):
        if B():
            return SUCCESS
        else:
            return FAILED
    else:
        return FAILED

def B():
    if match('n'):
        print(f"{cursor: <16}B -> n B A B ")
        
        if B() and A() and B():
            return SUCCESS
        else:
            return FAILED
    else:
        #print('------Backtracking from B->nBAB-------')
        print(f"{cursor: <16}B -> ε")
        return SUCCESS

def A():
    if match('+'):
        print(f"{cursor: <16}A -> + ")
        
        return SUCCESS
    if match('x'):
        #print('------Backtracking from A-> + -------')
        print(f"{cursor: <16}A -> x ")
        
        return SUCCESS        
    else:
        return FAILED

def match(expected):
    global cursor
    if cursor and cursor[0] == expected:
        cursor = cursor[1:]
        return True
    else:
        return False

cursor = None
string = input("Enter the string: ")
print("\nInput\t\t Action")
print("--------------------------------")

cursor = string
if S() and not cursor:
    print("--------------------------------")
    print("String is successfully parsed")
else:
    print("--------------------------------")
    print("Error in parsing String, String not accepted")
