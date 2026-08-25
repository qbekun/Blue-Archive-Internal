#pragma once
#include "../../../unitysdk.h"

namespace PlatformSupport::Collections::Specialized { class NotifyCollectionChangedEventHandler; }

#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace PlatformSupport::Collections::Specialized
{
	inline static constexpr unsigned int INotifyCollectionChanged_TypeDefinitionIndex = 21283;

	class INotifyCollectionChanged : public Il2CppObject
	{
	public:
		::System::Void remove_CollectionChanged(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_CollectionChanged(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_INOTIFYCOLLECTIONCHANGED_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

