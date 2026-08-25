#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_CRYPTO_MD5HASHSERVICE_TOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1081D40)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1081E10)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1081F70)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1082020)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x10821C0)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASHASSTRING_OFFSET UNITYSDK_OFFSET(0x1082270)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASHASSTRING_OFFSET UNITYSDK_OFFSET(0x1082290)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST_OFFSET UNITYSDK_OFFSET(0x10822B0)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST_OFFSET UNITYSDK_OFFSET(0x1082310)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST64_OFFSET UNITYSDK_OFFSET(0x1082380)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST64_OFFSET UNITYSDK_OFFSET(0x10823E0)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHEAD_OFFSET UNITYSDK_OFFSET(0x1082450)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x10824B0)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_EXTRACTDBFILENAMEFROMURL_OFFSET UNITYSDK_OFFSET(0x10824D0)
#define MX_CORE_CRYPTO_MD5HASHSERVICE_EXTRACTRESERVEDWORDFILENAMEFROMURL_OFFSET UNITYSDK_OFFSET(0x10825A0)

namespace MX::Core::Crypto
{
	inline static constexpr unsigned int MD5HashService_TypeDefinitionIndex = 12906;

	class MD5HashService : public Il2CppObject
	{
	public:
		::System::String* ToHexString(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_TOHEXSTRING_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeHash(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeHash(::System::Object* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeHash(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeHash(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASH_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ComputeHashAsString(::System::Object* arg)
		{
			return ((::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASHASSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ComputeHashAsString(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHASHASSTRING_OFFSET))(arg, arg2, nullptr);
		}

		::System::UInt32 ComputeDigest(::System::Object* arg)
		{
			return ((::System::UInt32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ComputeDigest(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::UInt32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST_OFFSET))(arg, arg2, nullptr);
		}

		::System::UInt64 ComputeDigest64(::System::Object* arg)
		{
			return ((::System::UInt64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ComputeDigest64(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::UInt64(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEDIGEST64_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ComputeHead(::System::Object* arg)
		{
			return ((::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_COMPUTEHEAD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateKey(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_GENERATEKEY_OFFSET))(str, nullptr);
		}

		::System::String* ExtractDBFileNameFromURL(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_EXTRACTDBFILENAMEFROMURL_OFFSET))(str, nullptr);
		}

		::System::String* ExtractReservedWordFileNameFromURL(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_MD5HASHSERVICE_EXTRACTRESERVEDWORDFILENAMEFROMURL_OFFSET))(str, nullptr);
		}

	};
}

