#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ClanSocialGrade; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCONFERREQUEST_GET_CONFERINGGRADE_OFFSET UNITYSDK_OFFSET(0xF16AE0)
#define MX_NETWORKPROTOCOL_CLANCONFERREQUEST_SET_CONFERINGGRADE_OFFSET UNITYSDK_OFFSET(0xF16AF0)
#define MX_NETWORKPROTOCOL_CLANCONFERREQUEST_GET_MEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF16B00)
#define MX_NETWORKPROTOCOL_CLANCONFERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16B10)
#define MX_NETWORKPROTOCOL_CLANCONFERREQUEST_SET_MEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF16B20)
#define MX_NETWORKPROTOCOL_CLANCONFERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16B30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanConferRequest_TypeDefinitionIndex = 11512;

	class ClanConferRequest : public Il2CppObject
	{
	public:
		::System::Int64 _MemberAccountId_k__BackingField; // 0x40
		::FlatData::ClanSocialGrade* _ConferingGrade_k__BackingField; // 0x48

		::FlatData::ClanSocialGrade* get_ConferingGrade()
		{
			return ((::FlatData::ClanSocialGrade*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERREQUEST_GET_CONFERINGGRADE_OFFSET))(nullptr);
		}

		::System::Void set_ConferingGrade(::FlatData::ClanSocialGrade* arg)
		{
			((::System::Void(*)(::FlatData::ClanSocialGrade*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERREQUEST_SET_CONFERINGGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MemberAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERREQUEST_GET_MEMBERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MemberAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERREQUEST_SET_MEMBERACCOUNTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

