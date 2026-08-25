#pragma once
#include "../unitysdk.h"

namespace FlatData { class EventChangeType; }

namespace FlatData
{
	inline static constexpr unsigned int EventChangeType_TypeDefinitionIndex = 9508;

	class EventChangeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EventChangeType* MainSub; // 0x0
		::FlatData::EventChangeType* SubMain; // 0x0

	};
}

