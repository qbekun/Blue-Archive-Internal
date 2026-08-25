#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class HkdfParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x690F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6910A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_SKIPEXTRACTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6910C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_DEFAULTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x691130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GETIKM_OFFSET UNITYSDK_OFFSET(0x6911A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GET_SKIPEXTRACT_OFFSET UNITYSDK_OFFSET(0x6911F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GETSALT_OFFSET UNITYSDK_OFFSET(0x691200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GETINFO_OFFSET UNITYSDK_OFFSET(0x691250)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int HkdfParameters_TypeDefinitionIndex = 22341;

	class HkdfParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ikm; // 0x10
		::System::Boolean skipExpand; // 0x18
		::Il2CppArray<::System::Object*>* salt; // 0x20
		::Il2CppArray<::System::Object*>* info; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* SkipExtractParameters(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::HkdfParameters*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_SKIPEXTRACTPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* DefaultParameters(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::HkdfParameters*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_DEFAULTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIkm()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GETIKM_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipExtract()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GET_SKIPEXTRACT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSalt()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GETSALT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_HKDFPARAMETERS_GETINFO_OFFSET))(nullptr);
		}

	};
}

