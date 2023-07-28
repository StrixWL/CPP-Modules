#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		const 	std::string _name;
		int		_grade;
	public:
		/* OCF */
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);
		/* getters */
		std::string getName(void) const;
		int getGrade(void) const;
		/* operators */
		Bureaucrat operator++(); // before
		Bureaucrat operator++(int); // after
		Bureaucrat operator--(); // before
		Bureaucrat operator--(int); // after
		/* exceptions */
		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Grade too high (< 1)";
				}
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Grade too low (> 150)";
				}
		};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);
