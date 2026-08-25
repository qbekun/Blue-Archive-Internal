#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ERRORPACKET_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF11A70)
#define MX_NETWORKPROTOCOL_ERRORPACKET_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF11A80)
#define MX_NETWORKPROTOCOL_ERRORPACKET_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11A90)
#define MX_NETWORKPROTOCOL_ERRORPACKET_SET_REASON_OFFSET UNITYSDK_OFFSET(0xF11AA0)
#define MX_NETWORKPROTOCOL_ERRORPACKET_GET_REASON_OFFSET UNITYSDK_OFFSET(0xF11AB0)
#define MX_NETWORKPROTOCOL_ERRORPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11AC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ErrorPacket_TypeDefinitionIndex = 11326;

	class ErrorPacket : public Il2CppObject
	{
	public:
		::System::String* _Reason_k__BackingField; // 0x50
		::MX::NetworkProtocol::WebAPIErrorCode* _ErrorCode_k__BackingField; // 0x58

		::System::Void set_ErrorCode(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ERRORPACKET_SET_ERRORCODE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* get_ErrorCode()
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ERRORPACKET_GET_ERRORCODE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ERRORPACKET_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Reason(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ERRORPACKET_SET_REASON_OFFSET))(str, nullptr);
		}

		::System::String* get_Reason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ERRORPACKET_GET_REASON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ERRORPACKET_.CTOR_OFFSET))(nullptr);
		}

	};
}

