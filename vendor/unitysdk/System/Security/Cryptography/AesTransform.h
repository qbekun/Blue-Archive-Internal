#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9628F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x9629B50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_SUBBYTE_OFFSET UNITYSDK_OFFSET(0x9629A50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ENCRYPT128_OFFSET UNITYSDK_OFFSET(0x9629B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_DECRYPT128_OFFSET UNITYSDK_OFFSET(0x962C090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x962E570)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesTransform_TypeDefinitionIndex = 32918;

	class AesTransform : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* expandedKey; // 0x58
		::System::Int32 Nk; // 0x60
		::System::Int32 Nr; // 0x64
		::Il2CppArray<::System::Object*>* Rcon; // 0x0
		::Il2CppArray<::System::Object*>* SBox; // 0x8
		::Il2CppArray<::System::Object*>* iSBox; // 0x10
		::Il2CppArray<::System::Object*>* T0; // 0x18
		::Il2CppArray<::System::Object*>* T1; // 0x20
		::Il2CppArray<::System::Object*>* T2; // 0x28
		::Il2CppArray<::System::Object*>* T3; // 0x30
		::Il2CppArray<::System::Object*>* iT0; // 0x38
		::Il2CppArray<::System::Object*>* iT1; // 0x40
		::Il2CppArray<::System::Object*>* iT2; // 0x48
		::Il2CppArray<::System::Object*>* iT3; // 0x50

		::System::Void .ctor(::System::Security::Cryptography::Aes* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::Aes*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ECB(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ECB_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 SubByte(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_SUBBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Encrypt128(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ENCRYPT128_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Decrypt128(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_DECRYPT128_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

