#include <iostream>
using namespace std;

//created a class string to store, add, equate and output strings.
class STRING{
    private:
        char str[100];
    public:
        //member function for calculating the size of string.
        int size_of(char s[]){
            int n = 0;
            for(int i = 0; s[i] != '\0'; i++){
                ++n;
            }
            return n;
        }

        //member function to output the string.
        void display_string(char s[]){
            int len = size_of(s);
            for(int i=0; i<len; i++){
                cout << s[i];
            }
        }

        //member function to store the string.
        void store_string(char s[]){
            int len = size_of(s);
            for(int i = 0; i < len; i++){
                str[i] = s[i];
            }
        }

        //member function to add two strings.
        void add_string(char a[], char b[]){
            int len1 = size_of(a);
            int len2 = size_of(b);

            store_string(a);

            for(int j=0; j<=len2; j++){
                str[len1 + j] = b[j];
            }
            cout << "The addition of both the strings will be: ";
            display_string(str);
            cout << endl;
        }

        //member function to equate two strings.
        void equate_string(char a[], char b[]){
            int len1 = size_of(a);
            bool flag = 0;

            for(int i=0; i<len1; i++){
                if(a[i] != b[i]){
                    flag = 1;
                }
            }
            if(flag == 1){
                cout << "The strings are not equal." << endl;
            }
            else{
                cout << "The string are equal." << endl;
            }
        }

};

int main(){

    STRING str_obj;
    char s1[] = "Deep";
    char s2[] = "Water";
    char s3[] = "Deep";
    str_obj.add_string(s1, s2);
    str_obj.equate_string(s1, s2);
    str_obj.equate_string(s1, s3);
    return 0;
    
}