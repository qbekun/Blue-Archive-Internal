#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGObjectInteractionType; }

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGObjectInteractionType_TypeDefinitionIndex = 11206;

	class TBGObjectInteractionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::TableBoard::TBGObjectInteractionType* None; // 0x0
		::MX::TableBoard::TBGObjectInteractionType* Encounter; // 0x0
		::MX::TableBoard::TBGObjectInteractionType* Portal; // 0x0

	};
}

