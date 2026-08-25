#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET UNITYSDK_OFFSET(0x910E860)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET UNITYSDK_OFFSET(0x910E8C0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET UNITYSDK_OFFSET(0x910E940)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET UNITYSDK_OFFSET(0x910EA00)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET UNITYSDK_OFFSET(0x910EA30)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET UNITYSDK_OFFSET(0x910ECC0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_HASHNAMEFROMOID_OFFSET UNITYSDK_OFFSET(0x910F080)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMOID_OFFSET UNITYSDK_OFFSET(0x910F440)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x910F490)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x910F920)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1_TypeDefinitionIndex = 35809;

	class PKCS1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* emptySHA1; // 0x0
		::Il2CppArray<::System::Object*>* emptySHA256; // 0x8
		::Il2CppArray<::System::Object*>* emptySHA384; // 0x10
		::Il2CppArray<::System::Object*>* emptySHA512; // 0x18

		::System::Boolean Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* I2OSP(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OS2IP(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RSAVP1(::System::Security::Cryptography::RSA* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Verify_v15(::System::Security::Cryptography::RSA* arg, ::System::Security::Cryptography::HashAlgorithm* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode_v15(::System::Security::Cryptography::HashAlgorithm* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* HashNameFromOid(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_HASHNAMEFROMOID_OFFSET))(str, arg, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* CreateFromOid(::System::String* str)
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMOID_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* CreateFromName(::System::String* str)
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

