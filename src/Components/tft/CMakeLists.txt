idf_component_register(
    SRCS "tft.c"
    INCLUDE_DIRS "include" #put header files in include that we want to be used in other files 
	#we can use priv requires if we use includes, and requires if another .c file uses one of the .h files i made in another folder.
)
