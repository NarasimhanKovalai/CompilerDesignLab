import re
import streamlit as st

class LexicalAnalyzer:
    def __init__(self):
        self.patterns = [
            (r'\b(if|else|then)\b', "keyword"),
            (r'(>=|<=|<>|<|>|=)', "relop"),
            (r'[A-Za-z][A-Za-z0-9]*', "identifier"),
            (r'\d+(\.\d+)?(E[+-]?\d+)?', "number"),
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
    st.set_page_config("Assignment-2")
    st.header(":green[Lexical Analyser]")
    st.subheader(":blue[Compiler Design Lab - 2]")
    st.subheader(":blue[Made by Narasimhan Kovalai]")
    st.subheader(":blue[20CS01075]")
    
    uploaded_file = st.file_uploader("Upload a text file", type=["txt"])
    
    if uploaded_file is not None:
        file_contents = uploaded_file.read().decode()
        
        lexer = LexicalAnalyzer()
        
        try:
            tokens = lexer.tokenize(file_contents)
            st.write(":green[Tokenized Output:]")
            for token_type, value in tokens:
                if token_type=='keyword':
                    st.write(f"({value},)")
                st.write(f"({token_type},{value})")
        except ValueError as e:
            st.error(f"Error: {e}")

if __name__ == "__main__":
    main()
