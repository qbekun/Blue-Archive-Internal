#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2FC20)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2FD00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2FD20)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B2FE10)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B2FE20)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B2FE30)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B2FF60)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9B2FF80)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B30160)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B301C0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x9B30270)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSUREEVENTSOWNED_OFFSET UNITYSDK_OFFSET(0x9B2FEB0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x9B30060)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_FIND_OFFSET UNITYSDK_OFFSET(0x9B30590)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9B30220)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x9B306B0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9B307B0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9B30870)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B30940)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x9B30A20)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x9B30AA0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x9B30B20)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET UNITYSDK_OFFSET(0x9B30BA0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET UNITYSDK_OFFSET(0x9B302B0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET UNITYSDK_OFFSET(0x9B30C20)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B30C90)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B30CA0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B30CB0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B30CC0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B30CD0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B30CF0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET UNITYSDK_OFFSET(0x9B30E80)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B30F00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET UNITYSDK_OFFSET(0x9B30FC0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET UNITYSDK_OFFSET(0x9B31020)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET UNITYSDK_OFFSET(0x9B310E0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET UNITYSDK_OFFSET(0x9B31170)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9B311F0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B31200)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x9B31210)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B31220)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventDescriptorCollection_TypeDefinitionIndex = 29389;

	class EventDescriptorCollection : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _events; // 0x10
		::Il2CppArray<::System::Object*>* _namedSort; // 0x18
		::System::Collections::IComparer* _comparer; // 0x20
		::System::Boolean _eventsOwned; // 0x28
		::System::Boolean _needSort; // 0x29
		::System::Boolean _readOnly; // 0x2A
		::System::ComponentModel::EventDescriptorCollection* Empty; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x2C

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptor* get_Item(::System::Int32 arg)
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptor* get_Item(::System::String* str)
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Int32 Add(::System::ComponentModel::EventDescriptor* arg)
		{
			return (return (::System::Int32(*)(::System::ComponentModel::EventDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::ComponentModel::EventDescriptor* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::EventDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureEventsOwned()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSUREEVENTSOWNED_OFFSET))(nullptr);
		}

		::System::Void EnsureSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_ENSURESIZE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptor* Find(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_FIND_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::ComponentModel::EventDescriptor* arg)
		{
			return (return (::System::Int32(*)(::System::ComponentModel::EventDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::ComponentModel::EventDescriptor* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::ComponentModel::EventDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::System::ComponentModel::EventDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::EventDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort()
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort(::Il2CppArray<::System::Object*>* arg, ::System::Collections::IComparer* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* Sort(::System::Collections::IComparer* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SORT_OFFSET))(arg, nullptr);
		}

		::System::Void InternalSort(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET))(arg, nullptr);
		}

		::System::Void InternalSort(::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_INTERNALSORT_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IList.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.IList.Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IList.Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.IList.IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.IList.Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTORCOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

