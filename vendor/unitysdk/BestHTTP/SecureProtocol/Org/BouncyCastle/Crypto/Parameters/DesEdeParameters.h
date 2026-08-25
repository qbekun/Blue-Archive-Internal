#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_FIXKEY_OFFSET UNITYSDK_OFFSET(0x6888E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x688B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x688CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x688D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x6891B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x688AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISREALEDEKEY_OFFSET UNITYSDK_OFFSET(0x689240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISREAL2KEY_OFFSET UNITYSDK_OFFSET(0x6894B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISREAL3KEY_OFFSET UNITYSDK_OFFSET(0x689270)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int DesEdeParameters_TypeDefinitionIndex = 22302;

	class DesEdeParameters : public Il2CppObject
	{
	public:
		::System::Int32 DesEdeKeyLength; // 0x0

		::Il2CppArray<::System::Object*>* FixKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_FIXKEY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsWeakKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISWEAKKEY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsWeakKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISWEAKKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsWeakKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISWEAKKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRealEdeKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISREALEDEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsReal2Key(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISREAL2KEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsReal3Key(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESEDEPARAMETERS_ISREAL3KEY_OFFSET))(arg, arg, nullptr);
		}

	};
}

