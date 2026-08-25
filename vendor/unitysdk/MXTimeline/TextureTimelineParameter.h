#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture; }

#define MXTIMELINE_TEXTURETIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE037E0)

namespace MXTimeline
{
	inline static constexpr unsigned int TextureTimelineParameter_TypeDefinitionIndex = 10237;

	class TextureTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::UnityEngine::Texture* texture; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_TEXTURETIMELINEPARAMETER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

