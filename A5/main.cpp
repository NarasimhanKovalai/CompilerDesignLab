#include <iostream>
#include <map>
#include <vector>
#include "./utils.hpp"
#include "./token.h"


using namespace std;
void print_maps(string filename, map<string, string> m)
{
    ofstream MyFile(filename);
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        MyFile << it->first << "\t:\t" << it->second << endl;
    }
    MyFile << endl;
}

int main()
{
    map<string, string> terminal_map;
    map<string, string> r_terminal_map;
    map<string, string> non_terminal_map;
    map<string, string> r_non_terminal_map;

    string input_filename = "grammar_t_nt.txt";
    string output_filename = "grammar_single.txt";

    transform_to_single_char_grammar(input_filename, output_filename, terminal_map, r_terminal_map, non_terminal_map, r_non_terminal_map);
    

    char filename[] = "example.txt";

    string tokenized_input = "";
    get_string(filename, tokenized_input, terminal_map);
    cout << tokenized_input << endl;
    // Parser P = Parser(G, first_sets, follow_sets);
    // vector<vector<string>> parsing_table = P.get_parsing_table();
    // P.print_parsing_table("out/Parsing-Table2.txt");

    // // Step 4
    // char filename[] = "in/input1.txt";

    // string tokenized_input = "";
    // get_string(filename, tokenized_input, terminal_map);
    // cout << tokenized_input << endl;

    // if (tokenized_input == "ERROR$")
    // {
    //     cout << "Rejected" << endl;
    // }
    // else
    // {
    //     P.parse_input(tokenized_input);
    // }

    // return 0;
    return 0;
}