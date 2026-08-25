#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A5250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A2A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x91A5260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_SET_RNG_OFFSET UNITYSDK_OFFSET(0x91A5270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x91A5280)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x91A5290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x91A52A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x91A56A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_GET_OVERRIDESDECRYPT_OFFSET UNITYSDK_OFFSET(0x91A54B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1KeyExchangeDeformatter_TypeDefinitionIndex = 24366;

	class RSAPKCS1KeyExchangeDeformatter : public ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle
	{
	public:
		::System::Security::Cryptography::RSA* _rsaKey; // 0x10
		Il2CppObject* _rsaOverridesDecrypt; // 0x18
		::System::Security::Cryptography::RandomNumberGenerator* RngValue; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_RNG()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_GET_RNG_OFFSET))(nullptr);
		}

		::System::Void set_RNG(::System::Security::Cryptography::RandomNumberGenerator* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RandomNumberGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_SET_RNG_OFFSET))(arg, nullptr);
		}

		::System::String* get_Parameters()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_Parameters(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_SET_PARAMETERS_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptKeyExchange(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OverridesDecrypt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_GET_OVERRIDESDECRYPT_OFFSET))(nullptr);
		}

	};
}

