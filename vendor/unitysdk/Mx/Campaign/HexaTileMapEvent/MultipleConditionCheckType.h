#pragma once
#include "../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class MultipleConditionCheckType; }

namespace MX::Campaign::HexaTileMapEvent
{
	inline static constexpr unsigned int MultipleConditionCheckType_TypeDefinitionIndex = 14908;

	class MultipleConditionCheckType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Campaign::HexaTileMapEvent::MultipleConditionCheckType* And; // 0x0
		::MX::Campaign::HexaTileMapEvent::MultipleConditionCheckType* Or; // 0x0

	};
}

