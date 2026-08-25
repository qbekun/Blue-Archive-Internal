#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEPARSINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEPARSINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEPARSINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0BE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security::Certificates
{
	inline static constexpr unsigned int CertificateParsingException_TypeDefinitionIndex = 21731;

	class CertificateParsingException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEPARSINGEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEPARSINGEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEPARSINGEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

