#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Result_TypeDefinitionIndex = 37425;

	class Result : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		Result* InProgress; // 0x0
		Result* Success; // 0x0
		Result* ConnectionError; // 0x0
		Result* ProtocolError; // 0x0
		Result* DataProcessingError; // 0x0

	};

