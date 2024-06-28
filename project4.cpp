#include <iostream>
#include <cstring>

using namespace std;

void Rez(char str[], char delim[], char result[]){
    char * token=strtok(str,delim);

    while(token!=NULL){
        strcat(result, token);
        token=strtok(NULL, delim);
    }


}
void Print(char result[]){
    for(int i=0; i<strlen(result); i++){
        cout<<result[i];
}
}

int main(){
    char str[30];
    cin.getline(str, 30);

    char delim[10];
    cin.getline(delim, 10);

    char result[30];

    Rez(str,delim,result);
    Print(result);





    return 0;
}