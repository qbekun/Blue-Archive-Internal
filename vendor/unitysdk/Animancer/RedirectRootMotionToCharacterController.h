#pragma once
#include "../unitysdk.h"

#define ANIMANCER_REDIRECTROOTMOTIONTOCHARACTERCONTROLLER_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x4BCCE0)
#define ANIMANCER_REDIRECTROOTMOTIONTOCHARACTERCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BCEF0)

namespace Animancer
{
	inline static constexpr unsigned int RedirectRootMotionToCharacterController_TypeDefinitionIndex = 35205;

	class RedirectRootMotionToCharacterController : public ::System::Xml::QueryOutputWriter
	{
	public:
		::System::Void OnAnimatorMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTIONTOCHARACTERCONTROLLER_ONANIMATORMOVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTIONTOCHARACTERCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

