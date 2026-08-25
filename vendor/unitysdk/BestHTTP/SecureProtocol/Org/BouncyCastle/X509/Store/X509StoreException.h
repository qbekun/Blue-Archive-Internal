#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C1180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C1230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C12F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int X509StoreException_TypeDefinitionIndex = 21562;

	class X509StoreException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

