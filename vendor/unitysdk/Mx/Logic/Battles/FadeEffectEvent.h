#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define MX_LOGIC_BATTLES_FADEEFFECTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1275550)
#define MX_LOGIC_BATTLES_FADEEFFECTEVENT_DOEVENT_OFFSET UNITYSDK_OFFSET(0x1275590)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int FadeEffectEvent_TypeDefinitionIndex = 14068;

	class FadeEffectEvent : public Il2CppObject
	{
	public:
		::System::Single BlockDistance; // 0x10
		::System::Single LogicFanRadius; // 0x14

		::System::Void .ctor(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_FADEEFFECTEVENT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DoEvent(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_FADEEFFECTEVENT_DOEVENT_OFFSET))(arg, nullptr);
		}

	};
}

