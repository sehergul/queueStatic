#include <iostream>

using namespace std;
int *dizi=NULL;
int sira=0, sirabasi=0,boyut=2;

void toparla(){
    if(sirabasi==0)
        return ;
    for(int i=0;i<boyut;i++){
        dizi[i]=dizi[i+sirabasi];}
    sira-=sirabasi;
    sirabasi=0;}

int Deque(){
    if(sira==sirabasi){
        cout << "Sira bos!" << endl;
        return -1;}
    if((sira-sirabasi)<boyut/4){


    }
    return dizi[sirabasi++];
}

void Enque(int a){
    if(dizi==NULL){
        dizi = new int [2];}
    if(sira>=boyut){
        boyut*=2;
        int *dizi2 = new int [boyut];
        for(int i=0;i<boyut/2;i++){
            dizi2[i]=dizi[i];}
        free(dizi);
        dizi = dizi2;}
    dizi[sira++]=a;}


int main()
{
    for(int i=0;i<20;i++){
        Enque(i*10);}
    for(int i=0;i<10;i++){
        cout << Deque() << endl;}
    toparla();
    for(int i=0;i<20;i++){
        Enque(i*10);}
    for(int i=0;i<30;i++){
        cout << Deque() << endl;}

    return 0;
}
