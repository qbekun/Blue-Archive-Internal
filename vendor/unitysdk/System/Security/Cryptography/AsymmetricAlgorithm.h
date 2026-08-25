#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x918C170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918C180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x918C1E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918C240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x918C250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x918C260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET UNITYSDK_OFFSET(0x918C370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x918C3F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x918C440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x918C490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x918C4E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x918C580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x918C5D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C6C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTSUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x918C710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C7B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTSUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x918C850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C8F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTPKCS8PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x918C940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTSUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x918C990)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricAlgorithm_TypeDefinitionIndex = 24315;

	class AsymmetricAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 KeySizeValue; // 0x10
		::Il2CppArray<::System::Object*>* LegalKeySizesValue; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::Void set_KeySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_SET_KEYSIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LegalKeySizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET))(nullptr);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYEXCHANGEALGORITHM_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* Create()
		{
			return (return (::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void FromXmlString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_FROMXMLSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToXmlString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TOXMLSTRING_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportEncryptedPkcs8PrivateKey(Il2CppObject* arg, ::System::Security::Cryptography::PbeParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::Security::Cryptography::PbeParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportEncryptedPkcs8PrivateKey(Il2CppObject* arg, ::System::Security::Cryptography::PbeParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::Security::Cryptography::PbeParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportPkcs8PrivateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTPKCS8PRIVATEKEY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportSubjectPublicKeyInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_EXPORTSUBJECTPUBLICKEYINFO_OFFSET))(nullptr);
		}

		::System::Void ImportEncryptedPkcs8PrivateKey(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ImportEncryptedPkcs8PrivateKey(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ImportPkcs8PrivateKey(Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTPKCS8PRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImportSubjectPublicKeyInfo(Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_IMPORTSUBJECTPUBLICKEYINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryExportEncryptedPkcs8PrivateKey(Il2CppObject* arg, ::System::Security::Cryptography::PbeParameters* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Security::Cryptography::PbeParameters*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryExportEncryptedPkcs8PrivateKey(Il2CppObject* arg, ::System::Security::Cryptography::PbeParameters* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Security::Cryptography::PbeParameters*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTENCRYPTEDPKCS8PRIVATEKEY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryExportPkcs8PrivateKey(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTPKCS8PRIVATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryExportSubjectPublicKeyInfo(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TRYEXPORTSUBJECTPUBLICKEYINFO_OFFSET))(arg, arg, nullptr);
		}

	};
}

