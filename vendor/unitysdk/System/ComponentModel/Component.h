#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COMPONENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9B4C5F0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTS_OFFSET UNITYSDK_OFFSET(0x9B4C6C0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B4C6D0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_ADD_DISPOSED_OFFSET UNITYSDK_OFFSET(0x9B4C6F0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_REMOVE_DISPOSED_OFFSET UNITYSDK_OFFSET(0x9B4C880)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x9B4C800)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET UNITYSDK_OFFSET(0x9B4C990)
#define SYSTEM_COMPONENTMODEL_COMPONENT_SET_SITE_OFFSET UNITYSDK_OFFSET(0x9B4C9A0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B4C9B0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B4CA10)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x9B4CD30)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x9B4CDD0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x9B4CE80)
#define SYSTEM_COMPONENTMODEL_COMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B4CF20)
#define SYSTEM_COMPONENTMODEL_COMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4D050)
#define SYSTEM_COMPONENTMODEL_COMPONENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B4D060)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 29490;

	class Component : public Il2CppObject
	{
	public:
		::System::Object* EventDisposed; // 0x0
		::System::ComponentModel::ISite* site; // 0x18
		::System::ComponentModel::EventHandlerList* events; // 0x20

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRaiseEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRaiseEventsInternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTSINTERNAL_OFFSET))(nullptr);
		}

		::System::Void add_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_ADD_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_REMOVE_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventHandlerList* get_Events()
		{
			return (return (::System::ComponentModel::EventHandlerList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return (return (::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET))(nullptr);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ISite*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_SET_SITE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return (return (::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CONTAINER_OFFSET))(nullptr);
		}

		::System::Object* GetService(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GETSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DesignMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_DESIGNMODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

