OBJS = app.o logger.o user_model.o user_controller.o ticket_model.o ticket_controller.o utils.o sales_model.o sales_controller.o role_model.o role_controller.o auth_model.o auth_controller.o auth_service.o core_service.o activity_controller.o admin_activity_controller.o super_admin_activity_controller.o worker_activity_controller.o
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

app.o: ../app.cpp ../app.h
	$(CC) $(CFLAGS) ../app.cpp -o app.o

logger.o: ../logger/logger.cpp ../logger/logger.h
	$(CC) $(CFLAGS) ../logger/logger.cpp -o logger.o

user_model.o: ../user/app_user_models.cpp ../user/app_user_models.h
	$(CC) $(CFLAGS) ../user/app_user_models.cpp -o user_model.o

user_controller.o: ../user/app_user_controller.cpp ../user/app_user_controller.h
	$(CC) $(CFLAGS) ../user/app_user_controller.cpp -o user_controller.o

ticket_model.o: ../ticket/ticket_models.cpp ../ticket/ticket_models.h
	$(CC) $(CFLAGS) ../ticket/ticket_models.cpp -o ticket_model.o

ticket_controller.o: ../ticket/ticket_controller.cpp ../ticket/ticket_controller.h
	$(CC) $(CFLAGS) ../ticket/ticket_controller.cpp -o ticket_controller.o

utils.o: ../shared/util_model.cpp ../shared/util_model.h
	$(CC) $(CFLAGS) ../shared/util_model.cpp -o utils.o

sales_model.o: ../sales/sales_models.cpp ../sales/sales_models.h
	$(CC) $(CFLAGS) ../sales/sales_models.cpp -o sales_model.o

sales_controller.o: ../sales/sales_controller.cpp ../sales/sales_controller.h
	$(CC) $(CFLAGS) ../sales/sales_controller.cpp -o sales_controller.o

role_model.o: ../roles/role_model.cpp ../roles/role_model.h
	$(CC) $(CFLAGS) ../roles/role_model.cpp -o role_model.o

role_controller.o: ../roles/role_controller.cpp ../roles/role_controller.h
	$(CC) $(CFLAGS) ../roles/role_controller.cpp -o role_controller.o

auth_model.o: ../auth/auth_models.cpp ../auth/auth_models.h
	$(CC) $(CFLAGS) ../auth/auth_models.cpp -o auth_model.o

auth_controller.o: ../auth/auth_controller.cpp ../auth/auth_controller.h
	$(CC) $(CFLAGS) ../auth/auth_controller.cpp -o auth_controller.o

auth_service.o: ../auth/auth_service.cpp ../auth/auth_service.h
	$(CC) $(CFLAGS) ../auth/auth_service.cpp -o auth_service.o

core_service.o: ../core/core_services.cpp ../core/core_services.h
	$(CC) $(CFLAGS) ../core/core_services.cpp -o core_service.o

activity_controller.o: ../activity/activity_controller.cpp ../activity/activity_controller.h
	$(CC) $(CFLAGS) ../activity/activity_controller.cpp -o activity_controller.o


admin_activity_controller.o: ../activity/admin_activity_controller.cpp ../activity/admin_activity_controller.h
	$(CC) $(CFLAGS) ../activity/admin_activity_controller.cpp -o admin_activity_controller.o


super_admin_activity_controller.o: ../activity/super_admin_activity_controller.cpp ../activity/super_admin_activity_controller.h
	$(CC) $(CFLAGS) ../activity/super_admin_activity_controller.cpp -o super_admin_activity_controller.o


worker_activity_controller.o: ../activity/worker_activity_controller.cpp ../activity/worker_activity_controller.h
	$(CC) $(CFLAGS) ../activity/worker_activity_controller.cpp -o worker_activity_controller.o

clean:
	rm -f *.o

