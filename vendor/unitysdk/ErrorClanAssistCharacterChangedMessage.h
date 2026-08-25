#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }

#define ERRORCLANASSISTCHARACTERCHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DAE00)
#define ERRORCLANASSISTCHARACTERCHANGEDMESSAGE_GET_ERRORPACKET_OFFSET UNITYSDK_OFFSET(0x24DAE30)

	inline static constexpr unsigned int ErrorClanAssistCharacterChangedMessage_TypeDefinitionIndex = 5976;

	class ErrorClanAssistCharacterChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::NetworkProtocol::ErrorPacket* _ErrorPacket_k__BackingField; // 0x18

		::System::Void .ctor(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ERRORCLANASSISTCHARACTERCHANGEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ErrorPacket* get_ErrorPacket()
		{
			return ((::MX::NetworkProtocol::ErrorPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + ERRORCLANASSISTCHARACTERCHANGEDMESSAGE_GET_ERRORPACKET_OFFSET))(nullptr);
		}

	};

