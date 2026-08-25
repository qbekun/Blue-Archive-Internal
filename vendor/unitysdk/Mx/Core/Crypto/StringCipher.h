#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTSTRINGWITHPASSPHRASE_OFFSET UNITYSDK_OFFSET(0x1083630)
#define MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTBYTES_OFFSET UNITYSDK_OFFSET(0x1083FD0)
#define MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTSTRING_OFFSET UNITYSDK_OFFSET(0x10845A0)
#define MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTBYTESWITHPASSPHRASE_OFFSET UNITYSDK_OFFSET(0x1084C70)
#define MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTSTRING_OFFSET UNITYSDK_OFFSET(0x1084EF0)
#define MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTBYTESWITHPASSPHRASE_OFFSET UNITYSDK_OFFSET(0x1085670)
#define MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTSTRINGWITHPASSPHRASE_OFFSET UNITYSDK_OFFSET(0x1086080)
#define MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTBYTES_OFFSET UNITYSDK_OFFSET(0x1086BF0)

namespace MX::Core::Crypto
{
	inline static constexpr unsigned int StringCipher_TypeDefinitionIndex = 12908;

	class StringCipher : public Il2CppObject
	{
	public:
		::System::String* DecryptStringWithPassphrase(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTSTRINGWITHPASSPHRASE_OFFSET))(str, str2, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptBytes(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTBYTES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* DecryptString(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTSTRING_OFFSET))(str, arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptBytesWithPassphrase(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_DECRYPTBYTESWITHPASSPHRASE_OFFSET))(arg, str, nullptr);
		}

		::System::String* EncryptString(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTSTRING_OFFSET))(str, arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptBytesWithPassphrase(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTBYTESWITHPASSPHRASE_OFFSET))(arg, str, nullptr);
		}

		::System::String* EncryptStringWithPassphrase(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTSTRINGWITHPASSPHRASE_OFFSET))(str, str2, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptBytes(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_STRINGCIPHER_ENCRYPTBYTES_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

