#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D43B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D10E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int OcspException_TypeDefinitionIndex = 21738;

	class OcspException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

