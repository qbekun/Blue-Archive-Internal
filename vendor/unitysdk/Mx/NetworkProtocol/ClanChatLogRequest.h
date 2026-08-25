#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_SET_FROMDATE_OFFSET UNITYSDK_OFFSET(0xF3EEC0)
#define MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_GET_FROMDATE_OFFSET UNITYSDK_OFFSET(0xF3EED0)
#define MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3EEE0)
#define MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0xF3EEF0)
#define MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0xF3EF00)
#define MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3EF10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanChatLogRequest_TypeDefinitionIndex = 11520;

	class ClanChatLogRequest : public Il2CppObject
	{
	public:
		::System::String* _Channel_k__BackingField; // 0x40
		::System::DateTime* _FromDate_k__BackingField; // 0x48

		::System::Void set_FromDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_SET_FROMDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_FromDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_GET_FROMDATE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_Channel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void set_Channel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_SET_CHANNEL_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

