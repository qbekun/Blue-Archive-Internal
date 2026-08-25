#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_.CTOR_OFFSET UNITYSDK_OFFSET(0x919E430)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET UNITYSDK_OFFSET(0x919E440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET UNITYSDK_OFFSET(0x919E4E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x919E650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPT_OFFSET UNITYSDK_OFFSET(0x919E6F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNHASH_OFFSET UNITYSDK_OFFSET(0x919E720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x919E750)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHDATA_OFFSET UNITYSDK_OFFSET(0x919E780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHDATA_OFFSET UNITYSDK_OFFSET(0x919E7B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x919E7E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x919E870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x919EAF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x919EC30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x919ECD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x919EF00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x919E680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHALGORITHMNAMENULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x919EA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x919F090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x919F100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x919F170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x919F1A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x919F1D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x919FC40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET UNITYSDK_OFFSET(0x919FFE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET UNITYSDK_OFFSET(0x91A0120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYDECRYPT_OFFSET UNITYSDK_OFFSET(0x91A02C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYENCRYPT_OFFSET UNITYSDK_OFFSET(0x91A03B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYHASHDATA_OFFSET UNITYSDK_OFFSET(0x91A04A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYSIGNHASH_OFFSET UNITYSDK_OFFSET(0x91A07E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYSIGNDATA_OFFSET UNITYSDK_OFFSET(0x91A08F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x91A0B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x91A0F80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_EXPORTRSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x91A1010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_EXPORTRSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x91A1060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_IMPORTRSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x91A10B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_IMPORTRSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x91A1100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYEXPORTRSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x91A1150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYEXPORTRSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x91A11A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSA_TypeDefinitionIndex = 24362;

	class RSA : public TransformSyncer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSA* Create()
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSA* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encrypt(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::RSAEncryptionPadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decrypt(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::RSAEncryptionPadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignHash(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyHash(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYHASH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashData(::System::IO::Stream* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::System::IO::Stream* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_SIGNDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyData(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyData(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Exception* DerivedClassMustOverride()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET))(nullptr);
		}

		::System::Exception* HashAlgorithmNameNullOrEmpty()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHALGORITHMNAMENULLOREMPTY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptValue(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPTVALUE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptValue(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPTVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_KEYEXCHANGEALGORITHM_OFFSET))(nullptr);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::System::Void FromXmlString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_FROMXMLSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToXmlString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TOXMLSTRING_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSAParameters* ExportParameters(::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::RSAParameters*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_EXPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_IMPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* Create(::System::Int32 arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* Create(::System::Security::Cryptography::RSAParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::System::Security::Cryptography::RSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryDecrypt(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::RSAEncryptionPadding*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYDECRYPT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryEncrypt(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::RSAEncryptionPadding*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYENCRYPT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryHashData(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYHASHDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrySignHash(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYSIGNHASH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrySignData(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYSIGNDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyData(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyHash(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYHASH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportRSAPrivateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_EXPORTRSAPRIVATEKEY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportRSAPublicKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_EXPORTRSAPUBLICKEY_OFFSET))(nullptr);
		}

		::System::Void ImportRSAPrivateKey(Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_IMPORTRSAPRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImportRSAPublicKey(Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_IMPORTRSAPUBLICKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryExportRSAPrivateKey(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYEXPORTRSAPRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryExportRSAPublicKey(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TRYEXPORTRSAPUBLICKEY_OFFSET))(arg, arg, nullptr);
		}

	};
}

