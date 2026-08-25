#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define WIDGETCHARACTERDIALOGEMOJIELEMENTAUDIOSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0xC25FA0)

	inline static constexpr unsigned int WidgetCharacterDialogEmojiElementAudioSetting_TypeDefinitionIndex = 8895;

	class WidgetCharacterDialogEmojiElementAudioSetting : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* spatialBlendCurve; // 0x10
		::System::Single curveMaxDistance; // 0x18
		::System::Single dopplerLevel; // 0x1C
		::System::Single spread; // 0x20
		::System::Single minDistance; // 0x24
		::System::Single maxDistance; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENTAUDIOSETTING_.CTOR_OFFSET))(nullptr);
		}

	};

