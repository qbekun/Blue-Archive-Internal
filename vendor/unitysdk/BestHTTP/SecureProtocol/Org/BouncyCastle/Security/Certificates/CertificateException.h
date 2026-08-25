#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0B50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security::Certificates
{
	inline static constexpr unsigned int CertificateException_TypeDefinitionIndex = 21728;

	class CertificateException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_CERTIFICATES_CERTIFICATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

