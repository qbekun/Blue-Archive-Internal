#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ClanJoinOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCREATEREQUEST_GET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xF16440)
#define MX_NETWORKPROTOCOL_CLANCREATEREQUEST_SET_CLANNICKNAME_OFFSET UNITYSDK_OFFSET(0xF16450)
#define MX_NETWORKPROTOCOL_CLANCREATEREQUEST_SET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xF16460)
#define MX_NETWORKPROTOCOL_CLANCREATEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16470)
#define MX_NETWORKPROTOCOL_CLANCREATEREQUEST_GET_CLANNICKNAME_OFFSET UNITYSDK_OFFSET(0xF16480)
#define MX_NETWORKPROTOCOL_CLANCREATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanCreateRequest_TypeDefinitionIndex = 11490;

	class ClanCreateRequest : public Il2CppObject
	{
	public:
		::System::String* _ClanNickName_k__BackingField; // 0x40
		::FlatData::ClanJoinOption* _ClanJoinOption_k__BackingField; // 0x48

		::FlatData::ClanJoinOption* get_ClanJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATEREQUEST_GET_CLANJOINOPTION_OFFSET))(nullptr);
		}

		::System::Void set_ClanNickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATEREQUEST_SET_CLANNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ClanJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATEREQUEST_SET_CLANJOINOPTION_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_ClanNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATEREQUEST_GET_CLANNICKNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

