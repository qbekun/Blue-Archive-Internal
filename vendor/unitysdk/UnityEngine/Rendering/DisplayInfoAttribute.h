#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_DISPLAYINFOATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7740)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DisplayInfoAttribute_TypeDefinitionIndex = 33891;

	class DisplayInfoAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 order; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPLAYINFOATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

