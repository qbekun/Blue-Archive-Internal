#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_ANIMATION_UCANIMATIONEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCANIMATIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3650)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCAnimationEvent_TypeDefinitionIndex = 10097;

	class UCAnimationEvent : public Il2CppObject
	{
	public:
		::System::Void Invoke(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONEVENT_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

