#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class LockStatus; }

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int LockStatus_TypeDefinitionIndex = 12993;

	class LockStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Actions::LockStatus* Locked; // 0x0
		::MX::Logic::Actions::LockStatus* Unlocked; // 0x0

	};
}

