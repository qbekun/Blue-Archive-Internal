#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_BLOCKSIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9192490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_BLOCKSIZEVALUE_OFFSET UNITYSDK_OFFSET(0x91924A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_UPDATEIOPADBUFFERS_OFFSET UNITYSDK_OFFSET(0x91924B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEKEY_OFFSET UNITYSDK_OFFSET(0x9192640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9192740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET UNITYSDK_OFFSET(0x91927C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x9192840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x9192850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET UNITYSDK_OFFSET(0x91929D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET UNITYSDK_OFFSET(0x9192AC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9192B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET UNITYSDK_OFFSET(0x9192BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x9192C90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9192E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GETHASHALGORITHMWITHFIPSFALLBACK_OFFSET UNITYSDK_OFFSET(0x9193010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x91931C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMAC_TypeDefinitionIndex = 24337;

	class HMAC : public Il2CppObject
	{
	public:
		::System::Int32 blockSizeValue; // 0x30
		::System::String* m_hashName; // 0x38
		::System::Security::Cryptography::HashAlgorithm* m_hash1; // 0x40
		::System::Security::Cryptography::HashAlgorithm* m_hash2; // 0x48
		::Il2CppArray<::System::Object*>* m_inner; // 0x50
		::Il2CppArray<::System::Object*>* m_outer; // 0x58
		::System::Boolean m_hashing; // 0x60

		::System::Int32 get_BlockSizeValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_BLOCKSIZEVALUE_OFFSET))(nullptr);
		}

		::System::Void set_BlockSizeValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_BLOCKSIZEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateIOPadBuffers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_UPDATEIOPADBUFFERS_OFFSET))(nullptr);
		}

		::System::Void InitializeKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::String* get_HashName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_HASHNAME_OFFSET))(nullptr);
		}

		::System::Void set_HashName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_HASHNAME_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::HMAC* Create()
		{
			return (return (::System::Security::Cryptography::HMAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::HMAC* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::HMAC*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* GetHashAlgorithmWithFipsFallback(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GETHASHALGORITHMWITHFIPSFALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_.CTOR_OFFSET))(nullptr);
		}

	};
}

