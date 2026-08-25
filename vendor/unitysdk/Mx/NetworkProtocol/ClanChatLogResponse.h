#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_GET_CLANCHATLOG_OFFSET UNITYSDK_OFFSET(0xF3EF20)
#define MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3EF30)
#define MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_SET_CLANCHATLOG_OFFSET UNITYSDK_OFFSET(0xF3EF40)
#define MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3EF50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanChatLogResponse_TypeDefinitionIndex = 11521;

	class ClanChatLogResponse : public Il2CppObject
	{
	public:
		::System::String* _ClanChatLog_k__BackingField; // 0x50

		::System::String* get_ClanChatLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_GET_CLANCHATLOG_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ClanChatLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_SET_CLANCHATLOG_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHATLOGRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

