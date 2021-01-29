#ifndef RLYRES_H_INCLUDED
#define RLYRES_H_INCLUDED

typedef struct TRAIN
{
  char train_no[10];
  char from[30];
  char to[30];
  int fac_fare;
  int sac_fare;
} Train;

typedef struct PASSENGER
{
  char p_name[30];
  char gender;
  char address[30];
  int age;
  char train_no[10];
  char p_class;
  int ticketno;
  char mobile_no[11];
} Passenger;

int enterchoice();
void add_train();
void view_train();
int book_ticket(passenger);
int *get_ticket_no(char *);
void view_ticket(int);
void view_all_booking();
void view_booking(char *);
int cancel_ticket(int);
int cancel_train(char *);
int check_mobile_no(char *);
int check_train_no(char *);
Passenger *get_passenger_details();
int get_booked_ticket_count(char *, char);
int last_ticket_no();
int book_ticket(Passenger);

#endif // RLYRES_H_INCLUDED