##
## EPITECH PROJECT, 2021
## my_makefile
## File description:
## makefile
##

SRC	=	./client \
		./server

all:
	@for MAKE_PATH in $(SRC); do \
		make -C $$MAKE_PATH -s; \
	done
	@cp ./client/myteams_cli .
	@cp ./server/myteams_server .

clean:
	@for MAKE_PATH in $(SRC); do \
		make -C $$MAKE_PATH clean -s ; \
	done


fclean:
	@for MAKE_PATH in $(SRC); do \
		make -C $$MAKE_PATH fclean -s ; \
	done
	@rm -f myteams_cli
	@rm -f myteams_server

re:		fclean all
