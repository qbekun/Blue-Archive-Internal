#pragma once
#include "unitysdk.h"

#define THREEFISH1024CIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x71BB80)
#define THREEFISH1024CIPHER_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71DDC0)
#define THREEFISH1024CIPHER_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71EA00)

	inline static constexpr unsigned int Threefish1024Cipher_TypeDefinitionIndex = 22539;

	class Threefish1024Cipher : public Il2CppObject
	{
	public:
		::System::Int32 ROTATION_0_0; // 0x0
		::System::Int32 ROTATION_0_1; // 0x0
		::System::Int32 ROTATION_0_2; // 0x0
		::System::Int32 ROTATION_0_3; // 0x0
		::System::Int32 ROTATION_0_4; // 0x0
		::System::Int32 ROTATION_0_5; // 0x0
		::System::Int32 ROTATION_0_6; // 0x0
		::System::Int32 ROTATION_0_7; // 0x0
		::System::Int32 ROTATION_1_0; // 0x0
		::System::Int32 ROTATION_1_1; // 0x0
		::System::Int32 ROTATION_1_2; // 0x0
		::System::Int32 ROTATION_1_3; // 0x0
		::System::Int32 ROTATION_1_4; // 0x0
		::System::Int32 ROTATION_1_5; // 0x0
		::System::Int32 ROTATION_1_6; // 0x0
		::System::Int32 ROTATION_1_7; // 0x0
		::System::Int32 ROTATION_2_0; // 0x0
		::System::Int32 ROTATION_2_1; // 0x0
		::System::Int32 ROTATION_2_2; // 0x0
		::System::Int32 ROTATION_2_3; // 0x0
		::System::Int32 ROTATION_2_4; // 0x0
		::System::Int32 ROTATION_2_5; // 0x0
		::System::Int32 ROTATION_2_6; // 0x0
		::System::Int32 ROTATION_2_7; // 0x0
		::System::Int32 ROTATION_3_0; // 0x0
		::System::Int32 ROTATION_3_1; // 0x0
		::System::Int32 ROTATION_3_2; // 0x0
		::System::Int32 ROTATION_3_3; // 0x0
		::System::Int32 ROTATION_3_4; // 0x0
		::System::Int32 ROTATION_3_5; // 0x0
		::System::Int32 ROTATION_3_6; // 0x0
		::System::Int32 ROTATION_3_7; // 0x0
		::System::Int32 ROTATION_4_0; // 0x0
		::System::Int32 ROTATION_4_1; // 0x0
		::System::Int32 ROTATION_4_2; // 0x0
		::System::Int32 ROTATION_4_3; // 0x0
		::System::Int32 ROTATION_4_4; // 0x0
		::System::Int32 ROTATION_4_5; // 0x0
		::System::Int32 ROTATION_4_6; // 0x0
		::System::Int32 ROTATION_4_7; // 0x0
		::System::Int32 ROTATION_5_0; // 0x0
		::System::Int32 ROTATION_5_1; // 0x0
		::System::Int32 ROTATION_5_2; // 0x0
		::System::Int32 ROTATION_5_3; // 0x0
		::System::Int32 ROTATION_5_4; // 0x0
		::System::Int32 ROTATION_5_5; // 0x0
		::System::Int32 ROTATION_5_6; // 0x0
		::System::Int32 ROTATION_5_7; // 0x0
		::System::Int32 ROTATION_6_0; // 0x0
		::System::Int32 ROTATION_6_1; // 0x0
		::System::Int32 ROTATION_6_2; // 0x0
		::System::Int32 ROTATION_6_3; // 0x0
		::System::Int32 ROTATION_6_4; // 0x0
		::System::Int32 ROTATION_6_5; // 0x0
		::System::Int32 ROTATION_6_6; // 0x0
		::System::Int32 ROTATION_6_7; // 0x0
		::System::Int32 ROTATION_7_0; // 0x0
		::System::Int32 ROTATION_7_1; // 0x0
		::System::Int32 ROTATION_7_2; // 0x0
		::System::Int32 ROTATION_7_3; // 0x0
		::System::Int32 ROTATION_7_4; // 0x0
		::System::Int32 ROTATION_7_5; // 0x0
		::System::Int32 ROTATION_7_6; // 0x0
		::System::Int32 ROTATION_7_7; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH1024CIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH1024CIPHER_ENCRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISH1024CIPHER_DECRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

	};

