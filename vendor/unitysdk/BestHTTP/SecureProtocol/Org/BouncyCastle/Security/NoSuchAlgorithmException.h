#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_NOSUCHALGORITHMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B01F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_NOSUCHALGORITHMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_NOSUCHALGORITHMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0210)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int NoSuchAlgorithmException_TypeDefinitionIndex = 21715;

	class NoSuchAlgorithmException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_NOSUCHALGORITHMEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_NOSUCHALGORITHMEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_NOSUCHALGORITHMEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

