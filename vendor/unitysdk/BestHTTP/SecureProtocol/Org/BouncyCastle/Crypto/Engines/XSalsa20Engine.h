#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x728F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x728F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_GET_NONCESIZE_OFFSET UNITYSDK_OFFSET(0x7292B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7292C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int XSalsa20Engine_TypeDefinitionIndex = 22545;

	class XSalsa20Engine : public Il2CppObject
	{
	public:
		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_SETKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_NonceSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_GET_NONCESIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XSALSA20ENGINE_.CTOR_OFFSET))(nullptr);
		}

	};
}

