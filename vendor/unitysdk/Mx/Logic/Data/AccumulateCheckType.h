#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AccumulateCheckType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateCheckType_TypeDefinitionIndex = 13504;

	class AccumulateCheckType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::AccumulateCheckType* Damage; // 0x0
		::MX::Logic::Data::AccumulateCheckType* Heal; // 0x0

	};
}

