#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateStatus; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATESTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4350)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int CertificateStatus_TypeDefinitionIndex = 21737;

	class CertificateStatus : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* Good; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATESTATUS_.CTOR_OFFSET))(nullptr);
		}

	};
}

