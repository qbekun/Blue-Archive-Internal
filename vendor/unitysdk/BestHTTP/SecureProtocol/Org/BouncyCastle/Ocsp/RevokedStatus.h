#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class RevokedInfo; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DADD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAE00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_GET_REVOCATIONTIME_OFFSET UNITYSDK_OFFSET(0x9DAEE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_GET_HASREVOCATIONREASON_OFFSET UNITYSDK_OFFSET(0x9DAF10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_GET_REVOCATIONREASON_OFFSET UNITYSDK_OFFSET(0x9DAF30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int RevokedStatus_TypeDefinitionIndex = 21750;

	class RevokedStatus : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* get_RevocationTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_GET_REVOCATIONTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_HasRevocationReason()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_GET_HASREVOCATIONREASON_OFFSET))(nullptr);
		}

		::System::Int32 get_RevocationReason()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_REVOKEDSTATUS_GET_REVOCATIONREASON_OFFSET))(nullptr);
		}

	};
}

