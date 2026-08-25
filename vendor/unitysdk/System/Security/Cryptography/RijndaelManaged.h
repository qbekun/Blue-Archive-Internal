#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9198270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x9198640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x9198790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x91987C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x9198830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x9198670)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManaged_TypeDefinitionIndex = 24356;

	class RijndaelManaged : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET))(nullptr);
		}

		::System::Void GenerateIV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::ICryptoTransform* NewEncryptor(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::CipherMode* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Security::Cryptography::RijndaelManagedTransformMode* arg)
		{
			return (return (::System::Security::Cryptography::ICryptoTransform*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::CipherMode*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Security::Cryptography::RijndaelManagedTransformMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

