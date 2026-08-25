#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class EndFindGiftCompareType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int EndFindGiftCompareType_TypeDefinitionIndex = 14277;

	class EndFindGiftCompareType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::EndFindGiftCompareType* LessThanOrEqual; // 0x0
		::MX::Logic::Battles::EndFindGiftCompareType* GreaterThanOrEqual; // 0x0

	};
}

