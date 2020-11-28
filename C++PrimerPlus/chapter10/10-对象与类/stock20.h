#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	//�������������еĺ��������Զ���Ϊ��������
	void set_tot() { total_val = shares * share_val; }

public:
	Stock();      // Ĭ�Ϲ��캯��
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();    //��������
	void buy(long num, double price); 
	void sell(long num, double price);
	void update(double price);
	void show() const; // const��������thisָ�룬�����ú�������ʹ��thisָ�����޸ı������ֵ
	const Stock & topval(const Stock & s) const; // �����е�const��ʾ�ú��������޸�s�����ֵ
};


#endif // !STOCK00_H_

