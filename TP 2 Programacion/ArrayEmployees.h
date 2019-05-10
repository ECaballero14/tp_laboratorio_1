#ifndef ArrayEmployees_H_INCLUDED
#define ArrayEmployees_H_INCLUDED
typedef struct{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}eEmployee;

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(eEmployee* list,int len);
/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok

int addEmployee(eEmployee* list, int len, int id, char name[],char lastName[],float salary,int sector);
*/
int addEmployee(eEmployee* list, int len, int id, char name[],char lastName[],float salary,int sector);
/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
int findEmployeeById(eEmployee* list, int len,int id);
/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
 *
 */
 int removeEmployee(eEmployee* list, int len, int id);
/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployees(eEmployee* list, int len, int order);
/** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
 int printEmployees(eEmployee* list, int length);
 /** \brief ask for an answer
 *
 * \param list Employee*
 * \param length int
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */

 int PedirRespuesta();

  /** \brief list the start menu
 *
 * \param list Employee*
 * \param nothing
 * \return nothing
 *
 */
 void ImprimirMenu();
      /** \brief look for an empty space in the list
 *
 * \param list Employee*
 * \param length int
 *\return the index or [-1 if error]
 */
 int obtenerEspacioLibre(eEmployee* list,int len);
/** \brief return the index id to modify
 *
 * \param nothing
 *\return the index or [-1 if error]
 */
 int idAModificarRespuesta();
/** \brief modify the list using the id passed by parameter
 * \param list Employee*
 * \param length int
 *  \param id
 *\return 0 if ok  or [-1 if error]
 */

int modificarEmploy(eEmployee* list,int len,int id){



#endif
