#pragma once
#include "unitysdk.h"

#define THREEFISHCIPHER_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x000000)
#define THREEFISHCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x71C840)
#define THREEFISHCIPHER_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ThreefishCipher_TypeDefinitionIndex = 22536;

	class ThreefishCipher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* t; // 0x10
		::Il2CppArray<::System::Object*>* kw; // 0x18

		::System::Void DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISHCIPHER_DECRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISHCIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + THREEFISHCIPHER_ENCRYPTBLOCK_OFFSET))(arg, arg, nullptr);
		}

	};

