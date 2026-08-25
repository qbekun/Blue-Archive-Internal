#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_HASHHELPERS_ISPRIME_OFFSET UNITYSDK_OFFSET(0x92C8280)
#define SYSTEM_COLLECTIONS_HASHHELPERS_GETPRIME_OFFSET UNITYSDK_OFFSET(0x92C8330)
#define SYSTEM_COLLECTIONS_HASHHELPERS_EXPANDPRIME_OFFSET UNITYSDK_OFFSET(0x92C8580)
#define SYSTEM_COLLECTIONS_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x92C85F0)
#define SYSTEM_COLLECTIONS_HASHHELPERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92C8710)

namespace System::Collections
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 25051;

	class HashHelpers : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* primes; // 0x0
		Il2CppObject* s_serializationInfoTable; // 0x8

		::System::Boolean IsPrime(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_ISPRIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPrime(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_GETPRIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 ExpandPrime(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_EXPANDPRIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SerializationInfoTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

