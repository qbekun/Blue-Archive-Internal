#pragma once
#include "../../unitysdk.h"

#define MX_DATA_AESENCRYPTIONSERVICE_GETAESKEY_OFFSET UNITYSDK_OFFSET(0x18074C0)
#define MX_DATA_AESENCRYPTIONSERVICE_GETAESIV_OFFSET UNITYSDK_OFFSET(0x1807560)
#define MX_DATA_AESENCRYPTIONSERVICE_DECRYPTSTRINGFROMBYTES_AES_OFFSET UNITYSDK_OFFSET(0x1807610)
#define MX_DATA_AESENCRYPTIONSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1807DF0)
#define MX_DATA_AESENCRYPTIONSERVICE_ENCRYPTSTRINGTOBYTES_AES_OFFSET UNITYSDK_OFFSET(0x1807E90)

namespace MX::Data
{
	inline static constexpr unsigned int AESEncryptionService_TypeDefinitionIndex = 15690;

	class AESEncryptionService : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* AESKey; // 0x0
		::Il2CppArray<::System::Object*>* AESIV; // 0x8

		::Il2CppArray<::System::Object*>* GetAESKey(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AESENCRYPTIONSERVICE_GETAESKEY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAESIV(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AESENCRYPTIONSERVICE_GETAESIV_OFFSET))(str, nullptr);
		}

		::System::String* DecryptStringFromBytes_Aes(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AESENCRYPTIONSERVICE_DECRYPTSTRINGFROMBYTES_AES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AESENCRYPTIONSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptStringToBytes_Aes(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AESENCRYPTIONSERVICE_ENCRYPTSTRINGTOBYTES_AES_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

