#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_DATALENGTH_OFFSET UNITYSDK_OFFSET(0x5EB490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_DATALENGTH_OFFSET UNITYSDK_OFFSET(0x5EC660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_OUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x5EAE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x5EC730)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int Check_TypeDefinitionIndex = 22013;

	class Check : public Il2CppObject
	{
	public:
		::System::Void DataLength(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_DATALENGTH_OFFSET))(arg, str, nullptr);
		}

		::System::Void DataLength(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_DATALENGTH_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void OutputLength(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_OUTPUTLENGTH_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_CHECK_.CTOR_OFFSET))(nullptr);
		}

	};
}

