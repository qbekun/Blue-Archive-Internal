#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }

#define UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19EA40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackColorAttribute_TypeDefinitionIndex = 36268;

	class TrackColorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::UnityEngine::Color* m_Color; // 0x10

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCOLORATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

