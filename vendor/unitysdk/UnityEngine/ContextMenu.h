#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_CONTEXTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E980)
#define UNITYENGINE_CONTEXTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E9C0)
#define UNITYENGINE_CONTEXTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EA00)

namespace UnityEngine
{
	inline static constexpr unsigned int ContextMenu_TypeDefinitionIndex = 31136;

	class ContextMenu : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* menuItem; // 0x10
		::System::Boolean validate; // 0x18
		::System::Int32 priority; // 0x1C

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

