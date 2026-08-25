#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class ActionProgress; }

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int ActionProgress_TypeDefinitionIndex = 12995;

	class ActionProgress : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Actions::ActionProgress* None; // 0x0
		::MX::Logic::Actions::ActionProgress* Running; // 0x0
		::MX::Logic::Actions::ActionProgress* Finished; // 0x0

	};
}

