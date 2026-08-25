#pragma once
#include "../unitysdk.h"

namespace FlatData { class OpenCondition; }

namespace FlatData
{
	inline static constexpr unsigned int OpenCondition_TypeDefinitionIndex = 9453;

	class OpenCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::OpenCondition* Hide; // 0x0
		::FlatData::OpenCondition* Lock; // 0x0
		::FlatData::OpenCondition* Open; // 0x0

	};
}

