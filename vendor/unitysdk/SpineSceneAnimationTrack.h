#pragma once
#include "unitysdk.h"

class SpineSceneAnimationTrack;

#define SPINESCENEANIMATIONTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20EB410)
#define SPINESCENEANIMATIONTRACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x20EB470)

	inline static constexpr unsigned int SpineSceneAnimationTrack_TypeDefinitionIndex = 3802;

	class SpineSceneAnimationTrack : public Il2CppObject
	{
	public:
		::System::Int32 TrackIndex; // 0x10
		::System::String* AnimationName; // 0x18
		::System::Single MixDuration; // 0x20
		::System::Boolean IsLoop; // 0x24

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::Single arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEANIMATIONTRACK_.CTOR_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(SpineSceneAnimationTrack* arg)
		{
			return ((::System::Boolean(*)(SpineSceneAnimationTrack*, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEANIMATIONTRACK_EQUALS_OFFSET))(arg, nullptr);
		}

	};

