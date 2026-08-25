#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class CheatFlags; }

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CheatFlags_TypeDefinitionIndex = 11531;

	class CheatFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::NetworkProtocol::CheatFlags* None; // 0x0
		::MX::NetworkProtocol::CheatFlags* Conquest; // 0x0
		::MX::NetworkProtocol::CheatFlags* Mission; // 0x0

	};
}

