#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91B2710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET UNITYSDK_OFFSET(0x91B2F60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET UNITYSDK_OFFSET(0x91B31B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET UNITYSDK_OFFSET(0x91B3640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET UNITYSDK_OFFSET(0x91B2A50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x91B36A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x91B3AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x91B2990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91B3B40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DESTransform_TypeDefinitionIndex = 24392;

	class DESTransform : public Il2CppObject
	{
	public:
		::System::Int32 KEY_BIT_SIZE; // 0x0
		::System::Int32 KEY_BYTE_SIZE; // 0x4
		::System::Int32 BLOCK_BIT_SIZE; // 0x8
		::System::Int32 BLOCK_BYTE_SIZE; // 0xC
		::Il2CppArray<::System::Object*>* keySchedule; // 0x58
		::Il2CppArray<::System::Object*>* byteBuff; // 0x60
		::Il2CppArray<::System::Object*>* dwordBuff; // 0x68
		::Il2CppArray<::System::Object*>* spBoxes; // 0x10
		::Il2CppArray<::System::Object*>* PC1; // 0x18
		::Il2CppArray<::System::Object*>* leftRotTotal; // 0x20
		::Il2CppArray<::System::Object*>* PC2; // 0x28
		::Il2CppArray<::System::Object*>* ipTab; // 0x30
		::Il2CppArray<::System::Object*>* fpTab; // 0x38

		::System::Void .ctor(::System::Security::Cryptography::SymmetricAlgorithm* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 CipherFunct(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Permutation(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BSwap(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET))(arg, nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ECB(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetStrongKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

