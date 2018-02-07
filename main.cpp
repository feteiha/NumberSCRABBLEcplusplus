#include <iostream>
#include<algorithm>
using namespace std;

int main()
{int n, m , x, y, o , z, win, u, r, h;
win=0;
    cout<< "                       Welcome To NUMBER SCRABBLE!"<<endl;
    while(true){
    cout<<"Player 1: Choose a Number from 1 to 9: ";
    cin>>n;
    if(n>=1 && n <=9){
        break;
    }
    else{
        cout<<"Please enter a valid number."<<endl;
    }
    }
    while(true){
    cout<< "Player 2: ";
    cin>>m;
    if (m>=1 && n<=9 && m!=n){
        break;
    }
    else{
        cout<<"Please enter a valid number."<<endl;
    }
    }
    while(true){
    cout<<"Player 1: ";
    cin>>x;
    if (x>=1 && n<=9 &&x!=n && x!=m ){
        break;
    }
    else{
        cout<<"Please enter a valid number."<<endl;
    }
    }
    while(true){
    cout<<"Player 2: ";
    cin>>y;
    if (y>=1 && y<=9 && y!=x && y!=m && y!=n){
        break;
    }
    else{
        cout<<"Please enter a valid number."<<endl;
    }
    }
    while(true){
            cout<<"Player 1: ";
            cin>>o;
    if(o>=1 && o<=9 && o!=y & o!=x && o!=m && o!=n){
            break;
    }
    else{
        cout<<"Please enter a valid number."<<endl;
    }
    }
    if(n+x+o==15){
        cout<<"("<<n<<","<<x<<","<<o<<")"<<endl;
        cout<<"                     Player 1 WINS!";
        win=1;
    }
    if(win==0){
    while(true){
        cout<<"Player 2: ";
        cin>>z;
        if (z>=1 && z<=9 && z!=n && z!=m && z!=x && z!=y &&z!=o ){
            break;
        }
        else{
            cout<<"Please enter a valid number."<<endl;
        }
    }
    }
    if(m+y+z==15){
        cout<<"("<<m<<","<<y<<","<<z<<")"<<endl;
        cout<<"                     Player 2 WINS!";
        win=1;
    }
    if(win==0){
        while(true){
        cout<<"Player 1: ";
        cin>>u;
        if(u<=9 &&u>=1 && u!=n && u!=m && u!=x && u!=y && u!=o && u!=z){
            break;
        }
        else{
            cout<<"Please enter a valid number."<<endl;
        }
    }
    if (u+x+o==15 || n+x+u==15 || n+u+o==15){
    cout<<"("<<n<<","<<x<<","<<o<<","<<u<<")"<<endl;
        cout<<"                     Player 1 WINS!";
        win=1;
    }
    }
    if(win==0){
        while(true){
        cout<<"Player 2: ";
        cin>>r;
        if(r<=9 &&r>=1 && r!=n && r!=m && r!=x && r!=y && r!=o && r!=z && r!=u){
            break;
        }
        else{
            cout<<"Please enter a valid number."<<endl;
        }
    }
    if (m+y+r==15 || r+y+z==15 || m+r+z==15){
        cout<<"("<<m<<","<<y<<","<<z<<","<<r<<")"<<endl;
        cout<<"                     Player 2 WINS!";
        win=1;
    }
    }
    if(win==0){
                while(true){
        cout<<"Player 1: ";
        cin>>h;
        if(h<=9 &&h>=1 && h!=n && h!=m && h!=x && h!=y && h!=o && h!=z && h!=r && h!=u){
            break;
        }
        else{
            cout<<"Please enter a valid number."<<endl;
        }
    }
    if (n+x+h==15 || n+o+h==15 || n+u+h==15 || x+o+h==15 || x+u+h==15 || o+u+h==15){
        cout<<"("<<n<<","<<x<<","<<o<<","<<u<<","<<h<<")"<<endl;
        cout<<"                     Player 1 WINS!";
        win=1;
    }
    }
    if(win==0){
        cout<<"     Draw!!"<<endl;
    }
    return 0;
}
