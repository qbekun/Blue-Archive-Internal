#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9191B50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9191BD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x9191D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x9191E30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9191EF0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureDeformatter_TypeDefinitionIndex = 24335;

	class DSASignatureDeformatter : public ::UnityEngine::Animations::Rigging::IRigConstraint
	{
	public:
		::System::Security::Cryptography::DSA* _dsaKey; // 0x10
		::System::String* _oid; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void SetHashAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET))(str, nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

	};
}

