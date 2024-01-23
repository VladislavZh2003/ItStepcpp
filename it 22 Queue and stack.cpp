#include <iostream>

class Queue
{
	private:
		int size;
		int* queue;
	
	public:
		Queue()
		{
			this->size = 0;
			this->queue = new int [100];
		};
		
		void Add(int x)
		{
			*(queue+size) = x;
			size++;
		}
		void Remove()
		{
			if(size != 0)
			{
				for(int i = 0; i<size-1; i++)
				{
					*(queue+i) = *(queue+i+1);
				}
				size--;
			}
			else
			{
				std::cout<<"Queue is empty!"<<std::endl;
			}
		}
		void Print()
		{
			if(!size)
			{
				std::cout<<"Queue is empty!"<<std::endl;
			}
			else
			{
				for(int i = 0; i<size; i++)
				{
					std::cout<<*(queue+i)<<"\t";
				}
				std::cout<<std::endl;
			}
		}
		
		Queue operator+(const Queue &q)
		{
			Queue Qresult;
			for(int i = 0; i<this->size; i++)
			{
				Qresult.Add(this->queue[i]);
			}
			for(int i = 0; i<q.size; i++)
			{
				Qresult.Add(q.queue[i]);
			}
			return Qresult;
		}
		
		~Queue()
		{
			delete []queue;
		};
	
};

int main()
{
	Queue q1,q2;
	q1.Add(3);
	q1.Add(4);
	q2.Add(1);
	q2.Add(7);
	
	Queue q3 = q1 + q2;
	q3.Print();
	q3.~Queue();
}
