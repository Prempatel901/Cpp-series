#include<iostream>
using namespace std;
#include<string.h>

class Game 
{
    private:
    int score[5];
    public:
        void seScore(int score,int round)
        {
            this->score[round-1] = score;
        }
        int getScore(int round){
            return score[round-1];
        }
};

class GameResult:public Game{
    private:
        int result[5];
    public:
        static const int WIN=2,LOOSE=0,DRAW=1; 
        void setResult(int round, int result)
        {
            this->result[round-1]=result;
        }
        int getResult(int round){
            return result[round-1];
        }
        void finalResult(){
            int scoreSum = 0,resultSum=0;
            for(int i=0;i<=4;i++){
                resultSum+=result[i];
                scoreSum+=getScore(i+1);
            }
            cout<<"\nTotal Score"<<scoreSum;
            cout<<"\nTotal Result Points"<<resultSum;
        }
};


class Actor{
    private:
        char name[20];
        int age;
    public:
        void setActor(char n[],int a){strcpy(name,n);age=a;}
        char* getName(){return name;}
        int getAge(){return age;}
};

class TVActor:virtual public Actor{
    private:
        int tvProCount;
    public:
        void setTvProCount(int x){tvProCount=x;}
        int getTvProCount(){return tvProCount;}
        void setTvActor(char n[],int a,int tpc, int count){
            setActor(n,a);
            setTvProCount(count);
        }
        void showActor(){
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<getTvProCount();
        }
};

class MoiveActor:virtual  Actor{
    private:
        int movieCount;
    public:
        void setMovieCount(int m){movieCount= m;}
        int getMovieCount(){return movieCount;}
        void setMoiveActor(char n[], int a,int smc)
        {
            setActor(n,a);
            setMovieCount(smc);
        }
        void showMovieActor(){
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<getMovieCount();
        }
};

class allScreenActor:public TVActor,public MoiveActor{

        public:
            void setMoiveData(char n[],int a,int tvp,int mp){
                setActor(n,a);
                setTvProCount(tvp);
                setMovieCount(mp);
            }
            void showMoiveData(){
                cout<<endl;
                cout<<"\n"<<getName()<<"\n"<<getAge()<<"\n"<<getTvProCount()<<"\n"<<getMovieCount();
            }
};