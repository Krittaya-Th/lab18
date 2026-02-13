#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
        double A,B,C,D,E,F,G,H,I,J,K,L;
        if((R2.x+R2.w)-(R1.x+R1.w)>=R2.w||(R1.x+R1.w)-(R2.x+R2.w)>=R1.w){
            return 0;
        }else if((R2.y+R2.h)-(R1.y+R1.h)>=R2.h||(R1.y+R1.h)-(R2.y+R2.h)>=R1.h){
            return 0;
        }else{
            A=R1.x;
            B=R2.x;
            if(A>=B){
                C=A;
            }else{
                C=B;
            }
            D=A+R1.w;
            E=B+R2.w;
            if(D<=E){
                F=D-C;
            }else{
                F=E-C;
            }
        
            G=R1.y;
            H=R2.y;
            if(G<=H){
                I=G;
            }else{
                I=H;
            }
            J=G-R1.h;
            K=H-R2.h;
            if(J>=K){
                L=I-J;
            }else{
                L=I-K;
            }
        
            return F*L;
        }
        
        

}