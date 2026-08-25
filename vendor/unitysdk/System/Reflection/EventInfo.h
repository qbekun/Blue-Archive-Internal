#pragma once
#include "../../unitysdk.h"

namespace Mono { class RuntimeEventHandle; }

#define SYSTEM_REFLECTION_EVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239DD0)
#define SYSTEM_REFLECTION_EVENTINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x9239DF0)
#define SYSTEM_REFLECTION_EVENTINFO_GET_ADDMETHOD_OFFSET UNITYSDK_OFFSET(0x9239E00)
#define SYSTEM_REFLECTION_EVENTINFO_GET_REMOVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9239E20)
#define SYSTEM_REFLECTION_EVENTINFO_GETADDMETHOD_OFFSET UNITYSDK_OFFSET(0x9239E40)
#define SYSTEM_REFLECTION_EVENTINFO_GETREMOVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9239E60)
#define SYSTEM_REFLECTION_EVENTINFO_GETADDMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_EVENTINFO_GETREMOVEMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_EVENTINFO_GETRAISEMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_EVENTINFO_GET_EVENTHANDLERTYPE_OFFSET UNITYSDK_OFFSET(0x9239E80)
#define SYSTEM_REFLECTION_EVENTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x9239FA0)
#define SYSTEM_REFLECTION_EVENTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9239FC0)
#define SYSTEM_REFLECTION_EVENTINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9239FE0)
#define SYSTEM_REFLECTION_EVENTINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x923A020)
#define SYSTEM_REFLECTION_EVENTINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x923A070)
#define SYSTEM_REFLECTION_EVENTINFO_GETEVENTFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x923A080)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 24852;

	class EventInfo : public Il2CppObject
	{
	public:
		AddEventAdapter* cached_add_event; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::MemberTypes* get_MemberType()
		{
			return (return (::System::Reflection::MemberTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_AddMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GET_ADDMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_RemoveMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GET_REMOVEMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetAddMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETADDMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetRemoveMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETREMOVEMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetAddMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETADDMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetRemoveMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETREMOVEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetRaiseMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETRAISEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Type* get_EventHandlerType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GET_EVENTHANDLERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::EventInfo* arg, ::System::Reflection::EventInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::EventInfo* arg, ::System::Reflection::EventInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::EventInfo* internal_from_handle_type(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Reflection::EventInfo*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::EventInfo* GetEventFromHandle(::Mono::RuntimeEventHandle* arg, ::System::RuntimeTypeHandle* arg)
		{
			return (return (::System::Reflection::EventInfo*(*)(::Mono::RuntimeEventHandle*, ::System::RuntimeTypeHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETEVENTFROMHANDLE_OFFSET))(arg, arg, nullptr);
		}

	};
}

