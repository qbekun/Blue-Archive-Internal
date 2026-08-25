#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Gradient; }

#define MXTIMELINE_COLORTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02F10)
#define MXTIMELINE_COLORTIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE02F40)

namespace MXTimeline
{
	inline static constexpr unsigned int ColorTimelineParameter_TypeDefinitionIndex = 10234;

	class ColorTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::UnityEngine::Color* value; // 0x14
		::System::Boolean curve; // 0x24
		::UnityEngine::Gradient* valueGradient; // 0x28

		::System::Void .ctor(::UnityEngine::Color* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Color* Value(::System::Single arg)
		{
			return ((::UnityEngine::Color*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORTIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

