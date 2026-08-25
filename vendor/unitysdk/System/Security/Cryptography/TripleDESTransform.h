#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BACB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x91BB160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x91BB0C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDESTransform_TypeDefinitionIndex = 24401;

	class TripleDESTransform : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::DESTransform* E1; // 0x58
		::System::Security::Cryptography::DESTransform* D2; // 0x60
		::System::Security::Cryptography::DESTransform* E3; // 0x68
		::System::Security::Cryptography::DESTransform* D1; // 0x70
		::System::Security::Cryptography::DESTransform* E2; // 0x78
		::System::Security::Cryptography::DESTransform* D3; // 0x80

		::System::Void .ctor(::System::Security::Cryptography::TripleDES* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::TripleDES*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ECB(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetStrongKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET))(nullptr);
		}

	};
}

