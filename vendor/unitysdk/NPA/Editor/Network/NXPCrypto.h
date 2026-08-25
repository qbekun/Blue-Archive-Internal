#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyCryptType; }

#define NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODEHMACSHA256_OFFSET UNITYSDK_OFFSET(0x9C19000)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODEHMACSHA256HEXSTRING_OFFSET UNITYSDK_OFFSET(0x9C191F0)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODESHA256_OFFSET UNITYSDK_OFFSET(0x9C060E0)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODESHA512_OFFSET UNITYSDK_OFFSET(0x9C193E0)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x9C19570)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_ENCRYPTTOBYTES_OFFSET UNITYSDK_OFFSET(0x9C195F0)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_DECRYPT_OFFSET UNITYSDK_OFFSET(0x9C19A00)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_DECRYPTTOBYTES_OFFSET UNITYSDK_OFFSET(0x9C19AA0)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_MAKECRYPTOKEYBYAES128_OFFSET UNITYSDK_OFFSET(0x9C19660)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_ENCRYPTBYAES128_OFFSET UNITYSDK_OFFSET(0x9C19710)
#define NPA_EDITOR_NETWORK_NXPCRYPTO_DECRYPTBYAES128_OFFSET UNITYSDK_OFFSET(0x9C19B10)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPCrypto_TypeDefinitionIndex = 26613;

	class NXPCrypto : public Il2CppObject
	{
	public:
		::System::String* CommonAesKey; // 0x0
		::System::Int32 AesKeySize; // 0x0

		::Il2CppArray<::System::Object*>* EncodeHmacSha256(::System::String* str, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODEHMACSHA256_OFFSET))(str, str, nullptr);
		}

		::System::String* EncodeHmacSha256HexString(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODEHMACSHA256HEXSTRING_OFFSET))(str, str, nullptr);
		}

		::System::String* EncodeSha256(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODESHA256_OFFSET))(str, nullptr);
		}

		::System::String* EncodeSha512(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_ENCODESHA512_OFFSET))(str, nullptr);
		}

		::System::String* Encrypt(::NPA::Editor::Network::NXPToyCryptType* arg, ::System::String* str, ::System::Int64 arg)
		{
			return (return (::System::String*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_ENCRYPT_OFFSET))(arg, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptToBytes(::NPA::Editor::Network::NXPToyCryptType* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::Il2CppArray<::System::Object*>*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_ENCRYPTTOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Decrypt(::NPA::Editor::Network::NXPToyCryptType* arg, ::System::String* str, ::System::Int64 arg)
		{
			return (return (::System::String*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_DECRYPT_OFFSET))(arg, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptToBytes(::NPA::Editor::Network::NXPToyCryptType* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::NPA::Editor::Network::NXPToyCryptType*, ::Il2CppArray<::System::Object*>*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_DECRYPTTOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MakeCryptoKeyByAES128(::System::Int64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_MAKECRYPTOKEYBYAES128_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptByAES128(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_ENCRYPTBYAES128_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptByAES128(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPCRYPTO_DECRYPTBYAES128_OFFSET))(arg, arg, nullptr);
		}

	};
}

