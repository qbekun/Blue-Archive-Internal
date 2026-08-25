#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAVIEWLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97477A0)
#define SYSTEM_DATA_DATAVIEWLISTENER_CHILDRELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x974D4F0)
#define SYSTEM_DATA_DATAVIEWLISTENER_PARENTRELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x974D5C0)
#define SYSTEM_DATA_DATAVIEWLISTENER_COLUMNCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x974D670)
#define SYSTEM_DATA_DATAVIEWLISTENER_MAINTAINDATAVIEW_OFFSET UNITYSDK_OFFSET(0x974D740)
#define SYSTEM_DATA_DATAVIEWLISTENER_INDEXLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x974D810)
#define SYSTEM_DATA_DATAVIEWLISTENER_REGISTERMETADATAEVENTS_OFFSET UNITYSDK_OFFSET(0x9747830)
#define SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_OFFSET UNITYSDK_OFFSET(0x9748820)
#define SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_OFFSET UNITYSDK_OFFSET(0x974DB00)
#define SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x974CB60)
#define SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERLISTCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x974CA30)
#define SYSTEM_DATA_DATAVIEWLISTENER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x974D5A0)
#define SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTENER_OFFSET UNITYSDK_OFFSET(0x974D8C0)

namespace System::Data
{
	inline static constexpr unsigned int DataViewListener_TypeDefinitionIndex = 32236;

	class DataViewListener : public Il2CppObject
	{
	public:
		::System::WeakReference* _dvWeak; // 0x10
		::System::Data::DataTable* _table; // 0x18
		::System::Data::Index* _index; // 0x20
		::System::Int32 _objectID; // 0x28

		::System::Void .ctor(::System::Data::DataView* arg)
		{
			((::System::Void(*)(::System::Data::DataView*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ChildRelationCollectionChanged(::System::Object* arg, ::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_CHILDRELATIONCOLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ParentRelationCollectionChanged(::System::Object* arg, ::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_PARENTRELATIONCOLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ColumnCollectionChanged(::System::Object* arg, ::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_COLUMNCOLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MaintainDataView(::System::ComponentModel::ListChangedType* arg, ::System::Data::DataRow* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedType*, ::System::Data::DataRow*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_MAINTAINDATAVIEW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void IndexListChanged(::System::ComponentModel::ListChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_INDEXLISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterMetaDataEvents(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_REGISTERMETADATAEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterMetaDataEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_OFFSET))(nullptr);
		}

		::System::Void UnregisterMetaDataEvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERMETADATAEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterListChangedEvent(::System::Data::Index* arg)
		{
			((::System::Void(*)(::System::Data::Index*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTCHANGEDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterListChangedEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_UNREGISTERLISTCHANGEDEVENT_OFFSET))(nullptr);
		}

		::System::Void CleanUp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_CLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterListener(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWLISTENER_REGISTERLISTENER_OFFSET))(arg, nullptr);
		}

	};
}

