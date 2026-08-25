#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7FA30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B852B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B85530)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B85770)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET UNITYSDK_OFFSET(0x9B85500)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET UNITYSDK_OFFSET(0x9B85200)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET UNITYSDK_OFFSET(0x9B85930)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET UNITYSDK_OFFSET(0x9B85730)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventArgs_TypeDefinitionIndex = 29573;

	class NotifyCollectionChangedEventArgs : public Il2CppObject
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedAction* _action; // 0x10
		::System::Collections::IList* _newItems; // 0x18
		::System::Collections::IList* _oldItems; // 0x20
		::System::Int32 _newStartingIndex; // 0x28
		::System::Int32 _oldStartingIndex; // 0x2C

		::System::Void .ctor(::System::Collections::Specialized::NotifyCollectionChangedAction* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializeAddOrRemove(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeAdd(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeRemove(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeMoveOrReplace(::System::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

