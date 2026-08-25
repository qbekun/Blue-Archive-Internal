#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_INVALIDKEYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int InvalidKeyException_TypeDefinitionIndex = 21711;

	class InvalidKeyException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_INVALIDKEYEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

