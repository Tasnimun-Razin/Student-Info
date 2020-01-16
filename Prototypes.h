#ifndef PROTOTYPES
#define PROTOTYPES

typedef enum{F_NAME, L_NAME, N_NAME, C_NAME, SSC_YEAR, B_G, EMAIL, SIM, C_N}search_t;
enum{GP, TELETALK, AIRTEL, ROBI, BANGLALINK};

typedef struct stdnt
{	char f_name[10];
	char l_name[10];
	char n_name[7];
	char c_name[5];
	int ssc_year[5];
	char b_g[5];
	char email[25];
	char sim[20];
	char c_n[20];
	float gpa[4];
	char schlrshp[15];
	char pay[4];
	int adv[5];
	int dues[5];
	char date[10];
	int id;
}DATA;

/*typedef struct emp
{
	int roll;
}DATA;*/

// prototypes
void readFromFile();
	
void add();

void display(int);
void displaySM();
void displayAll();
void displayFull();
void displayDues();
void display_NotPaid();
void displayD(int);
void displayNP(int);

void search_stdnt(char *text, search_t type);
void search_sim();

void save();
void del();
void fremove();
void modify();

void heading();
void headingDues();
void heading_NotPaid();



#endif
