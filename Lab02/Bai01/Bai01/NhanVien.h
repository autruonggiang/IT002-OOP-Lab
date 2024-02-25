#pragma once

#include <string>

class Employee
{
	std::string name;
	int dayWork;
	std::string code;
	std::string permission;
	float rate;

public:

	Employee(std::string name,
		int dayWork,
		std::string code,
		std::string permission,
		float rate) :
		name(name),
		dayWork(dayWork),
		code(code),
		permission(permission),
		rate(rate)
	{};

	Employee(std::string name, int dayWork) :
		name(name),
		dayWork(dayWork)
	{
		this->setCode();
		this->setPer();
		this->setRate();
	};

	Employee() {};

	Employee(const Employee& temp) {
		permission = temp.permission;
		rate = temp.rate;
		dayWork = temp.dayWork;
	}

	~Employee() {};

	inline std::string const getName() { return name; }
	inline int const getDayWork() { return dayWork; }
	inline std::string const getCode() { this->setCode();  return code; }
	inline std::string const getPer() { this->setPer();  return permission; }
	inline float const getRate() { return rate; }

	inline void setName(std::string name) { this->name = name; }
	inline void setDayWork(int dayWork) { this->dayWork = dayWork; }
	inline void setCode() { code = std::to_string(dayWork) + name; }
	inline void setPer();
	inline void setRate();

	void input();
	void const output();
};
