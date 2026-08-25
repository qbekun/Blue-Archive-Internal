#pragma once
#include "../unitysdk.h"

namespace FlatData { class EngageType; }

namespace FlatData
{
	inline static constexpr unsigned int EngageType_TypeDefinitionIndex = 9387;

	class EngageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EngageType* SearchAndMove; // 0x0
		::FlatData::EngageType* HoldPosition; // 0x0

	};
}

