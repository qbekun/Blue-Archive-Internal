#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x918C9E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricKeyExchangeDeformatter_TypeDefinitionIndex = 24316;

	class AsymmetricKeyExchangeDeformatter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Parameters()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_Parameters(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_SET_PARAMETERS_OFFSET))(str, nullptr);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_SETKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptKeyExchange(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

	};
}

