#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x688BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x689600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x688DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x6895B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_SETODDPARITY_OFFSET UNITYSDK_OFFSET(0x689830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_SETODDPARITY_OFFSET UNITYSDK_OFFSET(0x689850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_SETODDPARITY_OFFSET UNITYSDK_OFFSET(0x6851B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x689900)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int DesParameters_TypeDefinitionIndex = 22303;

	class DesParameters : public Il2CppObject
	{
	public:
		::System::Int32 DesKeyLength; // 0x0
		::System::Int32 N_DES_WEAK_KEYS; // 0x0
		::Il2CppArray<::System::Object*>* DES_weak_keys; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsWeakKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_ISWEAKKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsWeakKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_ISWEAKKEY_OFFSET))(arg, nullptr);
		}

		::System::Byte SetOddParity(::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_SETODDPARITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetOddParity(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_SETODDPARITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetOddParity(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_SETODDPARITY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_DESPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

