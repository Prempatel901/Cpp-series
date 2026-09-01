
#include<iostream>
using namespace std;
#include<string.h>


// Define a class time with instance variable hr, min and sec,  provide instance 
// methods setTime() showtime() setTime() method has formal argument withth
// the same name as instance variable also define setters and getters

class Time
{
    private:
        int hr, min, sec;
    public:
        void setTime(int hr,int min,int sec){
            this->hr= hr;
            this->min= min;
            this->sec= sec;
        }
        void showTime(){
            cout<<"\nhr:"<<hr<<" min:"<<min<<" sec:"<<sec;
        }
        void setHr(int hr){this->hr=hr;}
        void setMin(int min){this->min=min;}
        void setSec(int sec){this->sec=sec;}
        int getHr(){return hr;}
        int getMIn(){return min;}
        int getSec(){return sec;}
        bool operator>(Time t){
            if(hr>t.hr)
                return true;
            else if(hr<t.hr)
                return false;
            else if(min>t.min)
                return true;
            else if(min<t.min)
                return false;
            else if(sec>t.sec)
                return true;
            else
                return false;

        }
};

Time* getTimeArray(int size){
    return new Time[size];
}


void sortTime(Time t[],int size)
{
    int r,i;
    Time temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(t[i]>t[i+1])
            {
                temp=t[i];
                t[i]=t[i+1];
                t[i+1]=temp;
            }
        }
    }
}

void showTimeArray(Time t[],int size){
    for(int i=0;i<=size;i++)
        t[i].showTime();
}



// 5

class String
{
    private: 
        char *s;
        int length;
    public:
         String(){s=NULL; length=0;}
         void printString(){
            cout<<s<<endl;
         }
         void inputString(){
            int i,size=1;
            char ch=0, *p,*q;
            q = new char[1];
            *q ='\0';
            while(ch!=10)
            {
                p=new  char[size];
                ch=cin.get();
                if(ch==10)
                {
                    delete []p;
                    s=q;
                    length = strlen(s);
                    break;
                }
                for(i=0;i<size;i++)
                    p[i]=q[i];
                *(p+i-1)=ch;
                delete []q;
                q=new char[size+1];
                for(i=0;i<size;i++)
                    q[i]=p[i];
                q[i]='\0';
                delete []p;
                size++;
            }
         }

         void lower(){
            int i;
            for(i=0;i<length;i++)
            {
                if(s[i]>='A'&&s[i]<='Z')
                    s[i]=s[i]+32;
            }
         }
         void upper(){
            int i;
            for(i=0;i<length;i++)
            {
                if(s[i]>='a'&&s[i]<='z')
                    s[i]=s[i]-32;
            }
         }

         int getLength(){
            return length;
         }
         char* getString(){
            return s;
         }
};






int main(){
    String s1;
    s1.inputString();
    s1.upper();
    s1.printString();

    return 0;
}