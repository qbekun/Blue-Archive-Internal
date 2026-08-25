#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_INNERLIST_OFFSET UNITYSDK_OFFSET(0x92CC210)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92CC280)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92CC310)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92CC3A0)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x92CC430)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92CC4D0)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CC560)

namespace System::Collections
{
	inline static constexpr unsigned int ReadOnlyCollectionBase_TypeDefinitionIndex = 25074;

	class ReadOnlyCollectionBase : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _list; // 0x10

		::System::Collections::ArrayList* get_InnerList()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_INNERLIST_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

