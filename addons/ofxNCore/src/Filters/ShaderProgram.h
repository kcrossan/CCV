/*
*  ShaderProgram.h
*  
*
*  Created on 2/2/09.
*  Copyright 2009 NUI Group. All rights reserved.
*
*/

#ifndef SHADERPROGRAM_H_
#define SHADERPROGRAM_H_

#include <stdlib.h> //needed to avoid redefinition of exit
#include "ofConstants.h"

class ShaderProgram {

	private:
		GLuint  vertex_shader_id;
		GLuint  geometry_shader_id;
		GLuint  fragment_shader_id;
		GLuint  program;
	
	public:
		ShaderProgram(const char* vertexSourceFile, const char* geometrySourceFile, const char* fragmentSourceFile); //pass NULL or 0 where you want the fixed funtion pipeline
		inline void enable(void)  { glUseProgram(program);  };
		inline void disable(void) { glUseProgram(0);        };
		inline void setUniform1f(const char* name, float val){  glUniform1f(glGetUniformLocation(this->program, name), val);  };
		inline void setUniform1i(const char* name, int val){  glUniform1i(glGetUniformLocation(this->program, name), val);  };
		virtual ~ShaderProgram();
		
};


#endif //SHADERPROGRAM_H_
