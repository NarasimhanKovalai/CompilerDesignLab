import re
import streamlit as st

class LexicalAnalyzer:
    def __init__(self):
        self.patterns = [
            (r'\b(if|else|then)\b', "keyword"),
            (r'(>=|<=|<>|<|>|=)', "relop"),
            (r'[A-Za-z_][A-Za-z0-9_]*', "id"),
            (r'\d+(\.\d+)?([Ee][+-]?\d+)?', "number"),
            (r'\s+', None)  # Ignore whitespace
        ]

    def tokenize(self, code):
        tokens = []
        while code:
            matched = False
            for pattern, token_type in self.patterns:
                match = re.match(pattern, code)
                if match:
                    value = match.group(0)
                    if token_type:  # Skip whitespace
                        tokens.append((token_type, value))
                    code = code[len(value):]
                    matched = True
                    break

            if not matched:
                raise ValueError(f"Invalid token at position: {code[:10]}...")

        return tokens

def main():
   
    with open('input.txt', 'r') as file:
        # Read the entire content of the file as a string
        file_contents = file.read()
    
    lexer = LexicalAnalyzer()
    
    try:
        tokens = lexer.tokenize(file_contents)
        print("Tokenized Output:")
        for token_type, value in tokens:
            if(token_type=='keyword'):
                print(f'({value},)')
            else:
                print(f"({token_type},{value})")
        
        #write in output.txt also

        with open('output.txt', 'w') as output_file:
            for token_type, value in tokens:
                if token_type == 'keyword':
                    output_file.write(f'({value},)\n')
                else:
                    output_file.write(f'({token_type},{value})\n')

    except ValueError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()
