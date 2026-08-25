#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_SET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xF50280)
#define MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_GET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xF50290)
#define MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF502A0)
#define MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF502B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TTSGetKanaRequest_TypeDefinitionIndex = 12174;

	class TTSGetKanaRequest : public Il2CppObject
	{
	public:
		::System::String* _CallName_k__BackingField; // 0x40

		::System::Void set_CallName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_SET_CALLNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_CallName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_GET_CALLNAME_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANAREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

