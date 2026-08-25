#pragma once
#include "../unitysdk.h"

#define ANIMANCER_REDIRECTROOTMOTIONTORIGIDBODY_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x4BCF30)
#define ANIMANCER_REDIRECTROOTMOTIONTORIGIDBODY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BD170)

namespace Animancer
{
	inline static constexpr unsigned int RedirectRootMotionToRigidbody_TypeDefinitionIndex = 35206;

	class RedirectRootMotionToRigidbody : public State
	{
	public:
		::System::Void OnAnimatorMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTIONTORIGIDBODY_ONANIMATORMOVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTIONTORIGIDBODY_.CTOR_OFFSET))(nullptr);
		}

	};
}

