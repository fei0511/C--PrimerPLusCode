#include <iostream>
#include <string>
#include <vector> 

//���ܣ�16.8 ��׼ģ���(ģ����vector)
//ʱ�䣺2020��12��8��18:20:37

//struct Review
//{
//	int rating;
//	std::string title;
//};
//bool FillReview(Review& rr);
//void ShowReview(const Review& rr);
//
//int main()
//{
//	using std::vector;
//	using std::cout;
//
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//	{
//		books.push_back(temp);
//	}
//	int num = books.size();
//	if (num > 0)
//	{
//		cout << "Thank you. You entered the following:\n" << "Rating\tBook\n";
//		for (int i = 0; i < num; i++)
//		{
//			ShowReview(books[i]);
//		}
//		cout << "Reprising:\n" << "Rating\tBook\n";
//		vector<Review>::iterator pr;
//		for (pr = books.begin(); pr != books.end(); pr++)
//		{
//			ShowReview(*pr);
//		}
//		vector<Review> oldlist(books);
//		if (num > 3)
//		{
//			books.erase(books.begin() + 1, books.begin() + 3);   //ɾ���ڶ����͵�������
//			cout << "Aftere erase:\n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//			{
//				ShowReview(*pr);
//			}
//			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);   //����ǰ�棬������ԭʼ�ĵڶ�����
//			cout << "After insertion:\n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//			{
//				ShowReview(*pr);
//			}
//		}
//		books.swap(oldlist);
//		cout << "Swaping oldlist with books:\n";
//		for (pr = books.begin(); pr != books.end(); pr++)    
//		{
//			ShowReview(*pr);
//		}
//	}
//	else
//	{
//		cout << "Nothing entered, nothing gained.\n";
//	}
//
//	system("pause");
//	return 0;
//}
//
//bool FillReview(Review& rr)
//{
//	std::cout << "Enter book title (quit to quit): ";
//	std::getline(std::cin, rr.title);
//	if (rr.title == "quit")
//	{
//		return false;
//	}
//	std::cout << "Enter book rating: ";
//	std::cin >> rr.rating;
//	if (!std::cin)
//	{
//		return false;
//	}
//	while (std::cin.get() != '\n')
//	{
//		continue;
//	}
//	return true;
//}
//
//void ShowReview(const Review& rr)
//{
//	std::cout << rr.rating << "\t" << rr.title << std::endl;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter book title (quit to quit): The Cat Who Knew Vectors
Enter book rating: 5
Enter book title (quit to quit): Candid Canines
Enter book rating: 7
Enter book title (quit to quit): Warriors of Wonk
Enter book rating: 4
Enter book title (quit to quit): Quantum Manners
Enter book rating: 8
Enter book title (quit to quit): quit
Thank you. You entered the following:
Rating  Book
5       The Cat Who Knew Vectors
7       Candid Canines
4       Warriors of Wonk
8       Quantum Manners
Reprising:
Rating  Book
5       The Cat Who Knew Vectors
7       Candid Canines
4       Warriors of Wonk
8       Quantum Manners
Aftere erase:
5       The Cat Who Knew Vectors
8       Quantum Manners
After insertion:
7       Candid Canines
5       The Cat Who Knew Vectors
8       Quantum Manners
Swaping oldlist with books:
5       The Cat Who Knew Vectors
7       Candid Canines
4       Warriors of Wonk
8       Quantum Manners
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/