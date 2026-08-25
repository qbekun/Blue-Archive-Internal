#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define CONQUESTBOSSSHIELDFX_PLAYBOSSSHIELDBREAKFX_OFFSET UNITYSDK_OFFSET(0x1BDE3F0)
#define CONQUESTBOSSSHIELDFX_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA040)
#define CONQUESTBOSSSHIELDFX_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1BDDEA0)
#define CONQUESTBOSSSHIELDFX_SETBOSSSHIELDFX_OFFSET UNITYSDK_OFFSET(0x1BDB1A0)
#define CONQUESTBOSSSHIELDFX_PLAYFX_OFFSET UNITYSDK_OFFSET(0x1BE9FB0)

	inline static constexpr unsigned int ConquestBossShieldFx_TypeDefinitionIndex = 1537;

	class ConquestBossShieldFx : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* bossShieldFx; // 0x18
		::UnityEngine::ParticleSystem* bossShieldBreakFx; // 0x20
		::System::Single DelayBeforeShieldBreakFx; // 0x28
		::System::Int32 playingFxCount; // 0x2C

		::System::Void PlayBossShieldBreakFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTBOSSSHIELDFX_PLAYBOSSSHIELDBREAKFX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTBOSSSHIELDFX_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTBOSSSHIELDFX_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void SetBossShieldFx(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTBOSSSHIELDFX_SETBOSSSHIELDFX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayFx(::UnityEngine::ParticleSystem* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTBOSSSHIELDFX_PLAYFX_OFFSET))(arg, nullptr);
		}

	};

