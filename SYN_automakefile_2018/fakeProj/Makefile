##
## EPITECH REPECT, 2019
##
## File description:
##
##

HEADERS_DIR	=	

HEADERS_DIR	=	

HEADERS_DIR	=	

HEADERS_DIR	=	

HEADERS_DIR	=	fakeProj

HEADERS_DIR	=	gcc

HEADERS_DIR	=	 -W -Wall -Include

HEADERS_DIR	=	

BLD_FILE	=	VERSION	

OBJ		=	$(SRC:.c=.o)

buildriver	=	$(shell echo $$(($$(cat $(BLD_FILE)) + 1)) > $(BLD_FILE))

dbuildriver	=	$(shell echo $$(($$(cat $(BLD_FILE)) - 1)) > $(BLD_FILE))

all:	$(EXEC)

$(EXEC):	$(OBJ)
	 $(CC) -o $(EXEC) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re:	fclean all

archive:
		$(call buildriver)
		$(ZIP) $(ZIPFLAGS) $(BCK_DIR)/backup.$(ZIP) $(SRC)
		@echo $(BCK_DIR)/backup.$(ZIP) file generated.

revert:
		$(call dbuildriver)
		$(UNZIP) $(UNZIPFLAGS) $(BCK_DIR)/backup.$(ZIP)

num:
	@cat $(BLD_FILE)


delete:
		rm -f $(BCK_DIR)/backup.$(ZIP)	

.PHONY: all clean fclean re

