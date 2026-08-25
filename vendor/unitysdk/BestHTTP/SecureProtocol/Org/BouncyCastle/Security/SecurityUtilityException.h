#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURITYUTILITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURITYUTILITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURITYUTILITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int SecurityUtilityException_TypeDefinitionIndex = 21721;

	class SecurityUtilityException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURITYUTILITYEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURITYUTILITYEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_SECURITYUTILITYEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

