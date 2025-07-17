#ifndef MINHEAP_H
#define MINHEAP_H
#include <string>
using namespace std;

class MinHeap
{
    private:
        int *heap; //��������� ������� ��� ���������� ��� ������
        int N; // ���� �������� ���� ���� � �������


    public:
        MinHeap();  //���������� ������ ����� ���������

        void antimetatheseis(int i);
        void BuildMinHeap(string filename); //������ �� ����� �� ������ ��� ���� ���������
        int GetSizeMinHeap();
        int FindMin();
        void Insert(int number);
        void DeleteMin();  //�������� ��� ��������� ���������



};

#endif // MINHEAP_H
