#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NontargetBounceCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NontargetBounceCondition_TypeDefinitionIndex = 13528;

	class NontargetBounceCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::NontargetBounceCondition* None; // 0x0
		::MX::Logic::Data::NontargetBounceCondition* Obstacle; // 0x0
		::MX::Logic::Data::NontargetBounceCondition* Boss; // 0x0
		::MX::Logic::Data::NontargetBounceCondition* Shield; // 0x0

	};
}

