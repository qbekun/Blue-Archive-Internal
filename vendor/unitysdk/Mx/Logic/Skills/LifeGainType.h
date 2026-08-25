#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class LifeGainType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int LifeGainType_TypeDefinitionIndex = 14583;

	class LifeGainType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::LifeGainType* None; // 0x0
		::MX::Logic::Skills::LifeGainType* Heal; // 0x0
		::MX::Logic::Skills::LifeGainType* Recover; // 0x0

	};
}

