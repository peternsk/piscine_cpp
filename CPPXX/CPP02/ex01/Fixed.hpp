#ifndef DEF_FIXED_HPP
#define DEF_FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const& FixedToCopie);
        /*----- new constucteur ----- */
        Fixed(int const n );
        Fixed(float const n );

        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed& operator=(const Fixed& C);

    private:
        int entier;
        static const int entConst = 8;
};

#endif