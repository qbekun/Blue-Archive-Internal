#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANPERMITREQUEST_GET_APPLICANTACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF16900)
#define MX_NETWORKPROTOCOL_CLANPERMITREQUEST_SET_APPLICANTACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF16910)
#define MX_NETWORKPROTOCOL_CLANPERMITREQUEST_GET_ISPERMIT_OFFSET UNITYSDK_OFFSET(0xF16920)
#define MX_NETWORKPROTOCOL_CLANPERMITREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16930)
#define MX_NETWORKPROTOCOL_CLANPERMITREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16940)
#define MX_NETWORKPROTOCOL_CLANPERMITREQUEST_SET_ISPERMIT_OFFSET UNITYSDK_OFFSET(0xF16950)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanPermitRequest_TypeDefinitionIndex = 11506;

	class ClanPermitRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ApplicantAccountId_k__BackingField; // 0x40
		::System::Boolean _IsPerMit_k__BackingField; // 0x48

		::System::Int64 get_ApplicantAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITREQUEST_GET_APPLICANTACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_ApplicantAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITREQUEST_SET_APPLICANTACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPerMit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITREQUEST_GET_ISPERMIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_IsPerMit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITREQUEST_SET_ISPERMIT_OFFSET))(arg, nullptr);
		}

	};
}

