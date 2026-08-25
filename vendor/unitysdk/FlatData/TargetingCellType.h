#pragma once
#include "../unitysdk.h"

namespace FlatData { class TargetingCellType; }

namespace FlatData
{
	inline static constexpr unsigned int TargetingCellType_TypeDefinitionIndex = 9364;

	class TargetingCellType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TargetingCellType* None; // 0x0
		::FlatData::TargetingCellType* Near; // 0x0
		::FlatData::TargetingCellType* Far; // 0x0

	};
}

