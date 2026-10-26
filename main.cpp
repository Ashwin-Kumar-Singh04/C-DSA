#include <iostream>
#include <string>
using namespace std;
/*class Student{
public:
    string name;
    int rollno;
    float cgpa;

    ///making a constructor
    ///MUlTIPLE CONSTRUCTORS CAN BE CREATED AND THIS IS CALLED CONSTRUCTOR OVERLOADING
    Student(string n,int r,float c){
        name=n;
        rollno=r;
        cgpa=c;
    }
    Student(int r,float c,string n){
        name=n;
        rollno=r;
        cgpa=c;
    }
    Student(string n,float c){
        name=n;
        cgpa=c;
    }

    ///imp remember: whenever you are creating a parameterized constructor then also create a default constructor

    Student(){
     ///Default constructor : called evary time during normal initialization

    }

};
int main(){
    Student s3("Bha",105,9.0);

    Student s4(82,8.9,"shu");

    Student s5("Vikram",10.0);
    ///NORMAL INITIALIZATION : DEFAULT CONSTRUCTOR IS CALLED
    Student s1;
    s1.name="Ashwin";
    s1.rollno=82;
    s1.cgpa=8.86;

    Student s2;
    s2.name="Hri";
    s2.rollno=20;
    s2.cgpa=9.2;

    cout<<"s1 "<<s1.name<<" has "<<s1.cgpa<<" gpa "<<endl;
    cout<<"s2 "<<s2.name<<" has "<<s2.cgpa<<" gpa "<<endl;
    cout<<"s3 "<<s3.name<<" has "<<s3.cgpa<<" gpa "<<endl;
    cout<<"s4 "<<s4.name<<" has "<<s4.cgpa<<" gpa "<<endl;
    cout<<"s5 "<<s5.name<<" has "<<s5.cgpa<<" gpa "<<endl;


    return 0;
}*/

/*class Car{
public:
    string name;
    float mileage;
    int power;
    bool isE20compatible;
};
int main()
{
   Car c1;
   c1.mileage=9.2;
   c1.name="Mahindra Thar";
   c1.power=118;
   c1.isE20compatible=true;

   Car c2={"Toyota Fortuner",7.2,200,false};
   cout<<c2.power<<endl;
   return 0;

}*/

///Function inside a class
/*class Car{
public:
    string name;
    float mileage;
    int power;
    bool isE20compatible;
    void display(){ //pasing a class inside a function
        ///jis function ke through call lagaya uska power name mileage aur compatability print hoga
        cout<<name<<" "<<power<<" "<<mileage<<" "<<isE20compatible<<endl;
    }
};
//details are display using outside function
//void display(Car c){ //pasing a class inside a function
  //  cout<<c.name<<" "<<c.power<<" "<<c.mileage<<" "<<c.isE20compatible<<endl;
//}
int main()
{
   Car c1;
   c1.mileage=9.2;
   c1.name="Mahindra Thar";
   c1.power=118;
   c1.isE20compatible=true;

   Car c2={"Toyota Fortuner",7.2,200,false};
   //display(c1);
   //display(c2);
   ///displaying via function inside a class
   c1.display();
   c2.display(); ///jis function ke through call lagaya uska power name mileage aur compatability print hoga
   return 0;

}
*/
///passing objects to functions
///here the objects pass are pass by value
/*class Student{
public:
    string name;
    int rollno;
    float cgpa;
    Student(string n,int r,float c){
        name=n;
        rollno=r;
        cgpa=c;
    }
    void print(){
        cout<<name<<" "<<rollno<<" "<<cgpa<<" "<<endl;
    }
};
void change(Student &s){///here it comes as pass by refernce if i want to change name i can use & to access it by refernece
    //bina ampersand ke ek naya object bana hoga jo s hai aiur usme bhi wahi sab values hogi
    s.name="Bhaw";
}
int main(){
    Student s3("Bha",105,9.0);
    change(s3);
    s3.print();
    return 0;
}*/

///This Keyword
/*class Pokemon{
public:
    string name;
    string type;
    int hp;
    ///this is added so that the system doesnot get confused in global and local name
    ///we can also give default values in a constructor
    Pokemon(string name,string type,int hp){
        this->name=name;
        this->type=type;
        this->hp=hp;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    Pokemon p3("Mewtwo","Psychic",200);
    p3.print();
    Pokemon p1("Pikachu","Electric",70);
    Pokemon p2("charizard","Fire",120);
    return 0;
}*/

///MAKE  A FRACTION CLASS WHICH>POORTS ADDITION MULTIPLICATION ADDITION AND SUBTRACTION AND SIMPLIFY
/*class fraction{
public:
    int num;
    int den;
    fraction(int num,int den){
        this->num=num;
        this->den=den;
        simplify();///simplify har baar call ho
    }
    fraction(){//default constructor
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    ///inside
    void multip(fraction f){
        num=num*f.num;
        den=den*f.den;
        simplify();
    }
    void add(fraction f){
        num=num*f.den+f.num*den;
        den=den*f.den;
        simplify();
    }
    void subtract(fraction f){
        num=num*f.den-den*f.num;
        den=den*f.den;
        simplify();
    }
    void divide(fraction f){
        num=num*f.den;
        den=den*f.num;
        simplify();
    }
    void simplify(){
        int hcf=gcd(num,den);
        num/=hcf;
        den/=hcf;
        if(den < 0){
            num=-num;
            den=-den;
        }
    }
    int gcd(int a,int b){
        if(a==0) return b;
        return gcd(b%a,a);
        }
};
///outside
fraction multiply(fraction &f1,fraction &f2){
    fraction res;//default constructor required for this
    res.num=f1.num*f2.num;
    res.den=f1.den*f2.den;
    return res;
}
fraction addition(fraction &f1,fraction &f2){
    fraction res;//default constructor required for this
    res.num=f1.num*f2.den+f1.den*f2.num;
    res.den=f1.den*f2.den;
    return res;
}
int main(){
    fraction f1(2,5);
    fraction f2(3,5);
    //fraction mul=multiply(f1,f2);
    //fraction add=addition(f1,f2);
    //f1.print();
    //f2.print();
    //cout<<"multiplication of fraction:";
    //mul.print();
    //cout<<"addition of fraction:";
    //add.print();

    //f1.print();
    //f1.multip(f2);
    //f1.print();
    //f1.add(f2); /// f1 me hi pehle wali value aa jayegi
    f1.print();
    f1.subtract(f2);
    f1.print();

    fraction f3(6,8);
    f3.print(); /// here also instead of 6/8 we get 3/4 because  in the constructor only the simplify function simplifies it

    return 0;
}*/

///ComplexNO
/*class fraction{
public:
    int num;
    int den;
    fraction(int num,int den){
        this->num=num;
        this->den=den;
        simplify();///simplify har baar call ho
    }
    fraction(){//default constructor
    }
    void show(){
        cout<<num<<"/"<<den;
    }
    ///inside
    void simplify(){
        int hcf=gcd(num,den);
        num/=hcf;
        den/=hcf;
        if(den < 0){
            num=-num;
            den=-den;
        }
    }
    int gcd(int a,int b){
        if(a==0) return b;
        return gcd(b%a,a);
        }
};
class complexno{
public:
    int real;
    int imaginary;
    complexno(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void sum(complexno c){
        real=real+c.real;
        imaginary=imaginary+c.imaginary;
    }
    void sub(complexno c){
        real=real-c.real;
        imaginary=imaginary-c.imaginary;
    }
    void multiply(complexno c){
        real=real*c.real-imaginary*c.imaginary;
        imaginary=real*c.imaginary+imaginary*c.real;
    }
    void divide(complexno c){
        int real_num=real*c.real+imaginary*c.imaginary;
        int real_den=c.real*c.real+c.imaginary*c.imaginary;
        fraction realno(real_num,real_den);
        int imagin_num=imaginary*c.real-c.imaginary*real;
        int imagin_den=c.real*c.real+c.imaginary*c.imaginary;
        fraction imag(imagin_num,imagin_den);
        realno.show();
        if(imagin_num>0 && imagin_den>0){
            cout<<"+";
        }
        else{
            cout<<"-";
        }
        imag.show();
        cout<<"i";
    }
    void print(){
        if(imaginary>0){
            cout<<"THE COMPLEX NUMBER IS "<<real<<"+"<<imaginary<<"i"<<endl;
        }
        else if(imaginary<0){
            cout<<"THE COMPLEX NUMBER IS "<<real<<"-"<<-imaginary<<"i"<<endl;
        }
    }

};

int main(){
    complexno c1(1,1);
    complexno c2(2,1);
    //c1.print();
    //c1.multiply(c2);
    //c1.print();
    c1.divide(c2);
    return 0;
}
*/

