#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2FBF0)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2FC00)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2FC10)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_GET_ISMULTICAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_ADDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_REMOVEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EventDescriptor_TypeDefinitionIndex = 29387;

	class EventDescriptor : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::MemberDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::MemberDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::MemberDescriptor* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::ComponentModel::MemberDescriptor*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_EventType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_GET_EVENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMulticast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_GET_ISMULTICAST_OFFSET))(nullptr);
		}

		::System::Void AddEventHandler(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_ADDEVENTHANDLER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveEventHandler(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EVENTDESCRIPTOR_REMOVEEVENTHANDLER_OFFSET))(arg, arg, nullptr);
		}

	};
}

