#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageCriticalType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int DamageCriticalType_TypeDefinitionIndex = 14582;

	class DamageCriticalType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::DamageCriticalType* None; // 0x0
		::MX::Logic::Skills::DamageCriticalType* Never; // 0x0
		::MX::Logic::Skills::DamageCriticalType* Check; // 0x0
		::MX::Logic::Skills::DamageCriticalType* Always; // 0x0

	};
}

