#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA250090)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2500C0)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2500D0)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA250170)

namespace UnityEngine::Internal
{
	inline static constexpr unsigned int DefaultValueAttribute_TypeDefinitionIndex = 31476;

	class DefaultValueAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Object* DefaultValue; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

