#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_IPASSWORDFINDER_GETPASSWORD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	inline static constexpr unsigned int IPasswordFinder_TypeDefinitionIndex = 21690;

	class IPasswordFinder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetPassword()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_IPASSWORDFINDER_GETPASSWORD_OFFSET))(nullptr);
		}

	};
}

