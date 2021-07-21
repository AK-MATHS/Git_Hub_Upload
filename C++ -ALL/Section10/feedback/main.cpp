#include <iostream>

#include <string>

using namespace std;





int main(){

    string entry{};

    string formatted_entry{};

    size_t position{};

   

    cout<<"Enter your string: ";

    getline(cin,entry);

    position=entry.length()-1;

       

    for(size_t i{0};i<entry.length();i++){

        cout<<entry.at(i)<<endl;

           

            while(i<position){

                do{

                    string new_char{entry.at(i)};

                    formatted_entry+=new_char;

                    i++;

                    break;

                    string new_char_dec{entry.at(position)};

                    formatted_entry+=new_char_dec;

                    i--;

                }while(i<position);

                cout<<formatted_entry << endl;

        }

        }

  return 0;

}