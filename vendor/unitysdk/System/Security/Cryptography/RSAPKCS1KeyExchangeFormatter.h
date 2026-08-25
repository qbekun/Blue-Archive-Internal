#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A57A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A2D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x91A57B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x91A57E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_SET_RNG_OFFSET UNITYSDK_OFFSET(0x91A57F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x91A5800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x91A5900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x91A5E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET UNITYSDK_OFFSET(0x91A5CA0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1KeyExchangeFormatter_TypeDefinitionIndex = 24367;

	class RSAPKCS1KeyExchangeFormatter : public ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* RngValue; // 0x10
		::System::Security::Cryptography::RSA* _rsaKey; // 0x18
		Il2CppObject* _rsaOverridesEncrypt; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Parameters()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_RNG_OFFSET))(nullptr);
		}

		::System::Void set_Rng(::System::Security::Cryptography::RandomNumberGenerator* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RandomNumberGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_SET_RNG_OFFSET))(arg, nullptr);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_SETKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateKeyExchange(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateKeyExchange(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_OverridesEncrypt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET))(nullptr);
		}

	};
}

