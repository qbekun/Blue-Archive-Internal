#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class MultipleConditionCheckType; }

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int MultipleConditionCheckType_TypeDefinitionIndex = 14876;

	class MultipleConditionCheckType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType* And; // 0x0
		::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType* Or; // 0x0

	};
}

