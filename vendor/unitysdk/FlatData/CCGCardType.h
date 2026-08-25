#pragma once
#include "../unitysdk.h"

namespace FlatData { class CCGCardType; }

namespace FlatData
{
	inline static constexpr unsigned int CCGCardType_TypeDefinitionIndex = 9546;

	class CCGCardType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CCGCardType* None; // 0x0
		::FlatData::CCGCardType* Spell; // 0x0
		::FlatData::CCGCardType* Equipment; // 0x0
		::FlatData::CCGCardType* Zone; // 0x0

	};
}

