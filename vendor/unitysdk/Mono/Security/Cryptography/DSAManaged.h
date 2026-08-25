#pragma once
#include "../../../unitysdk.h"

namespace Mono::Math { class BigInteger; }

#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x913FBE0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x913FCD0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATE_OFFSET UNITYSDK_OFFSET(0x913FDA0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x9140B20)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET UNITYSDK_OFFSET(0x9140FA0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET UNITYSDK_OFFSET(0x913FDF0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x9141030)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x9141560)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x9141590)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x91415A0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x9141600)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x9141630)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x91416C0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9141DC0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x91421F0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x91426D0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9142CD0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x9143180)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x9143220)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DSAManaged_TypeDefinitionIndex = 23629;

	class DSAManaged : public Il2CppObject
	{
	public:
		::System::Boolean keypairGenerated; // 0x20
		::System::Boolean m_disposed; // 0x21
		::Mono::Math::BigInteger* p; // 0x28
		::Mono::Math::BigInteger* q; // 0x30
		::Mono::Math::BigInteger* g; // 0x38
		::Mono::Math::BigInteger* x; // 0x40
		::Mono::Math::BigInteger* y; // 0x48
		::Mono::Math::BigInteger* j; // 0x50
		::Mono::Math::BigInteger* seed; // 0x58
		::System::Int32 counter; // 0x60
		::System::Boolean j_missing; // 0x64
		::System::Security::Cryptography::RandomNumberGenerator* rng; // 0x68
		KeyGeneratedEventHandler* KeyGenerated; // 0x70

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Generate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATE_OFFSET))(nullptr);
		}

		::System::Void GenerateKeyPair()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEKEYPAIR_OFFSET))(nullptr);
		}

		::System::Void add(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GenerateParams(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_Random()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET))(nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET))(nullptr);
		}

		::System::Boolean get_PublicOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET))(nullptr);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* NormalizeArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DSAParameters* ExportParameters(::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::DSAParameters*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::DSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_CREATESIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_VERIFYSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void add_KeyGenerated(KeyGeneratedEventHandler* arg)
		{
			((::System::Void(*)(KeyGeneratedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_KeyGenerated(KeyGeneratedEventHandler* arg)
		{
			((::System::Void(*)(KeyGeneratedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET))(arg, nullptr);
		}

	};
}

