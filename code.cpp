#include <iostream>
using namespace std;
class Kasa{
    private:
    int num;
    double rev;
    public:
    Kasa()
    :num(0)
    ,rev(0.0)
    {}
    void paid(){
        num++;
        rev+=0.5;
    }
    void freee(){
        num++;
    }
    void show(){
        cout<<"Amount of cars - "<<num<<endl;
        cout<<"Total income - "<<rev<<endl;
    }
};
int main() {
Kasa kasa;
char k;
cout<<"P - Paid ride"<<endl;
cout<<"O - Free ride"<<endl;
cout<<"S - Show the results"<<endl;
cout<<"Any other letter to stop the program"<<endl;
while(true){
    cin>>k;
    if(k=='P'||k=='p'){
        kasa.paid();
    }else if(k=='O'||k=='o'){
        kasa.freee();
    }else if(k=='S'||k=='s'){
        kasa.show();
    }else{
        break;
    }
}
    return 0;
}
