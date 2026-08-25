#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF11B50)
#define MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11B60)
#define MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11B70)
#define MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_SET_BANREASON_OFFSET UNITYSDK_OFFSET(0xF11B80)
#define MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_GET_BANREASON_OFFSET UNITYSDK_OFFSET(0xF11B90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountBanErrorPacket_TypeDefinitionIndex = 11329;

	class AccountBanErrorPacket : public Il2CppObject
	{
	public:
		::System::String* _BanReason_k__BackingField; // 0x50

		::MX::NetworkProtocol::WebAPIErrorCode* get_ErrorCode()
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_GET_ERRORCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BanReason(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_SET_BANREASON_OFFSET))(str, nullptr);
		}

		::System::String* get_BanReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBANERRORPACKET_GET_BANREASON_OFFSET))(nullptr);
		}

	};
}

