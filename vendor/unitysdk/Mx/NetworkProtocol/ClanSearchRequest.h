#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ClanJoinOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_SEARCHSTRING_OFFSET UNITYSDK_OFFSET(0xF16380)
#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_SET_CLANUNIQUECODE_OFFSET UNITYSDK_OFFSET(0xF16390)
#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF163A0)
#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xF163B0)
#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_CLANUNIQUECODE_OFFSET UNITYSDK_OFFSET(0xF163C0)
#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_SET_SEARCHSTRING_OFFSET UNITYSDK_OFFSET(0xF163D0)
#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_SET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xF163E0)
#define MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF163F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanSearchRequest_TypeDefinitionIndex = 11488;

	class ClanSearchRequest : public Il2CppObject
	{
	public:
		::System::String* _SearchString_k__BackingField; // 0x40
		::FlatData::ClanJoinOption* _ClanJoinOption_k__BackingField; // 0x48
		::System::String* _ClanUniqueCode_k__BackingField; // 0x50

		::System::String* get_SearchString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_SEARCHSTRING_OFFSET))(nullptr);
		}

		::System::Void set_ClanUniqueCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_SET_CLANUNIQUECODE_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::FlatData::ClanJoinOption* get_ClanJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_CLANJOINOPTION_OFFSET))(nullptr);
		}

		::System::String* get_ClanUniqueCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_GET_CLANUNIQUECODE_OFFSET))(nullptr);
		}

		::System::Void set_SearchString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_SET_SEARCHSTRING_OFFSET))(str, nullptr);
		}

		::System::Void set_ClanJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_SET_CLANJOINOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

