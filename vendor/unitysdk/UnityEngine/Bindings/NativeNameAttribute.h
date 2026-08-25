#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A59E0)
#define UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A59F0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeNameAttribute_TypeDefinitionIndex = 37880;

	class NativeNameAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

