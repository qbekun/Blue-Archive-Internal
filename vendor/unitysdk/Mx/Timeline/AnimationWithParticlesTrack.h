#pragma once
#include "../../unitysdk.h"

#define MX_TIMELINE_ANIMATIONWITHPARTICLESTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1F130)

namespace Mx::Timeline
{
	inline static constexpr unsigned int AnimationWithParticlesTrack_TypeDefinitionIndex = 10356;

	class AnimationWithParticlesTrack : public ::OggVorbis::NativeErrorException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ANIMATIONWITHPARTICLESTRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

