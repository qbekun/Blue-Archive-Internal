#pragma once
#include "unitysdk.h"

#define WINDOWSUIREMAPATTRIBUTE_GET_WINDOWSUINAME_OFFSET UNITYSDK_OFFSET(0x21279E0)
#define WINDOWSUIREMAPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21279F0)

	inline static constexpr unsigned int WindowsUIRemapAttribute_TypeDefinitionIndex = 3914;

	class WindowsUIRemapAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _WindowsUIName_k__BackingField; // 0x10

		::System::String* get_WindowsUIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WINDOWSUIREMAPATTRIBUTE_GET_WINDOWSUINAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWSUIREMAPATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

