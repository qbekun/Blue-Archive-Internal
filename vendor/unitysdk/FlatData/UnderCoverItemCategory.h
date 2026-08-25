#pragma once
#include "../unitysdk.h"

namespace FlatData { class UnderCoverItemCategory; }

namespace FlatData
{
	inline static constexpr unsigned int UnderCoverItemCategory_TypeDefinitionIndex = 9659;

	class UnderCoverItemCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::UnderCoverItemCategory* Consumable; // 0x0
		::FlatData::UnderCoverItemCategory* Interaction; // 0x0
		::FlatData::UnderCoverItemCategory* Skill; // 0x0
		::FlatData::UnderCoverItemCategory* Collection; // 0x0

	};
}

