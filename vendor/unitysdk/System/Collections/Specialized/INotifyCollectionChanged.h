#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int INotifyCollectionChanged_TypeDefinitionIndex = 29571;

	class INotifyCollectionChanged : public Il2CppObject
	{
	public:
		::System::Void add_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

