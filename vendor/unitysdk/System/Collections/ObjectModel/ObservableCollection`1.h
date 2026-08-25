#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_SETITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_CHECKREENTRANCY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOUNTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONINDEXERPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONRESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ENSUREMONITORINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ObservableCollection`1_TypeDefinitionIndex = 29557;

	class ObservableCollection`1 : public <>c__DisplayClass44_0
	{
	public:
		Il2CppObject* _monitor; // 0x0
		::System::Int32 _blockReentrancyCount; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateCopy(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_CREATECOPY_OFFSET))(arg, str, nullptr);
		}

		::System::Void System.ComponentModel.INotifyPropertyChanged.add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.INotifyPropertyChanged.remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_CLEARITEMS_OFFSET))(nullptr);
		}

		::System::Void RemoveItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_REMOVEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void InsertItem(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_INSERTITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetItem(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_SETITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPropertyChanged(::System::ComponentModel::PropertyChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void CheckReentrancy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_CHECKREENTRANCY_OFFSET))(nullptr);
		}

		::System::Void OnCountPropertyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOUNTPROPERTYCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnIndexerPropertyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONINDEXERPROPERTYCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnCollectionReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONCOLLECTIONRESET_OFFSET))(nullptr);
		}

		Il2CppObject* EnsureMonitorInitialized()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ENSUREMONITORINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONSERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_OBSERVABLECOLLECTION`1_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

	};
}

