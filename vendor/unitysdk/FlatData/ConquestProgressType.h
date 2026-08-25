#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConquestProgressType; }

namespace FlatData
{
	inline static constexpr unsigned int ConquestProgressType_TypeDefinitionIndex = 9446;

	class ConquestProgressType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConquestProgressType* None; // 0x0
		::FlatData::ConquestProgressType* Upgrade; // 0x0
		::FlatData::ConquestProgressType* Manage; // 0x0

	};
}

