#ifndef MINHEAP_H
#define MINHEAP_H
#include <string>
using namespace std;

class MinHeap
{
    private:
        int *heap; //δυναμικός πίνακας για αποθήκευση των κόμβων
        int N; // ποσα στοιχεία εχει τώρα ο πίνακας


    public:
        MinHeap();  //δημιουργία άδειου σωρου ελαχίστων

        void antimetatheseis(int i);
        void BuildMinHeap(string filename); //χτίζει με βάζει το αρχείο την σωρό ελαχίστων
        int GetSizeMinHeap();
        int FindMin();
        void Insert(int number);
        void DeleteMin();  //Διαγραφή του ελαχίστου στοιχείου



};

#endif // MINHEAP_H
