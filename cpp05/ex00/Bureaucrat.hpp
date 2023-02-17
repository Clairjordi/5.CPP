/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:08:34 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/17 17:31:08 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & toCopy);
		Bureaucrat & operator=(const Bureaucrat & toCopy);
		~Bureaucrat();

		const std::string getName() const;
		int getGrade() const;
		void gradeUp(int N = 1);
		void gradeLow(int N = 1);

	private:
		const std::string	_name;
		int					_grade;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & i);

#endif
