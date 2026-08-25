#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6160)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6170)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A61A0)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_OPTIONAL_OFFSET UNITYSDK_OFFSET(0xA2A61B0)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_GENERATEPROXY_OFFSET UNITYSDK_OFFSET(0xA2A61C0)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int RequiredByNativeCodeAttribute_TypeDefinitionIndex = 37898;

	class RequiredByNativeCodeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _Optional_k__BackingField; // 0x18
		::System::Boolean _GenerateProxy_k__BackingField; // 0x19

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Optional(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_OPTIONAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_GenerateProxy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_GENERATEPROXY_OFFSET))(arg, nullptr);
		}

	};
}

