#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6110)
#define UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6120)
#define UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A6150)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int UsedByNativeCodeAttribute_TypeDefinitionIndex = 37897;

	class UsedByNativeCodeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

	};
}

