#pragma once
#include "unitysdk.h"

#define THREEFISH256CIPHER_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71C890)
#define THREEFISH256CIPHER_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71CC90)
#define THREEFISH256CIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x71BAE0)

	inline static constexpr unsigned int Threefish256Cipher_TypeDefinitionIndex = 22537;

	class Threefish256Cipher : public Il2CppObject
	{
	public:
		::System::Int32 ROTATION_0_0; // 0x0
		::System::Int32 ROTATION_0_1; // 0x0
		::System::Int32 ROTATION_1_0; // 0x0
		::System::Int32 ROTATION_1_1; // 0x0
		::System::Int32 ROTATION_2_0; // 0x0
		::System::Int32 ROTATION_2_1; // 0x0
		::System::Int32 ROTATION_3_0; // 0x0
		::System::Int32 ROTATION_3_1; // 0x0
		::System::Int32 ROTATION_4_0; // 0x0
		::System::Int32 ROTATION_4_1; // 0x0
		::System::Int32 ROTATION_5_0; // 0x0
		::System::Int32 ROTATION_5_1; // 0x0
		::System::Int32 ROTATION_6_0; // 0x0
		::System::Int32 ROTATION_6_1; // 0x0
		::System::Int32 ROTATION_7_0; // 0x0
		::System::Int32 ROTATION_7_1; // 0x0

		::System::Void DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH256CIPHER_DECRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH256CIPHER_ENCRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH256CIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

