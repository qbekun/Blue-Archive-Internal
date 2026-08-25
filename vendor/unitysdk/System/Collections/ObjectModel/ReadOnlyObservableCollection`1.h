#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COLLECTIONS.SPECIALIZED.INOTIFYCOLLECTIONCHANGED.ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COLLECTIONS.SPECIALIZED.INOTIFYCOLLECTIONCHANGED.REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_HANDLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_HANDLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyObservableCollection`1_TypeDefinitionIndex = 29559;

	class ReadOnlyObservableCollection`1 : public ResultSet
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Specialized.INotifyCollectionChanged.add_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COLLECTIONS.SPECIALIZED.INOTIFYCOLLECTIONCHANGED.ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Specialized.INotifyCollectionChanged.remove_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COLLECTIONS.SPECIALIZED.INOTIFYCOLLECTIONCHANGED.REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ONCOLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.INotifyPropertyChanged.add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.INotifyPropertyChanged.remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPropertyChanged(::System::ComponentModel::PropertyChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_ONPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void HandleCollectionChanged(::System::Object* arg, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_HANDLECOLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandlePropertyChanged(::System::Object* arg, ::System::ComponentModel::PropertyChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYOBSERVABLECOLLECTION`1_HANDLEPROPERTYCHANGED_OFFSET))(arg, arg, nullptr);
		}

	};
}

