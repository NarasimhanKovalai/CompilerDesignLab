#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

#define ASCII_M 77

class Grammar
{
public:
    string start_symbol;
    vector<string> non_terminals;
    vector<string> terminals;
    map<string, vector<string>> rules;

    Grammar()
    {
    }

    void input_grammar(string filename)
    {
        // input format
        // non_terminals - number of non-terminals followed by each non-terminal
        // terminals - number of terminals followed by each terminal
        // rules - number of rules followed by each rule

        string myText;

        // Read from the text file
        ifstream MyReadFile(filename);

        int terms, non_terms, rule_count;
        string temp_term, temp_non_term, prod_rule, non_term, rules_rhs;
        string produces = "->";
        char del = '|';

        getline(MyReadFile, myText);
        start_symbol = myText;

        getline(MyReadFile, myText);
        non_terms = stoi(myText);
        for (int i = 0; i < non_terms; i++)
        {
            getline(MyReadFile, myText);
            temp_non_term = myText;
            non_terminals.push_back(temp_non_term);
        }
        getline(MyReadFile, myText);

        terms = stoi(myText);
        for (int i = 0; i < terms; i++)
        {
            getline(MyReadFile, myText);
            temp_term = myText;
            terminals.push_back(temp_term);
        }
        getline(MyReadFile, myText);

        rule_count = stoi(myText);
        for (int i = 0; i < rule_count; i++)
        {
            getline(MyReadFile, myText);
            prod_rule = myText;
            int id = prod_rule.find(produces);

            vector<string> prod_rules;

            if (id != string ::npos)
            {
                non_term = prod_rule.substr(0, id);
                rules_rhs = prod_rule.substr(id + 2);
                stringstream ss(rules_rhs);
                string word;
                while (!ss.eof())
                {
                    getline(ss, word, del);
                    prod_rules.push_back(word);
                }
            }
            else
            {
                cout << "Error with production rules" << endl;
                return;
            }
            rules[non_term] = prod_rules;
        }
        MyReadFile.close();
    }


    void output_grammar(string filename)
    {
        ofstream MyFile(filename);
        MyFile << "Non Terminals: ";
        for (auto i = 0; i < non_terminals.size() - 1; i++)
        {
            MyFile << non_terminals[i] << ", ";
        }
        MyFile << non_terminals[non_terminals.size() - 1] << endl;
        MyFile << "Terminals: ";
        for (auto i = 0; i < terminals.size() - 1; i++)
        {
            MyFile << terminals[i] << ", ";
        }
        MyFile << terminals[terminals.size() - 1] << endl;
        MyFile << "Rules:" << endl;
        for (auto i = rules.begin(); i != rules.end(); i++)
        {
            MyFile << i->first << " -> ";
            int l = i->second.size();
            for (int j = 0; j < l - 1; j++)
            {
                MyFile << i->second[j] << " | ";
            }
            MyFile << i->second[l - 1] << endl;
        }
    }
};


void transform_to_single_char_grammar(string input_filename, string output_filename, map<string, string> &terminal_map, map<string, string> &r_terminal_map, map<string, string> &non_terminal_map, map<string, string> &r_non_terminal_map)
{
    ifstream MyReadFile(input_filename);
    ofstream MyFile(output_filename);
    ofstream q_1("./Q1_A4/input.txt");

    string produces = "->";
    char del = '|';
    char new_del = ' ';

    char non_term_ch = 'A';
    char term_ch = 'a';
    vector<char> extra_terms{'+', '-', '*', '/', '%', '&'};

    int terms, non_terms, rule_count;
    string temp_term, temp_non_term, prod_rule, non_term, rules_rhs, temp, temp_start;
    string myText;

    // start_symbol
    getline(MyReadFile, myText);
    temp_start = myText;
    temp.assign(1, non_term_ch);
    non_terminal_map.insert(make_pair(temp_start, temp));
    r_non_terminal_map.insert(make_pair(temp, temp_start));
    MyFile << non_term_ch << endl;
    non_term_ch++;

    // non_terms
    getline(MyReadFile, myText);

    non_terms = stoi(myText);
    MyFile << myText << endl;
    for (int i = 0; i < non_terms; i++)
    {
        getline(MyReadFile, myText);
        temp_non_term = myText;
        if (temp_non_term != temp_start)
        {
            temp.assign(1, non_term_ch);
            non_terminal_map.insert(make_pair(temp_non_term, temp));
            r_non_terminal_map.insert(make_pair(temp, temp_non_term));
            MyFile << non_term_ch << endl;
            non_term_ch++;
        }
        else
        {
            MyFile << non_terminal_map[temp_start] << endl;
        }
    }

    // terms
    getline(MyReadFile, myText);
    terms = stoi(myText);
    MyFile << myText << endl;
    for (int i = 0; i < terms; i++)
    {
        getline(MyReadFile, myText);
        temp_term = myText;

        if (i >= 26)
        {
            term_ch = extra_terms[i - 26];
        }

        temp.assign(1, term_ch);
        terminal_map.insert(make_pair(temp_term, temp));
        r_terminal_map.insert(make_pair(temp, temp_term));
        MyFile << term_ch << endl;
        term_ch++;
    }
    terminal_map.insert(make_pair("#", "#"));
    r_terminal_map.insert(make_pair("#", "#"));

    // rules
    getline(MyReadFile, myText);
    rule_count = stoi(myText);
    MyFile << myText << endl;
    for (int i = 0; i < rule_count; i++)
    {
        getline(MyReadFile, myText);
        prod_rule = myText;
        stringstream ss(prod_rule);
        string word;
        getline(ss, word, new_del);
        MyFile << non_terminal_map[word];
        q_1<<non_terminal_map[word];
        while (!ss.eof())
        {
            getline(ss, word, new_del);
            cout<<"Word is"  <<word<<endl;
            if (word == "->" || word == "|")
            {
                MyFile << word;
                q_1<<" "<<word<<" ";
            }
            else
            {
                if (non_terminal_map.find(word) != non_terminal_map.end())
                {
                    MyFile << non_terminal_map[word];
                     q_1 << non_terminal_map[word];
                }
                else if (terminal_map.find(word) != terminal_map.end())
                {
                    MyFile << terminal_map[word];
                    q_1 << terminal_map[word];
                }
            }
            // prod_rules.push_back(word);
        }
        MyFile << endl;
        q_1<<endl;
    }
    ofstream storeNchar("non_char.txt");
    cout<<"Iam "<<non_term_ch<<endl;
    storeNchar << non_term_ch;

    storeNchar.close();

    MyReadFile.close();
    q_1.close();
}