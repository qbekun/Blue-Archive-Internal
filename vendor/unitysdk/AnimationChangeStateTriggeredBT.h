#pragma once
#include "unitysdk.h"

namespace MXUnderCover::Animation { class UCNPCAnimations; }
namespace MXUnderCover { class UCEntity; }

#define ANIMATIONCHANGESTATETRIGGEREDBT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD99680)
#define ANIMATIONCHANGESTATETRIGGEREDBT_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD99690)
#define ANIMATIONCHANGESTATETRIGGEREDBT_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD99740)

	inline static constexpr unsigned int AnimationChangeStateTriggeredBT_TypeDefinitionIndex = 9792;

	class AnimationChangeStateTriggeredBT : public Il2CppObject
	{
	public:
		::MXUnderCover::Animation::UCNPCAnimations* state; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATETRIGGEREDBT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATETRIGGEREDBT_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCHANGESTATETRIGGEREDBT_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

