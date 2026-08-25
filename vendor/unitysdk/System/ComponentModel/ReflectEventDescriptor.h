#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B44900)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B44AB0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B44C70)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B44D40)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B44D50)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_ISMULTICAST_OFFSET UNITYSDK_OFFSET(0x9B453B0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_ADDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9B45450)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B45CE0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLEVENTINFOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B45D40)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLMETHODS_OFFSET UNITYSDK_OFFSET(0x9B44D70)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLSINGLEMETHODATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B460F0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_REMOVEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9B46C60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectEventDescriptor_TypeDefinitionIndex = 29451;

	class ReflectEventDescriptor : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x60
		::System::Type* _componentClass; // 0x68
		::System::Reflection::MethodInfo* _addMethod; // 0x70
		::System::Reflection::MethodInfo* _removeMethod; // 0x78
		::System::Reflection::EventInfo* _realEvent; // 0x80
		::System::Boolean _filledMethods; // 0x88

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Reflection::EventInfo* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Reflection::EventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::ComponentModel::EventDescriptor* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::ComponentModel::EventDescriptor*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_EventType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_EVENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMulticast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_ISMULTICAST_OFFSET))(nullptr);
		}

		::System::Void AddEventHandler(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_ADDEVENTHANDLER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FillAttributes(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void FillEventInfoAttribute(::System::Reflection::EventInfo* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Reflection::EventInfo*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLEVENTINFOATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FillMethods()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLMETHODS_OFFSET))(nullptr);
		}

		::System::Void FillSingleMethodAttribute(::System::Reflection::MethodInfo* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLSINGLEMETHODATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveEventHandler(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_REMOVEEVENTHANDLER_OFFSET))(arg, arg, nullptr);
		}

	};
}

