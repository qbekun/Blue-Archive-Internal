#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A4AD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A2C10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x91A4AE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x91A4B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x91A4C20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x91A4C30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_SET_RNG_OFFSET UNITYSDK_OFFSET(0x91A4C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x91A4C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x91A4D50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x91A5230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET UNITYSDK_OFFSET(0x91A4FD0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAOAEPKeyExchangeFormatter_TypeDefinitionIndex = 24365;

	class RSAOAEPKeyExchangeFormatter : public ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle
	{
	public:
		::Il2CppArray<::System::Object*>* ParameterValue; // 0x10
		::System::Security::Cryptography::RSA* _rsaKey; // 0x18
		Il2CppObject* _rsaOverridesEncrypt; // 0x20
		::System::Security::Cryptography::RandomNumberGenerator* RngValue; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Parameter()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_SET_PARAMETER_OFFSET))(arg, nullptr);
		}

		::System::String* get_Parameters()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_RNG_OFFSET))(nullptr);
		}

		::System::Void set_Rng(::System::Security::Cryptography::RandomNumberGenerator* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RandomNumberGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_SET_RNG_OFFSET))(arg, nullptr);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_SETKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateKeyExchange(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateKeyExchange(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_OverridesEncrypt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET))(nullptr);
		}

	};
}

