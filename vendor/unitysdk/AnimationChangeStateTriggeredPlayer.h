#pragma once
#include "unitysdk.h"

namespace MXUnderCover::Animation { class UCPlayerAnimations; }
namespace MXUnderCover { class UCEntity; }

#define ANIMATIONCHANGESTATETRIGGEREDPLAYER_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD99410)
#define ANIMATIONCHANGESTATETRIGGEREDPLAYER_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD99420)
#define ANIMATIONCHANGESTATETRIGGEREDPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD994D0)

	inline static constexpr unsigned int AnimationChangeStateTriggeredPlayer_TypeDefinitionIndex = 9790;

	class AnimationChangeStateTriggeredPlayer : public Il2CppObject
	{
	public:
		::MXUnderCover::Animation::UCPlayerAnimations* state; // 0x28

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATETRIGGEREDPLAYER_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATETRIGGEREDPLAYER_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATETRIGGEREDPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};

