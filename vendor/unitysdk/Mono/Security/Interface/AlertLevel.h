#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class AlertLevel; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int AlertLevel_TypeDefinitionIndex = 35788;

	class AlertLevel : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::Mono::Security::Interface::AlertLevel* Warning; // 0x0
		::Mono::Security::Interface::AlertLevel* Fatal; // 0x0

	};
}

