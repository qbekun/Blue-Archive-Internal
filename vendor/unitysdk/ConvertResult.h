#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ConvertResult_TypeDefinitionIndex = 31819;

	class ConvertResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ConvertResult* Success; // 0x0
		ConvertResult* CannotConvertNull; // 0x0
		ConvertResult* NotInstantiableType; // 0x0
		ConvertResult* NoValidConversion; // 0x0

	};

