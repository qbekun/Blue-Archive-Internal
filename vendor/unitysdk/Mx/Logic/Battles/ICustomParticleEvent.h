#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define MX_LOGIC_BATTLES_ICUSTOMPARTICLEEVENT_DOEVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ICustomParticleEvent_TypeDefinitionIndex = 14067;

	class ICustomParticleEvent : public Il2CppObject
	{
	public:
		::System::Void DoEvent(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ICUSTOMPARTICLEEVENT_DOEVENT_OFFSET))(arg, nullptr);
		}

	};
}

