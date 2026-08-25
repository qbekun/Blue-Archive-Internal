#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ClanJoinOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_CHANGEDCLANNAME_OFFSET UNITYSDK_OFFSET(0xF16A20)
#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_CHANGEDNOTICE_OFFSET UNITYSDK_OFFSET(0xF16A30)
#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16A40)
#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xF16A50)
#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16A60)
#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_SET_CHANGEDCLANNAME_OFFSET UNITYSDK_OFFSET(0xF16A70)
#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_SET_CHANGEDNOTICE_OFFSET UNITYSDK_OFFSET(0xF16A80)
#define MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_SET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xF16A90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanSettingRequest_TypeDefinitionIndex = 11510;

	class ClanSettingRequest : public Il2CppObject
	{
	public:
		::System::String* _ChangedClanName_k__BackingField; // 0x40
		::System::String* _ChangedNotice_k__BackingField; // 0x48
		::FlatData::ClanJoinOption* _ClanJoinOption_k__BackingField; // 0x50

		::System::String* get_ChangedClanName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_CHANGEDCLANNAME_OFFSET))(nullptr);
		}

		::System::String* get_ChangedNotice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_CHANGEDNOTICE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::FlatData::ClanJoinOption* get_ClanJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_GET_CLANJOINOPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ChangedClanName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_SET_CHANGEDCLANNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ChangedNotice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_SET_CHANGEDNOTICE_OFFSET))(str, nullptr);
		}

		::System::Void set_ClanJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGREQUEST_SET_CLANJOINOPTION_OFFSET))(arg, nullptr);
		}

	};
}

