#include "mysql.h" // Kütüphaneyi dahil ediyoruz 

MYSQL *mysql; // mysql Pointer'ı
MYSQL_RES *result; // Mysql bağlantı işleminin sonuçlarını tutan pointer
MYSQL_ROW row; // Dönen sonuçların satır satır tutacak değişken
MYSQL *conn; // Bağlantı pointer'ı
int query; // sorgu için kullanılan değişken
 
void main()
{
	mysql_init(&mysql); // burayı null da yapailiyosunuz yani msql_init(NULL)
	connection = mysql_real_connect(&mysql,"host","user","password","database",0,0,0); // burada bağlantı için gereken bilgileri giriyosunuz
	if(connection==NULL) // eğer bağlantı sağlanmadıysa
	{
		cout<<mysql_error(&mysql)<<endl;
	}
	else // Bağlantı başarılı ise
	{
		cout<<"CONNECTED!"<<endl;
	}
}
