#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xDE3110)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xDE3120)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET UNITYSDK_OFFSET(0xDE3130)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_NEWITEMS_OFFSET UNITYSDK_OFFSET(0xDE3140)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0xDE3150)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_NEWSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0xDE3160)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET UNITYSDK_OFFSET(0xDE3170)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_OLDITEMS_OFFSET UNITYSDK_OFFSET(0xDE3180)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0xDE3190)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_OLDSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0xDE31A0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE31B0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE31D0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE3210)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE3310)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE3360)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE33A0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE33C0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE34C0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE3520)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE3570)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE35A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyCollectionChangedEventArgs_TypeDefinitionIndex = 10147;

	class NotifyCollectionChangedEventArgs : public Il2CppObject
	{
	public:
		::System::ComponentModel::NotifyCollectionChangedAction* _Action_k__BackingField; // 0x10
		::System::Collections::IList* _NewItems_k__BackingField; // 0x18
		::System::Int32 _NewStartingIndex_k__BackingField; // 0x20
		::System::Collections::IList* _OldItems_k__BackingField; // 0x28
		::System::Int32 _OldStartingIndex_k__BackingField; // 0x30

		::System::ComponentModel::NotifyCollectionChangedAction* get_Action()
		{
			return ((::System::ComponentModel::NotifyCollectionChangedAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET))(nullptr);
		}

		::System::Void set_Action(::System::ComponentModel::NotifyCollectionChangedAction* arg)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_ACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_NewItems()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET))(nullptr);
		}

		::System::Void set_NewItems(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_NEWITEMS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NewStartingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWSTARTINGINDEX_OFFSET))(nullptr);
		}

		::System::Void set_NewStartingIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_NEWSTARTINGINDEX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_OldItems()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET))(nullptr);
		}

		::System::Void set_OldItems(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_OLDITEMS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OldStartingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDSTARTINGINDEX_OFFSET))(nullptr);
		}

		::System::Void set_OldStartingIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_SET_OLDSTARTINGINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg2)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg2, ::System::Collections::IList* arg3)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Object* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Object* arg2, ::System::Object* arg3)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg2, ::System::Collections::IList* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Object* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Object*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::NotifyCollectionChangedAction* arg, ::System::Object* arg2, ::System::Object* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::ComponentModel::NotifyCollectionChangedAction*, ::System::Object*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

