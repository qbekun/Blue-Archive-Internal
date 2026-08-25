#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections
{
	inline static constexpr unsigned int ICollection_TypeDefinitionIndex = 25052;

	class ICollection : public Il2CppObject
	{
	public:
		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

	};
}

