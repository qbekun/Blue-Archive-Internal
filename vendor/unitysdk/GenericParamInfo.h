#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int GenericParamInfo_TypeDefinitionIndex = 23579;

	class GenericParamInfo : public Il2CppObject
	{
	public:
		::System::Object** pklass; // 0x10
		::System::Int32 name; // 0x18
		::System::UInt16 flags; // 0x20
		::System::UInt32 token; // 0x24
		::System::Object** constraints; // 0x28

	};

