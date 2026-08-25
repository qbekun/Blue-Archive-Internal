#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ADDCOMPONENTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E8C0)
#define UNITYENGINE_ADDCOMPONENTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E900)

namespace UnityEngine
{
	inline static constexpr unsigned int AddComponentMenu_TypeDefinitionIndex = 31134;

	class AddComponentMenu : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* m_AddComponentMenu; // 0x10
		::System::Int32 m_Ordering; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDCOMPONENTMENU_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDCOMPONENTMENU_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

