
#include <string.h>

#include "ErrorCode.h"


bool error_isSuccess(ErrorCode code) {
	if (code == ERROR_SUCCESS) {
		return true;
	}
	return false;

}

const char* error_getErrorMessage(ErrorCode code) {
	
	if (code == ERROR_SUCCESS) {
		return "no error!:)";
	}
	if (code == ERROR_MATRIX_IS_NULL) {
		return "the matrix you gave is'nt initilize";
	}
	if (code == ERROR_MATRIX_IS_NULL) {
		return "the matrix you gave is'nt initilize";
	}
	if (code == ERROR_MALLOC_FAILED) {
		return "the malloc has failed";
	}
	if (code == ERROR_OUT_OF_MATRIX) {
		return "you tried to get/set a value out of the matrix";
	}
	if (code == ERROR_CANT_CALCULATE) {
		return "the matrixs you gave are impossible to calculate";
	}
	if (code == ERROR_NOT_IMPLEMENTED) {
		return "the function isnt implemented";
	}
	if (code == ERROR_CANT_CREATE_MATRIX) {
		return "cant create a matrix";
	}
	if(code == ERROR_POINTER_IS_NULL) {
		return "the pointer you sent is null";
	}
	return "unknown error";

}