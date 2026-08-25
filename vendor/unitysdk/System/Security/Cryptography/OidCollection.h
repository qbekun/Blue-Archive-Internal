#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B05F40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9B05FC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B06070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B060C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B06100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B061B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x9B06220)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B06450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B06460)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int OidCollection_TypeDefinitionIndex = 29270;

	class OidCollection : public Il2CppObject
	{
	public:
		Il2CppObject* _list; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Add(::System::Security::Cryptography::Oid* arg)
		{
			return (return (::System::Int32(*)(::System::Security::Cryptography::Oid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::Oid* get_Item(::System::Int32 arg)
		{
			return (return (::System::Security::Cryptography::Oid*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::OidEnumerator* GetEnumerator()
		{
			return (return (::System::Security::Cryptography::OidEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_SYNCROOT_OFFSET))(nullptr);
		}

	};
}

