#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCPropAniController; }
namespace MXUnderCover::Animation { class UCPropAnimations; }
namespace MXUnderCover { class UCEntity; }

#define ANIMATIONCHANGESTATEPROP_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD99170)
#define ANIMATIONCHANGESTATEPROP_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD99200)
#define ANIMATIONCHANGESTATEPROP_.CTOR_OFFSET UNITYSDK_OFFSET(0xD99210)

	inline static constexpr unsigned int AnimationChangeStateProp_TypeDefinitionIndex = 9788;

	class AnimationChangeStateProp : public Il2CppObject
	{
	public:
		::MXUnderCover::UCPropAniController* prop; // 0x28
		::MXUnderCover::Animation::UCPropAnimations* state; // 0x30

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATEPROP_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATEPROP_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATEPROP_.CTOR_OFFSET))(nullptr);
		}

	};

