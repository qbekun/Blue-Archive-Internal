#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91AE7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET UNITYSDK_OFFSET(0x91AE5E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x91AE7B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET UNITYSDK_OFFSET(0x91AE270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET UNITYSDK_OFFSET(0x919FBE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET UNITYSDK_OFFSET(0x91AE840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET UNITYSDK_OFFSET(0x91AE9F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x91AEA90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x91AEBB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET UNITYSDK_OFFSET(0x91ADE80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x91AEC20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x91AEC50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x91A75C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x91A74F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x91AA260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x91AA0F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_INT_OFFSET UNITYSDK_OFFSET(0x91AED20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET UNITYSDK_OFFSET(0x91A51C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET UNITYSDK_OFFSET(0x91A4820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAPKCS1PADDING_OFFSET UNITYSDK_OFFSET(0x91AEDA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_COMPAREBIGINTARRAYS_OFFSET UNITYSDK_OFFSET(0x91AF0A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_OIDTOHASHALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x91AF190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET UNITYSDK_OFFSET(0x91A49E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET UNITYSDK_OFFSET(0x91AF2B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x91AF380)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 24388;

	class Utils : public Il2CppObject
	{
	public:
		::System::Int32 DefaultRsaProviderType; // 0x0
		::System::Security::Cryptography::RNGCryptoServiceProvider* _rng; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator()
		{
			return (return (::System::Security::Cryptography::RNGCryptoServiceProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateRandom(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAlgorithm(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET))(arg, arg, nullptr);
		}

		::System::String* DiscardWhiteSpaces(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET))(str, nullptr);
		}

		::System::String* DiscardWhiteSpaces(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 ConvertByteArrayToInt(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ConvertIntToByteArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertIntToByteArray(::System::UInt32 arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FixupKeyParity(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET))(arg, nullptr);
		}

		::System::Void DWORDFromLittleEndian(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DWORDToLittleEndian(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DWORDFromBigEndian(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DWORDToBigEndian(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QuadWordFromBigEndian(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QuadWordToBigEndian(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Int(::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_INT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RsaOaepEncrypt(::System::Security::Cryptography::RSA* arg, ::System::Security::Cryptography::HashAlgorithm* arg, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* arg, ::System::Security::Cryptography::RandomNumberGenerator* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RsaOaepDecrypt(::System::Security::Cryptography::RSA* arg, ::System::Security::Cryptography::HashAlgorithm* arg, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RsaPkcs1Padding(::System::Security::Cryptography::RSA* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAPKCS1PADDING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CompareBigIntArrays(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_COMPAREBIGINTARRAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithmName* OidToHashAlgorithmName(::System::String* str)
		{
			return (return (::System::Security::Cryptography::HashAlgorithmName*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_OIDTOHASHALGORITHMNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean DoesRsaKeyOverride(::System::Security::Cryptography::RSA* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean DoesRsaKeyOverrideSlowPath(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean _ProduceLegacyHmacValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET))(nullptr);
		}

	};
}

