#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}


void showImage(const bool image[][M]){
    cout<<"------------------------------------------------------------------------\n";
    for(int i=0;i<30;i++){
       cout<<"|";
       for(int j=0;j<70;j++){
        if(image[i][j]==1)cout<<"*";
        else cout<<" ";
         


       }
       cout<<"|\n";


    }
    cout<<"------------------------------------------------------------------------\n";
}
void updateImage(bool image[][M],int s,int x,int y){
             
    for(int i=0;i<30;i++){
       
       for(int j=0;j<70;j++){
            double front=0;
            front=sqrt(pow(i-x,2)+pow(j-y,2));
            double back=0;
            back = s-1;
            if(front<=back)image[i][j]=1;
            }
    }       



}




