# include<vector>
# include <iostream> //helps writing and reading from terminal
using namespace std; //we dont have to use std:: everywhere 

class List{
    private: //only class can acess it
    protected: //only class and inherinances can acess
    public: //everyon can access it
        List(){//constructor, gets called when object gets created

        }
        ~List(){//deconstructor, gets called when program gets exited
            
        }
        // dynamically strore items of same type
        // vector <dtype> name
        vector<string> list;
        string name;
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
};