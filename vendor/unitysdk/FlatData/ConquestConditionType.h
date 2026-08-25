#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConquestConditionType; }

namespace FlatData
{
	inline static constexpr unsigned int ConquestConditionType_TypeDefinitionIndex = 9449;

	class ConquestConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConquestConditionType* None; // 0x0
		::FlatData::ConquestConditionType* OpenDateOffset; // 0x0
		::FlatData::ConquestConditionType* ItemAcquire; // 0x0
		::FlatData::ConquestConditionType* ParcelUse; // 0x0
		::FlatData::ConquestConditionType* KillUnit; // 0x0

	};
}

