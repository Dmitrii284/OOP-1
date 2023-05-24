#include <iostream>
#include<string>

class Tovar
{
private:
	std::string _name;
	float _price;
public: // Это метод

	//Другой способ   Один обект
	Tovar(std::string name, float price) // Это конструктор он должен быть всегда в поле public: публичном 
	{
		_name = name;
		_price = price;
	}
	// Другой способ
	void Print()
	{
		std::cout << "Name " << _name << '\n';
		std::cout << "Price " << _price << '\n';
	}
	void SetName(std::string name) {
		_name = name;
	}
	void SetPrice(float price)
	{
		_price = price;
	}	
	float GetPrice() {
		return _price;
	}
	std::string GetName() {
		return _name;
	}
};


class Emploise
{
private:
  int _id;
  std::string _name;

public:

	Emploise(int id, std::string name) {
		_id = id;
		_name = name;
	}

	void Print()
	{
		std::cout << "Name " << _id << '\n';
		std::cout << "Price " << _name << '\n';
	}

	void SetName(std::string name) {
		_name = name;
	}

	void SetName(int id) {
		_id = id;
	}

	void GetName(std::string name) {
		_name = name;
	}

	void GetName(int id) {
		_id = id;
	}


};



int main() {


	// Один обект
	/*Tovar tovar1("Morkov", (99.99F));
	tovar1.Print();*/

	// Несколько объектов
	Tovar tovar1("Morkov", (99.99F));
	Tovar tovar2("Kapusta", (500.4F));
	Tovar tovar3("Kartoshka", (200.1F));

	Tovar* tovar4 = new  Tovar("Bread", 25.6f); // Помещаем в указатель сам класс
	
	tovar1.Print();
	tovar2.Print();
	tovar3.Print();




	/*Tovar tovar1;
	tovar1.SetName("Morkov");
	tovar1.SetPrice(99.99F);
	std::cout << tovar1.GetName() << '\n';
	std::cout << tovar1.GetPrice() << '\n';
	tovar1.Print()*/;

	
	Emploise emploise1(12354, "Kapefefu1sta");
	Emploise emploise2(23358, "K234234apu1sta");
	Emploise emploise3(1223355, "Kap234234u1sta");
	emploise1.Print();
	emploise2.Print();
	emploise3.Print();
	tovar4->Print();

	delete(tovar4); //Закрфыли область памяти
		

	return 0;
		
}


