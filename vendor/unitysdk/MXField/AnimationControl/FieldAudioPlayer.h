#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ANIMATIONCONTROL_FIELDAUDIOPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE7460)

namespace MXField::AnimationControl
{
	inline static constexpr unsigned int FieldAudioPlayer_TypeDefinitionIndex = 11026;

	class FieldAudioPlayer : public DebuggerProxy
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDAUDIOPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};
}

