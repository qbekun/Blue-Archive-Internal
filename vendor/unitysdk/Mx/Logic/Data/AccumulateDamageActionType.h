#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AccumulateDamageActionType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateDamageActionType_TypeDefinitionIndex = 13505;

	class AccumulateDamageActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::AccumulateDamageActionType* None; // 0x0
		::MX::Logic::Data::AccumulateDamageActionType* Given; // 0x0
		::MX::Logic::Data::AccumulateDamageActionType* Taken; // 0x0

	};
}

