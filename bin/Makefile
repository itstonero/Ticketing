PROJECT_FILES = app.o logger.o  database_services.o user_model.o user_controller.o ticket_model.o ticket_controller.o utils.o sales_model.o sales_controller.o role_model.o role_controller.o auth_model.o auth_controller.o auth_service.o core_service.o activity_controller.o admin_activity_controller.o super_admin_activity_controller.o worker_activity_controller.o mapper_service.o
CFLAGS = g++ -Wall -c
LFLAGS = g++ -Wall
APP_SOURCE = ../source/
MODELS_H = $(APP_SOURCE)models/headers/
MODELS_I = $(APP_SOURCE)models/
CONTROLLERS_H = $(APP_SOURCE)controllers/headers/
CONTROLLERS_I = $(APP_SOURCE)controllers/
SERVICES_H = $(APP_SOURCE)services/headers/
SERVICES_I = $(APP_SOURCE)services/
SHARED_H = $(APP_SOURCE)shared/headers/
SHARED_I = $(APP_SOURCE)shared/
LIBRARIES = $(APP_SOURCE)libraries/

all: $(PROJECT_FILES)
	$(LFLAGS) $(PROJECT_FILES) -o main

app.o: $(APP_SOURCE)app.cpp
	$(CFLAGS) $(APP_SOURCE)app.cpp -o app.o

logger.o: $(SERVICES_I)logger.cpp $(SERVICES_H)logger.h
	$(CFLAGS) $(SERVICES_I)logger.cpp -o logger.o

user_model.o: $(MODELS_I)app_user_models.cpp $(MODELS_H)app_user_models.h
	$(CFLAGS) $(MODELS_I)app_user_models.cpp -o user_model.o

user_controller.o: $(CONTROLLERS_I)app_user_controller.cpp $(CONTROLLERS_H)app_user_controller.h
	$(CFLAGS) $(CONTROLLERS_I)app_user_controller.cpp -o user_controller.o

ticket_model.o: $(MODELS_I)ticket_models.cpp $(MODELS_H)ticket_models.h
	$(CFLAGS) $(MODELS_I)ticket_models.cpp -o ticket_model.o

ticket_controller.o: $(CONTROLLERS_I)ticket_controller.cpp $(CONTROLLERS_H)ticket_controller.h
	$(CFLAGS) $(CONTROLLERS_I)ticket_controller.cpp -o ticket_controller.o

utils.o: $(SHARED_I)util_model.cpp $(SHARED_H)util_model.h
	$(CFLAGS) $(SHARED_I)util_model.cpp -o utils.o

sales_model.o: $(MODELS_I)sales_models.cpp $(MODELS_H)sales_models.h
	$(CFLAGS) $(MODELS_I)sales_models.cpp -o sales_model.o

sales_controller.o: $(CONTROLLERS_I)sales_controller.cpp $(CONTROLLERS_H)sales_controller.h
	$(CFLAGS) $(CONTROLLERS_I)sales_controller.cpp -o sales_controller.o

role_model.o: $(MODELS_I)role_model.cpp $(MODELS_H)role_model.h
	$(CFLAGS) $(MODELS_I)role_model.cpp -o role_model.o

role_controller.o: $(CONTROLLERS_I)role_controller.cpp $(CONTROLLERS_H)role_controller.h
	$(CFLAGS) $(CONTROLLERS_I)role_controller.cpp -o role_controller.o

auth_model.o: $(MODELS_I)auth_models.cpp $(MODELS_H)auth_models.h
	$(CFLAGS) $(MODELS_I)auth_models.cpp -o auth_model.o

auth_controller.o: $(CONTROLLERS_I)auth_controller.cpp $(CONTROLLERS_H)auth_controller.h
	$(CFLAGS) $(CONTROLLERS_I)auth_controller.cpp -o auth_controller.o

auth_service.o: $(SERVICES_I)auth_service.cpp $(SERVICES_H)auth_service.h
	$(CFLAGS) $(SERVICES_I)auth_service.cpp -o auth_service.o

core_service.o: $(SERVICES_I)core_services.cpp $(SERVICES_H)core_services.h
	$(CFLAGS) $(SERVICES_I)core_services.cpp -o core_service.o

activity_controller.o: $(CONTROLLERS_I)activity_controller.cpp $(CONTROLLERS_H)activity_controller.h
	$(CFLAGS) $(CONTROLLERS_I)activity_controller.cpp -o activity_controller.o


admin_activity_controller.o: $(CONTROLLERS_I)admin_activity_controller.cpp $(CONTROLLERS_H)admin_activity_controller.h
	$(CFLAGS) $(CONTROLLERS_I)admin_activity_controller.cpp -o admin_activity_controller.o


super_admin_activity_controller.o: $(CONTROLLERS_I)super_admin_activity_controller.cpp $(CONTROLLERS_H)super_admin_activity_controller.h
	$(CFLAGS) $(CONTROLLERS_I)super_admin_activity_controller.cpp -o super_admin_activity_controller.o


worker_activity_controller.o: $(CONTROLLERS_I)worker_activity_controller.cpp $(CONTROLLERS_H)worker_activity_controller.h
	$(CFLAGS) $(CONTROLLERS_I)worker_activity_controller.cpp -o worker_activity_controller.o

mapper_service.o: $(SERVICES_I)mapper_service.cpp $(SERVICES_H)mapper_service.h
	$(CFLAGS) $(SERVICES_I)mapper_service.cpp -o mapper_service.o

database_services.o: $(SERVICES_I)database_services.cpp $(SERVICES_H)database_services.h
	$(CFLAGS) $(SERVICES_I)database_services.cpp -o database_services.o

clean:
	rm -f *.o

