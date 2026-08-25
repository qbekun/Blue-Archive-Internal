#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ReflectionObject; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_CREATOR_OFFSET UNITYSDK_OFFSET(0x94B1E20)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x94B1E30)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B1E40)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x94B1EE0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x94B1FB0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x94B2080)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x94B2130)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x94B2140)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionObject_TypeDefinitionIndex = 31888;

	class ReflectionObject : public Il2CppObject
	{
	public:
		Il2CppObject* _Creator_k__BackingField; // 0x10
		Il2CppObject* _Members_k__BackingField; // 0x18

		Il2CppObject* get_Creator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_CREATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Members()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GET_MEMBERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_SETVALUE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Type* GetType(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_GETTYPE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* arg, ::System::Reflection::MethodBase* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*, ::System::Reflection::MethodBase*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONOBJECT_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

