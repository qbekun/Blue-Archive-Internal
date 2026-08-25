#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ConquestUpgradeBaseResponse; }

#define CONQUESTUPGRADEBASENETWORKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F33F90)

	inline static constexpr unsigned int ConquestUpgradeBaseNetworkMessage_TypeDefinitionIndex = 2254;

	class ConquestUpgradeBaseNetworkMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ConquestUpgradeBaseResponse* Response; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::ConquestUpgradeBaseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ConquestUpgradeBaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

