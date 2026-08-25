#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20350)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20380)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B20390)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B20410)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLER_OFFSET UNITYSDK_OFFSET(0x9B20540)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B20630)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B20680)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_FIND_OFFSET UNITYSDK_OFFSET(0x9B203E0)
#define SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_REMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x9B206A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventHandlerList_TypeDefinitionIndex = 29330;

	class EventHandlerList : public Il2CppObject
	{
	public:
		ListEntry* _head; // 0x10
		::System::ComponentModel::Component* _parent; // 0x18

		::System::Void .ctor(::System::ComponentModel::Component* arg)
		{
			((::System::Void(*)(::System::ComponentModel::Component*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Delegate* get_Item(::System::Object* arg)
		{
			return (return (::System::Delegate*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHandler(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHandlers(::System::ComponentModel::EventHandlerList* arg)
		{
			((::System::Void(*)(::System::ComponentModel::EventHandlerList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_ADDHANDLERS_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_DISPOSE_OFFSET))(nullptr);
		}

		ListEntry* Find(::System::Object* arg)
		{
			return (return (ListEntry*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_FIND_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveHandler(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTHANDLERLIST_REMOVEHANDLER_OFFSET))(arg, arg, nullptr);
		}

	};
}

