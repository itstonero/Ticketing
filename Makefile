main: app.o user.o ticket.o shared.o sales.o roles.o logger.o auth.o
	g++ app.o user.o ticket.o shared.o sales.o roles.o logger.o auth.o -o main

app.o: app.cpp
	g++ app.cpp -c

user.o: app_user_models.o app_user_controller.o
	g++ app_user_models.o app_user_controller.o -o user.o

app_user_models.o: app_user_models.cpp
	g++ user/app_user_models.cpp -c

app_user_controller.o: app_user_controller.cpp
	g++ user/app_user_controller.cpp -c

ticket.o: ticket_models.o ticket_controller.o
	g++ ticket_models.o ticket_controller.o -o ticket.o

ticket_models.o: ticket_models.cpp
	g++ ticket/ticket_models.cpp -c

ticket_controller.o: ticket_controller.cpp
	g++ ticket/ticket_controller.cpp -c


shared.o: util_model.o
	g++ util_model.o -o shared.o

util_model.o: util_model.cpp
	g++ shared/util_model.cpp -c


sales.o: sales_models.o sales_controller.o
	g++ sales_models.o sales_controller.o -o sales.o

sales_models.o: sales_models.cpp
	g++ sales/sales_models.cpp -c

sales_controller.o: sales_controller.cpp
	g++ sales/sales_controller.cpp -c


roles.o: role_model.o role_controller.o
	g++ role_model.o role_controller.o -o roles.o

role_model.o: role_model.cpp
	g++ roles/role_model.cpp -c

role_controller.o: role_controller.cpp
	g++ roles/role_controller.cpp -c


logger.o logger.cpp
	g++ logger/logger.cpp -c

auth.o: auth_service.o auth_models.o auth_controller.o
	g++ auth_service.o auth_models.o auth_controller.o -o auth.o

auth_service.o: auth_service.cpp
	g++ auth/auth_service.cpp -c

auth_models.o: auth_models.cpp
	g++ auth/auth_models.cpp -c

auth_controller.o: auth_controller.cpp
	g++ auth/auth_controller.cpp -c



clean:
	rm -f app.o user.o app_user_models.o app_user_controller.o ticket.o ticket_models.o ticket_controller.o shared.o util_model.o sales.o sales_models.o sales_controller.o roles.o role_model.o role_controller.o logger.o auth.o auth_service.o auth_models.o auth_controller.o 