#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Authentication { class Digest; }

#define BESTHTTP_AUTHENTICATION_DIGESTSTORE_GET_OFFSET UNITYSDK_OFFSET(0x929CE0)
#define BESTHTTP_AUTHENTICATION_DIGESTSTORE_REMOVE_OFFSET UNITYSDK_OFFSET(0x929EE0)
#define BESTHTTP_AUTHENTICATION_DIGESTSTORE_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x92A090)
#define BESTHTTP_AUTHENTICATION_DIGESTSTORE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92A440)
#define BESTHTTP_AUTHENTICATION_DIGESTSTORE_FINDBEST_OFFSET UNITYSDK_OFFSET(0x92A640)

namespace BestHTTP::Authentication
{
	inline static constexpr unsigned int DigestStore_TypeDefinitionIndex = 23480;

	class DigestStore : public Il2CppObject
	{
	public:
		Il2CppObject* Digests; // 0x0
		::System::Threading::ReaderWriterLockSlim* rwLock; // 0x8
		::Il2CppArray<::System::Object*>* SupportedAlgorithms; // 0x10

		::BestHTTP::Authentication::Digest* Get(::System::Uri* arg)
		{
			return (return (::BestHTTP::Authentication::Digest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGESTSTORE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGESTSTORE_REMOVE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Authentication::Digest* GetOrCreate(::System::Uri* arg)
		{
			return (return (::BestHTTP::Authentication::Digest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGESTSTORE_GETORCREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGESTSTORE_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* FindBest(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_DIGESTSTORE_FINDBEST_OFFSET))(arg, nullptr);
		}

	};
}

