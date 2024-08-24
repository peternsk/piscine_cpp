#ifndef DEF_FIXED_HPP
#define DEF_FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const& FixedToCopie);
        Fixed(int m_entier);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed& operator=(const Fixed& C);

    private:
        int entier;
        static const int entConst = 8;
};

#endif