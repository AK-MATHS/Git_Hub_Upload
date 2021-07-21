// Substitution Cipher


#include <iostream>
#include <string>



using namespace std;

int main() {
    
    string secret_message {};
    cout << "Please enter your secret message: ";
    
    getline(cin, secret_message);
//    cin >> secret_message;
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string encrypted_message {};
    
    
//    Encryption
    for (char letter : secret_message) {
        
        size_t position = alphabet.find(letter);
            
        if (position != string::npos) {
            encrypted_message += key.substr(position, 1);
        }
        
        else {
            encrypted_message += letter;
        }
    }
    
    cout << encrypted_message << endl;
    
    
//    Decryption
    
    string decrypted_message {};
    
    for (char letter : encrypted_message) {
        size_t position = key.find(letter);
        
        if (position != string::npos) {
            
            decrypted_message += alphabet.substr(position, 1);
        }
        
        else {
            decrypted_message += letter;
        }
    }
    
    cout << decrypted_message << endl;
    
    
    
    
    
    
    
    
//    size_t length_alphabet = alphabet.length();
//    size_t length_key = key.length();
    
//    cout << length_alphabet << " " << length_key;
    
    
    cout << endl;
    return 0;
}