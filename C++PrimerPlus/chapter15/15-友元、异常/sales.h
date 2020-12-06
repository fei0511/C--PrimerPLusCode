#ifndef SALES_H_
#define SALES_H_
//1.Ctrl + Enter移动到上一行插入
//2.Ctrl + Shift + Enter移动到下一行插入
//3.输入）光标移出（）
//4.输入】光标移出【】
//5.输入}光标移出{ }

#include <stdexcept>
#include <string>

class Sales
{
public:
	enum { MONTHS = 12 };
	class bad_index : public std::logic_error
	{
	public:
		explicit bad_index(int ix, const std::string & s = "Index error in Sales object\n");
		int bi_val() const { return bi; }
		virtual ~bad_index() throw() { }

	private:
		int bi;
	};

	explicit Sales(int yy = 0);
	Sales(int yy, const double* gr, int n);
	virtual ~Sales() { }
	int Year() const { return year; }
	virtual double operator[](int i) const;
	virtual double& operator[](int i);


private:
	double gross[MONTHS];
	int year;
};

class LabeledSales : public Sales
{
public:
	class nbad_index : public Sales::bad_index
	{
	public:
		nbad_index(const std::string & lb, int ix, const std::string & s = "Index error in LabeledSales object\n");
		const std::string& label_val() const { return lbl; }
		virtual ~nbad_index() throw() { }

	private:
		std::string lbl;
	};
	explicit LabeledSales(const std::string& lb = "none", int yy = 0);
	LabeledSales(const std::string& lb, int yy, const double* gr, int n);
	virtual ~LabeledSales() { }
	const std::string& Label() const { return label; }
	virtual double operator[](int i) const;
	virtual double& operator[](int i);
private:
	std::string label;
};



#endif // !TV_H_
