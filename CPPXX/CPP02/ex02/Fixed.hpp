#ifndef DEF_FIXED_HPP
#define DEF_FIXED_HPP

#include <string>
#include <iostream>

/*------------------------------------------------------*/
/*------------            class             ------------*/
/*------------------------------------------------------*/

class Fixed
{
    public:
        /*----- constucteur ----- */
        Fixed();
        Fixed(Fixed const& FixedToCopie);
        Fixed(int const n );
        Fixed(float const n );

        /*----- destructor ----- */
        ~Fixed();

        /*----- methods ----- */
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        /*----- overload op. met. ----- */
        Fixed& operator=(const Fixed& C);

        bool operator > (const Fixed& obj);
        bool operator >= (const Fixed& obj);
        bool operator == (const Fixed& obj);
        bool operator != (const Fixed& obj);
        bool operator <= (const Fixed& obj);
        bool operator < (const Fixed& obj);

        Fixed operator + (const Fixed& obj) const;
        Fixed operator - (const Fixed& obj) const;
        Fixed operator * (const Fixed& obj) const;
        Fixed operator / (const Fixed& obj) const;

        Fixed& operator++();        //  prefix
        Fixed& operator--();        //  prefix
        Fixed  operator++(int);     //  postfix
        Fixed  operator--(int);     //  postfix

    private:
        int entier;
        static const int entConst = 8;
};


/*------------------------------------------------------*/
/*------------         functions            ------------*/
/*------------------------------------------------------*/

std::ostream& operator<<(std::ostream &output, Fixed const& obj);

#endif