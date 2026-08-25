#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0xA2A5F50)
#define UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5F60)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 37888;

	class NotNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Exception_k__BackingField; // 0x10

		::System::Void set_Exception(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE_SET_EXCEPTION_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

