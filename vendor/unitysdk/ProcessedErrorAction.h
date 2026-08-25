#pragma once
#include "unitysdk.h"

class ProcessedErrorAction;

	inline static constexpr unsigned int ProcessedErrorAction_TypeDefinitionIndex = 10392;

	class ProcessedErrorAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ProcessedErrorAction* None; // 0x0
		ProcessedErrorAction* WebAPIError; // 0x0
		ProcessedErrorAction* CustomError; // 0x0
		ProcessedErrorAction* DefaultError; // 0x0

	};

