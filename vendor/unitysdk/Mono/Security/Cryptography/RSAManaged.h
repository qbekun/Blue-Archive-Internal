#pragma once
#include "../../../unitysdk.h"

namespace Mono::Math { class BigInteger; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9111A50)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9111A60)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9111B70)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x9111C40)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x9112C20)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x9112CC0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x9112CF0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x9112E20)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x9112E50)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x9113A20)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9113BE0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9114260)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91148E0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x9114DE0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x9113980)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_TypeDefinitionIndex = 35814;

	class RSAManaged : public Il2CppObject
	{
	public:
		::System::Boolean isCRTpossible; // 0x20
		::System::Boolean keyBlinding; // 0x21
		::System::Boolean keypairGenerated; // 0x22
		::System::Boolean m_disposed; // 0x23
		::Mono::Math::BigInteger* d; // 0x28
		::Mono::Math::BigInteger* p; // 0x30
		::Mono::Math::BigInteger* q; // 0x38
		::Mono::Math::BigInteger* dp; // 0x40
		::Mono::Math::BigInteger* dq; // 0x48
		::Mono::Math::BigInteger* qInv; // 0x50
		::Mono::Math::BigInteger* n; // 0x58
		::Mono::Math::BigInteger* e; // 0x60
		KeyGeneratedEventHandler* KeyGenerated; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void GenerateKeyPair()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET))(nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET))(nullptr);
		}

		::System::Boolean get_PublicOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET))(nullptr);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptValue(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptValue(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSAParameters* ExportParameters(::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::RSAParameters*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::String* ToXmlString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPaddedValue(::Mono::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Mono::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

