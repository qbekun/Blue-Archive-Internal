#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11BA0)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_BANENDDATE_OFFSET UNITYSDK_OFFSET(0xF11BB0)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF11BC0)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11BD0)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_BANSTARTDATE_OFFSET UNITYSDK_OFFSET(0xF11BE0)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_SET_BANENDDATE_OFFSET UNITYSDK_OFFSET(0xF11BF0)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_SET_BANSTARTDATE_OFFSET UNITYSDK_OFFSET(0xF11C00)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF11C10)
#define MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF11C20)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountContentBanErrorPacket_TypeDefinitionIndex = 11330;

	class AccountContentBanErrorPacket : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x50
		::System::DateTime* _BanStartDate_k__BackingField; // 0x58
		::System::DateTime* _BanEndDate_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_BanEndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_BANENDDATE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* get_ErrorCode()
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_ERRORCODE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::DateTime* get_BanStartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_BANSTARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_BanEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_SET_BANENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BanStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_SET_BANSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCONTENTBANERRORPACKET_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

