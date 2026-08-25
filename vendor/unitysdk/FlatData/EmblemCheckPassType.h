#pragma once
#include "../unitysdk.h"

namespace FlatData { class EmblemCheckPassType; }

namespace FlatData
{
	inline static constexpr unsigned int EmblemCheckPassType_TypeDefinitionIndex = 9514;

	class EmblemCheckPassType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EmblemCheckPassType* None; // 0x0
		::FlatData::EmblemCheckPassType* Default; // 0x0
		::FlatData::EmblemCheckPassType* Favor; // 0x0
		::FlatData::EmblemCheckPassType* Story; // 0x0
		::FlatData::EmblemCheckPassType* Potential; // 0x0

	};
}

