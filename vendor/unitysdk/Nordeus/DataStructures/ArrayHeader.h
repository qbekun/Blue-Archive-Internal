#pragma once
#include "../../unitysdk.h"

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int ArrayHeader_TypeDefinitionIndex = 21230;

	class ArrayHeader : public Il2CppObject
	{
	public:
		::System::UInt32 type; // 0x10
		::System::UInt32 length; // 0x18

	};
}

