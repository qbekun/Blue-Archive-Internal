#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Scripting::APIUpdating { class MovedFromAttributeData; }

#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24B530)
#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24B5B0)

namespace UnityEngine::Scripting::APIUpdating
{
	inline static constexpr unsigned int MovedFromAttribute_TypeDefinitionIndex = 31309;

	class MovedFromAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData* data; // 0x10

		::System::Void .ctor(::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE_.CTOR_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

