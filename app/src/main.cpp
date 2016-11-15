/************************************************************************
\file main.cpp
\author Sree Hari Vignesh, Kalycito Infotech Private Limited.
\brief Implementation to handle parameters received in the command line.
************************************************************************/

/*------------------------------------------------------------------------------
Copyright (c) 2016, Kalycito Infotech Private Limited
All rights reserved.
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
	* Redistributions of source code must retain the above copyright
	  notice, this list of conditions and the following disclaimer.
	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.
	* Neither the name of the copyright holders nor the
	  names of its contributors may be used to endorse or promote products
	  derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
------------------------------------------------------------------------------*/

#include "OpenConfiguratorCore.h"
#include "ValidateCLIParameter.h"

using namespace IndustrialNetwork::POWERLINK::Application::openCONFIGURATORCLI;

int main(int parameterCount, char* parameter[])
{
	std::string projectParam = parameter[1];
	std::string projectPath = parameter[2];
	std::string outputParam = parameter[3];
	std::string outputPath = parameter[4];
	ValidateCLIParameter::GetInstance().ValidateParameter(parameterCount, projectParam, projectPath, outputParam, outputPath);
	return 0;
}