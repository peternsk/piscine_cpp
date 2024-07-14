#include "intro.hpp"

using namespace std;

/*=================================== premier code ======================================*/


// int  main(){
//     // cout << "hello world" << endl;
//     /*
//         teste le end line.
//     */
//     cout << "hello world" << endl << "howdy" << endl;
//     return(0);
// } 

/*=============================== Déclarez une variable ==================================*/

/*
    VARIABLE POSSIBLE

    char            'a'
    string          "abc"
    int             <- 0 ->
    unsigned int    0 ->
    double          3.1416
    boul            true / false
*/

// int main() {
//     string  nom_utilisateur             = "Nsaka"; 
//     string  prenom_utilisateur          = "Peter"; 
//     unsigned int     age_utilisateur    = 30;
//     double  taille_m                    = 1.82;
//     double  poids_lb                    = 175.3;

//     cout << "Nom: " << nom_utilisateur << endl;
//     cout << "Prenom: " << prenom_utilisateur << endl;
//     cout << "Age: "<< age_utilisateur << endl;
//     cout << "Taille: "<< taille_m << endl;
//     cout << "Poids: "<< poids_lb << endl;
// }


/*================ Stockez les informations données par l'utilisateur ==================*/

/*
    cout << = output de donnerdu programme vers terminal
    cin  >> = faire entrer des donner dans le programme
*/
// int main(){
//     unsigned int age_utilisateur;
    
//     cout << "Tu as quelle age ?" << endl;
//     cin >> age_utilisateur;
//     cout << "tu as " << age_utilisateur << " ans!" << endl;
//     return(0);
// }

/*================ Déclarez une variable non modifiable (constante) ==================*/

/*
    (exemple de const)

    int const nombreNiveaux(10);
    string const motDePasse("wAsTZsaswQ"); //Le mot de passe secret
    double const pi(3.14);
    unsigned int const pointsDeVieMaximum(100); //Le nombre maximal de points de vie
*/

// int main()
// {
//     string user_login;
//     string user_pw = "zazou123";
//     string try_user_pw;
//     unsigned int attempt = 3;

//     cout << "Welcome to Basic Motion " << endl;
//     sleep(1);
//     cout << "Please enter your login" << endl;
//     cin >> user_login;
//     usleep(100);
//     cout << "Please enter your password" << endl;
//     cin >> try_user_pw;

//     while((try_user_pw != user_pw) && attempt-- > 1)
//     {
//         cout << "Incorect password " << endl << "Please try again " << endl;
//         cout << "you have " << attempt << " more attempt left" << endl;
//         cin >> try_user_pw;
//     }
//     if((try_user_pw == user_pw))
//         cout << "You are in !! " << endl;
//     else
//         cout << "unable to connect to yout account " << endl;
// }

/*================ Créez un fichier source et un fichier d'en-tête ==================*/

/*
    [.cpp] : Un fichier source : il contient le code source de la fonction.

    [.hpp] : Un fichier d'en-tête  : il contient uniquement la description de la fonction,
             ce qu'on appelle le prototype de la fonction.
    
`*/

/*======================= Découvrez les tableaux dynamiques =========================*/

/*
    #include <vector>
    vector<TYPE> NOM(TAILLE);

    vector<int> tableau(5, 3);  //Crée un tableau de 5 entiers valant tous 3
    
    tableau.push_back(8);
    On ajoute une 4ème case au tableau qui contient la valeur 8
*/

int main()
{
    int num_of_student = 5;
    vector<string> students_names(num_of_student, "name");
    int i = 0;

    students_names[0] = "James";
    students_names[1] = "Sarah";
    students_names[2] = "Stephane";
    students_names[3] = "Jacob";
    students_names[4] = "Maya";

    while(i < num_of_student)
    {
        cout << students_names[i] << endl;
        i++;
    }
    students_names.push_back("max");
    num_of_student += 1;

    while(i < (int)students_names.size())
    {
        cout << students_names[i] << endl;
        i++;
    }

}
