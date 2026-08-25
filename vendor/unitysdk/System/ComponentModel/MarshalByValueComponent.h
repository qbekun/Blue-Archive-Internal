#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B363D0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9B363E0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_ADD_DISPOSED_OFFSET UNITYSDK_OFFSET(0x9B364B0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_REMOVE_DISPOSED_OFFSET UNITYSDK_OFFSET(0x9B36620)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x9B365B0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_SITE_OFFSET UNITYSDK_OFFSET(0x9B36720)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_SET_SITE_OFFSET UNITYSDK_OFFSET(0x9B36730)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B36740)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B367A0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x9B36A40)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x9B36AE0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x9B36B90)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B36C30)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B36D60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MarshalByValueComponent_TypeDefinitionIndex = 29433;

	class MarshalByValueComponent : public Il2CppObject
	{
	public:
		::System::Object* s_eventDisposed; // 0x0
		::System::ComponentModel::ISite* _site; // 0x10
		::System::ComponentModel::EventHandlerList* _events; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void add_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_ADD_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_REMOVE_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventHandlerList* get_Events()
		{
			return (return (::System::ComponentModel::EventHandlerList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return (return (::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_SITE_OFFSET))(nullptr);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ISite*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_SET_SITE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return (return (::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_CONTAINER_OFFSET))(nullptr);
		}

		::System::Object* GetService(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GETSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DesignMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_DESIGNMODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

