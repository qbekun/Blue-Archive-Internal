#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PropertyName; }

#define UNITYENGINE_PROPERTYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CC80)
#define UNITYENGINE_PROPERTYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CCD0)
#define UNITYENGINE_PROPERTYNAME_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0xA22CCE0)
#define UNITYENGINE_PROPERTYNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA22CCF0)
#define UNITYENGINE_PROPERTYNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA22CD00)
#define UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22CD10)
#define UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22CD80)
#define UNITYENGINE_PROPERTYNAME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22CD90)
#define UNITYENGINE_PROPERTYNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA22CDE0)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyName_TypeDefinitionIndex = 31123;

	class PropertyName : public Il2CppObject
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::UnityEngine::PropertyName* arg)
		{
			((::System::Void(*)(::UnityEngine::PropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullOrEmpty(::UnityEngine::PropertyName* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_ISNULLOREMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::PropertyName* arg, ::UnityEngine::PropertyName* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PropertyName*, ::UnityEngine::PropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::PropertyName* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::PropertyName* op_Implicit(::System::String* str)
		{
			return (return (::UnityEngine::PropertyName*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

