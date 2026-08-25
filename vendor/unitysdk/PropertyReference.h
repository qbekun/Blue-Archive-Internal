#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Component; }

#define PROPERTYREFERENCE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1F46320)
#define PROPERTYREFERENCE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1F46330)
#define PROPERTYREFERENCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F46380)
#define PROPERTYREFERENCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1F46390)
#define PROPERTYREFERENCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F45B20)
#define PROPERTYREFERENCE_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1F463E0)
#define PROPERTYREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F464F0)
#define PROPERTYREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F46500)
#define PROPERTYREFERENCE_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1F460D0)
#define PROPERTYREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F46660)
#define PROPERTYREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F46790)
#define PROPERTYREFERENCE_SET_OFFSET UNITYSDK_OFFSET(0x1F467E0)
#define PROPERTYREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F46820)
#define PROPERTYREFERENCE_RESET_OFFSET UNITYSDK_OFFSET(0x1F462A0)
#define PROPERTYREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F46860)
#define PROPERTYREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F468C0)
#define PROPERTYREFERENCE_GET_OFFSET UNITYSDK_OFFSET(0x1F45B90)
#define PROPERTYREFERENCE_SET_OFFSET UNITYSDK_OFFSET(0x1F45CC0)
#define PROPERTYREFERENCE_CACHE_OFFSET UNITYSDK_OFFSET(0x1F46550)
#define PROPERTYREFERENCE_CONVERT_OFFSET UNITYSDK_OFFSET(0x1F469E0)
#define PROPERTYREFERENCE_CONVERT_OFFSET UNITYSDK_OFFSET(0x1F47170)
#define PROPERTYREFERENCE_CONVERT_OFFSET UNITYSDK_OFFSET(0x1F471D0)
#define PROPERTYREFERENCE_CONVERT_OFFSET UNITYSDK_OFFSET(0x1F46AC0)
#define PROPERTYREFERENCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1F47260)

	inline static constexpr unsigned int PropertyReference_TypeDefinitionIndex = 120;

	class PropertyReference : public Il2CppObject
	{
	public:
		::UnityEngine::Component* mTarget; // 0x10
		::System::String* mName; // 0x18
		::System::Reflection::FieldInfo* mField; // 0x20
		::System::Reflection::PropertyInfo* mProperty; // 0x28
		::System::Int32 s_Hash; // 0x0

		::UnityEngine::Component* get_target()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_target(::UnityEngine::Component* arg)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Component* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Type* GetPropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_GETPROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void Set(::UnityEngine::Component* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_SET_OFFSET))(arg, str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_RESET_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::UnityEngine::Component* arg, ::System::String* str)
		{
			return ((::System::String*(*)(::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_TOSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Object* Get()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_GET_OFFSET))(nullptr);
		}

		::System::Boolean Set(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_SET_OFFSET))(arg, nullptr);
		}

		::System::Boolean Cache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_CACHE_OFFSET))(nullptr);
		}

		::System::Boolean Convert(::System::Object&* arg)
		{
			return ((::System::Boolean(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_CONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Convert(::System::Type* arg, ::System::Type* arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_CONVERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Convert(::System::Object* arg, ::System::Type* arg2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_CONVERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Convert(::System::Object&* arg, ::System::Type* arg2, ::System::Type* arg3)
		{
			return ((::System::Boolean(*)(::System::Object&*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_CONVERT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYREFERENCE_.CCTOR_OFFSET))(nullptr);
		}

	};

