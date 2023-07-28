#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): _name(obj._name) {
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
	this->_grade = obj._grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

void errorHandler(int &grade) {
	if (grade == 151 || !grade) {
		grade = grade ? 150 : 1;
		if (grade == 1)
			throw Bureaucrat::GradeTooHighException();
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat Bureaucrat::operator++() { // before
	_grade--;
	errorHandler(_grade);
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int) { // after
	Bureaucrat tmp = Bureaucrat(*this);
	_grade--;
	errorHandler(_grade);
	return (tmp);
}

Bureaucrat Bureaucrat::operator--() { // before
	_grade++;
	errorHandler(_grade);
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int) { // after
	Bureaucrat tmp = Bureaucrat(*this);
	_grade++;
	errorHandler(_grade);
	return (tmp);	
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj) {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return o;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low (> 150)";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high (< 1)";
}

