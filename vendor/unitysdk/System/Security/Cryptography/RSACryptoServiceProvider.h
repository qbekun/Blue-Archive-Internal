#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Cryptography { class KeyPairPersistence; }
namespace Mono::Security::Cryptography { class RSAManaged; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x91A11F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x91A1220)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x91A1270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_HASHDATA_OFFSET UNITYSDK_OFFSET(0x91A12C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_HASHDATA_OFFSET UNITYSDK_OFFSET(0x91A1310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETALGORITHMID_OFFSET UNITYSDK_OFFSET(0x91A1340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x91A14F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET UNITYSDK_OFFSET(0x91A18F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNHASH_OFFSET UNITYSDK_OFFSET(0x91A1D90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x91A2000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_PADDINGMODENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x91A1880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x919E4B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A2300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A22D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A2350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x91A23A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x91A2650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x91A2780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x91A2850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x91A2880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PERSISTKEYINCSP_OFFSET UNITYSDK_OFFSET(0x91A28B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SET_PERSISTKEYINCSP_OFFSET UNITYSDK_OFFSET(0x91A28C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x91A2950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET UNITYSDK_OFFSET(0x91A1B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x91A2B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x91A17D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x91A2E10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x91A2E40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x91A2FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASH_OFFSET UNITYSDK_OFFSET(0x91A3030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHFROMSTRING_OFFSET UNITYSDK_OFFSET(0x91A3290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x91A3590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x91A3740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x91A3690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET UNITYSDK_OFFSET(0x91A33F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNHASH_OFFSET UNITYSDK_OFFSET(0x91A37D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNHASH_OFFSET UNITYSDK_OFFSET(0x91A1F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_INTERNALHASHTOHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x91A38B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x91A3B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x91A3CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x91A2250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91A3DF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x91A28D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_CSPKEYCONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x91A3E40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTCSPBLOB_OFFSET UNITYSDK_OFFSET(0x91A3EF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTCSPBLOB_OFFSET UNITYSDK_OFFSET(0x91A3F90)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSACryptoServiceProvider_TypeDefinitionIndex = 24363;

	class RSACryptoServiceProvider : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::CspProviderFlags* s_UseMachineKeyStore; // 0x0
		::System::Int32 PROV_RSA_FULL; // 0x0
		::System::Int32 AT_KEYEXCHANGE; // 0x0
		::System::Int32 AT_SIGNATURE; // 0x0
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x20
		::System::Boolean persistKey; // 0x28
		::System::Boolean persisted; // 0x29
		::System::Boolean privateKeyExportable; // 0x2A
		::System::Boolean m_disposed; // 0x2B
		::Mono::Security::Cryptography::RSAManaged* rsa; // 0x30

		::System::String* get_SignatureAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::System::Boolean get_UseMachineKeyStore()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_USEMACHINEKEYSTORE_OFFSET))(nullptr);
		}

		::System::Void set_UseMachineKeyStore(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SET_USEMACHINEKEYSTORE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_HASHDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashData(::System::IO::Stream* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_HASHDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetAlgorithmId(::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::System::Int32(*)(::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETALGORITHMID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encrypt(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::RSAEncryptionPadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decrypt(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::RSAEncryptionPadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignHash(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyHash(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Exception* PaddingModeNotSupported()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_PADDINGMODENOTSUPPORTED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Common(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Common(::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(nullptr);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYEXCHANGEALGORITHM_OFFSET))(nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_PersistKeyInCsp()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PERSISTKEYINCSP_OFFSET))(nullptr);
		}

		::System::Void set_PersistKeyInCsp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SET_PERSISTKEYINCSP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PublicOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Decrypt(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptValue(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPTVALUE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encrypt(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptValue(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSAParameters* ExportParameters(::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::RSAParameters*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* GetHash(::System::Object* arg)
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASH_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* GetHashFromString(::System::String* str)
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHFROMSTRING_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::Il2CppArray<::System::Object*>* arg, ::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::System::IO::Stream* arg, ::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetHashNameFromOID(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignHash(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNHASH_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignHash(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_SIGNHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* InternalHashToHashAlgorithm(::System::Int32 arg)
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_INTERNALHASHTOHASHALGORITHM_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifyData(::Il2CppArray<::System::Object*>* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyHash(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean VerifyHash(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnKeyGenerated(::System::Object* arg, ::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo()
		{
			return (return (::System::Security::Cryptography::CspKeyContainerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_CSPKEYCONTAINERINFO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportCspBlob(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTCSPBLOB_OFFSET))(arg, nullptr);
		}

		::System::Void ImportCspBlob(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTCSPBLOB_OFFSET))(arg, nullptr);
		}

	};
}

