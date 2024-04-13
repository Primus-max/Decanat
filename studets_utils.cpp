//#include "studets_utils.h"
//#include <iostream>
//using namespace std;


// Не получилось вынести реализацю, были ошибки :
//Серьезность	Код	Описание	Проект	Файл	Строка	Состояние подавления	Подробности
//Ошибка	LNK1169	обнаружен многократно определенный символ - один или более	Decanat	C : \Users\FedoTT\source\repos\TOPAcademyLearning\Decanat\x64\Debug\Decanat.exe	1
//Ошибка	LNK2005	"char const * * subjectNames" (? subjectNames@@3PAPEBDA) уже определен в Decanat.obj	Decanat	C : \Users\FedoTT\source\repos\TOPAcademyLearning\Decanat\studets_utils.obj	1

// Понятно почему это происходит. Так как подключаю #include "studets_utils.h" и объявляется subjectNames
// Хотелось бы это разобрать на уроке