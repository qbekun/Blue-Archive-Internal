#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9192000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9192080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x91921E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x91922E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x91923A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureFormatter_TypeDefinitionIndex = 24336;

	class DSASignatureFormatter : public ::UnityEngine::Animations::Rigging::IRigLayer
	{
	public:
		::System::Security::Cryptography::DSA* _dsaKey; // 0x10
		::System::String* _oid; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void SetHashAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_CREATESIGNATURE_OFFSET))(arg, nullptr);
		}

	};
}

