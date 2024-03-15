from utils import longest_common_prefix
from utils import segregate_and_find_max_lcp


def prefix_util(productions):
    productions.sort()
    return segregate_and_find_max_lcp(productions)
def left_factor(grammar):
    new_grammar = grammar.copy()

    non_terminals = list(new_grammar.keys())  # Store the initial list of keys
    index = 0  # Initialize an index to track the current position

    while index < len(non_terminals):
        non_terminal = non_terminals[index]
        # print(non_terminal)
        productions = new_grammar[non_terminal].copy()
        common_prefix = prefix_util(productions)

        if common_prefix:
            new_non_terminal = non_terminal + "'"
            new_grammar[new_non_terminal] = [production[len(common_prefix):] for production in productions if production.startswith(common_prefix)]
            for production in productions:
                if production.startswith(common_prefix):
                    new_grammar[non_terminal].remove(production)
            new_grammar[non_terminal].append(common_prefix + new_non_terminal)
            
            # Add the new_non_terminal to the list of non_terminals
            non_terminals.append(new_non_terminal)

        # Move to the next non-terminal in the list
        index += 1


    return new_grammar

def print_grammar(grammar):
    for non_terminal, productions in grammar.items():
        print(non_terminal, " -> ", " | ".join(productions))

def main():
    grammar = {
        'A': ['aAB', 'aBc','aAc'],
    }
    


    print("Original Grammar:")
    print_grammar(grammar)

    left_factored_grammar = left_factor(grammar)

    print("\nLeft-Factored Grammar:")
    print_grammar(left_factored_grammar)

if __name__ == "__main__":
    main()
