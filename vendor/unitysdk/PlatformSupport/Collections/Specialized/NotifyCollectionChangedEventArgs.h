#pragma once
#include "../../../unitysdk.h"

namespace PlatformSupport::Collections::Specialized { class NotifyCollectionChangedAction; }

#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D54D0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D5670)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D5850)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D5A10)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D5B90)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D5D40)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D5F40)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D6100)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D6260)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D63C0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D6560)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D6670)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET UNITYSDK_OFFSET(0x4D5820)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET UNITYSDK_OFFSET(0x4D55C0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET UNITYSDK_OFFSET(0x4D67F0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET UNITYSDK_OFFSET(0x4D5F00)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x4D68A0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET UNITYSDK_OFFSET(0x4D68B0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET UNITYSDK_OFFSET(0x4D68C0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0x4D68D0)
#define PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDSTARTINGINDEX_OFFSET UNITYSDK_OFFSET(0x4D68E0)

namespace PlatformSupport::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventArgs_TypeDefinitionIndex = 21285;

	class NotifyCollectionChangedEventArgs : public Il2CppObject
	{
	public:
		::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* _action; // 0x10
		::System::Collections::IList* _newItems; // 0x18
		::System::Collections::IList* _oldItems; // 0x20
		::System::Int32 _newStartingIndex; // 0x28
		::System::Int32 _oldStartingIndex; // 0x2C

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Object* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Object*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializeAddOrRemove(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADDORREMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeAdd(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeRemove(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEREMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeMoveOrReplace(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_INITIALIZEMOVEORREPLACE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* get_Action()
		{
			return (return (::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_ACTION_OFFSET))(nullptr);
		}

		::System::Collections::IList* get_NewItems()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWITEMS_OFFSET))(nullptr);
		}

		::System::Collections::IList* get_OldItems()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDITEMS_OFFSET))(nullptr);
		}

		::System::Int32 get_NewStartingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_NEWSTARTINGINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_OldStartingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSUPPORT_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTARGS_GET_OLDSTARTINGINDEX_OFFSET))(nullptr);
		}

	};
}

