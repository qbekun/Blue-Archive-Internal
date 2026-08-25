#pragma once
#include "../unitysdk.h"

namespace FlatData { class ExternalBTNodeType; }

namespace FlatData
{
	inline static constexpr unsigned int ExternalBTNodeType_TypeDefinitionIndex = 9381;

	class ExternalBTNodeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ExternalBTNodeType* Sequence; // 0x0
		::FlatData::ExternalBTNodeType* Selector; // 0x0
		::FlatData::ExternalBTNodeType* Instant; // 0x0
		::FlatData::ExternalBTNodeType* SubNode; // 0x0
		::FlatData::ExternalBTNodeType* ExecuteAll; // 0x0

	};
}

