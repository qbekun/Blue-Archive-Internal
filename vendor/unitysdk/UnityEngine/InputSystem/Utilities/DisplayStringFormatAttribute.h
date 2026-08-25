#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7EED0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_SET_FORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9E7EF00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_GET_FORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9E7EF10)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int DisplayStringFormatAttribute_TypeDefinitionIndex = 28916;

	class DisplayStringFormatAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _formatString_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_formatString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_SET_FORMATSTRING_OFFSET))(str, nullptr);
		}

		::System::String* get_formatString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_GET_FORMATSTRING_OFFSET))(nullptr);
		}

	};
}

