#include <iostream>
#define SIZE 10


using namespace std;
//Queue- first in first out
//Front sildikce geriye gider
//Rear ekleme yapildikca geriye gidecek

struct queue{
    int data[SIZE]; //dizi
    int indis;
    int front; //ilk eklenen deger
    int rear; //son eklenen deger
};


void initialize(queue *q){
    q->indis=0;
    q->front=0;
    q->rear=-1;
}


void enqueue(queue *q, int key){ //Kuyrugun sonuna ekleme yapar
    if(q->indis==(SIZE) //Kuyruk doluysa
        cout << "Kuyruk dolu!" << endl;

    else{
        q->rear++;
        if(q->rear==SIZE)
            q->rear=0; //dizinin son indisini gosteriyorsa, tasma hatasi olmamasi icin rear set edildi
        q->data[q->rear]=key;
        cout << key << " kuyruga eklendi!" << endl;
        q->indis++;
    }
}

void dequeue(queue *q){ //Kuyrugun ilk eklenen elemanini siler
    if(q->indis==0)
        cout << "Kuyruk bos!" << endl;

    else{
        cout << q->data[q->front] << " degeri kuyruktan silindi!" << endl;
        q->front++; //artik front indisi bir sonrakini gosterir
        if(q->front==SIZE)
            q->front=0; //dizinin ilk indisi dizinin boyutuna ulasmissa
        q->indis--;
    }
}

void print(queue *q){
    system("cls");
    if(q->indis==0)
        cout << "Kuyruk bos!" << endl;
    else{
        for(int i=q->front;i<=q->rear;i++)
            cout << q->data[i] << " <- ";}
}

int main()
{
    queue qu;
    initialize(&qu);
    int sayi, secim;
    while(true){
        cout << endl;
        cout << "KUYRUK UYGULAMASI" << endl;
        cout << "1- Enqueue " << endl;
        cout << "2- Dequeue " << endl;
        cout << "3- Print " << endl;
        cout << "4- Cikis " << endl;
        cout << "Yapmak istediginiz islemi seciniz: "; cin >> secim;
        switch(secim){
        case 1:
            cout << "Eklemek istediginiz sayiyi giriniz: "; cin >> sayi;
            enqueue(&qu, sayi);
            break;
        case 2:
            dequeue(&qu);
            break;
        case 3:
            print(&qu);
            break;
        case 4:
            cout << "Cikis yapiliyor..." << endl;
            return 0;
        }
    }

    return 0;
}
