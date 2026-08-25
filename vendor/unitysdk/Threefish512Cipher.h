#pragma once
#include "unitysdk.h"

#define THREEFISH512CIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x71BB30)
#define THREEFISH512CIPHER_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71D0A0)
#define THREEFISH512CIPHER_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71D750)

	inline static constexpr unsigned int Threefish512Cipher_TypeDefinitionIndex = 22538;

	class Threefish512Cipher : public Il2CppObject
	{
	public:
		::System::Int32 ROTATION_0_0; // 0x0
		::System::Int32 ROTATION_0_1; // 0x0
		::System::Int32 ROTATION_0_2; // 0x0
		::System::Int32 ROTATION_0_3; // 0x0
		::System::Int32 ROTATION_1_0; // 0x0
		::System::Int32 ROTATION_1_1; // 0x0
		::System::Int32 ROTATION_1_2; // 0x0
		::System::Int32 ROTATION_1_3; // 0x0
		::System::Int32 ROTATION_2_0; // 0x0
		::System::Int32 ROTATION_2_1; // 0x0
		::System::Int32 ROTATION_2_2; // 0x0
		::System::Int32 ROTATION_2_3; // 0x0
		::System::Int32 ROTATION_3_0; // 0x0
		::System::Int32 ROTATION_3_1; // 0x0
		::System::Int32 ROTATION_3_2; // 0x0
		::System::Int32 ROTATION_3_3; // 0x0
		::System::Int32 ROTATION_4_0; // 0x0
		::System::Int32 ROTATION_4_1; // 0x0
		::System::Int32 ROTATION_4_2; // 0x0
		::System::Int32 ROTATION_4_3; // 0x0
		::System::Int32 ROTATION_5_0; // 0x0
		::System::Int32 ROTATION_5_1; // 0x0
		::System::Int32 ROTATION_5_2; // 0x0
		::System::Int32 ROTATION_5_3; // 0x0
		::System::Int32 ROTATION_6_0; // 0x0
		::System::Int32 ROTATION_6_1; // 0x0
		::System::Int32 ROTATION_6_2; // 0x0
		::System::Int32 ROTATION_6_3; // 0x0
		::System::Int32 ROTATION_7_0; // 0x0
		::System::Int32 ROTATION_7_1; // 0x0
		::System::Int32 ROTATION_7_2; // 0x0
		::System::Int32 ROTATION_7_3; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH512CIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH512CIPHER_DECRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH512CIPHER_ENCRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

	};

