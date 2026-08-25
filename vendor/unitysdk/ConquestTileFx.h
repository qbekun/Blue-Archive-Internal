#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define CONQUESTTILEFX_PLAYCOMMON_OFFSET UNITYSDK_OFFSET(0x1BDCFE0)
#define CONQUESTTILEFX_PLAYOCCUPYUPGRADE_OFFSET UNITYSDK_OFFSET(0x1BDD650)
#define CONQUESTTILEFX_PLAYEROSIONSTART_OFFSET UNITYSDK_OFFSET(0x1BDF870)
#define CONQUESTTILEFX_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB580)
#define CONQUESTTILEFX_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1BDCB60)
#define CONQUESTTILEFX_SETEROSIONSTATE_OFFSET UNITYSDK_OFFSET(0x1BEB5A0)
#define CONQUESTTILEFX_PLAYOCCUPYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BDD0D0)
#define CONQUESTTILEFX_PLAYSPECIAL_OFFSET UNITYSDK_OFFSET(0x1BDDC10)
#define CONQUESTTILEFX_PLAYEROSIONEND_OFFSET UNITYSDK_OFFSET(0x1BE1190)
#define CONQUESTTILEFX_PLAYBOSSAPPEAR_OFFSET UNITYSDK_OFFSET(0x1BDDD00)
#define CONQUESTTILEFX_PLAYFX_OFFSET UNITYSDK_OFFSET(0x1BEB4E0)

	inline static constexpr unsigned int ConquestTileFx_TypeDefinitionIndex = 1543;

	class ConquestTileFx : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* bossAppear; // 0x18
		::UnityEngine::ParticleSystem* common; // 0x20
		::UnityEngine::ParticleSystem* occupyComplete; // 0x28
		::UnityEngine::ParticleSystem* occupyUpgrade; // 0x30
		::UnityEngine::ParticleSystem* occupyUpgradeLv2; // 0x38
		::UnityEngine::ParticleSystem* occupyUpgradeLv3; // 0x40
		::UnityEngine::ParticleSystem* special; // 0x48
		::UnityEngine::ParticleSystem* erosionStart; // 0x50
		::UnityEngine::ParticleSystem* erosionPlaying; // 0x58
		::UnityEngine::ParticleSystem* erosionEnd; // 0x60
		::System::Single DelayAfterCommonFx; // 0x68
		::System::Single DelayAfterSpecialFx; // 0x6C
		::System::Single OverlapAtErosionStart; // 0x70
		::System::Int32 playingFxCount; // 0x74

		::System::Void PlayCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYCOMMON_OFFSET))(nullptr);
		}

		::System::Void PlayOccupyUpgrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYOCCUPYUPGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayErosionStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYEROSIONSTART_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void SetErosionState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_SETEROSIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOccupyComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYOCCUPYCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void PlaySpecial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYSPECIAL_OFFSET))(nullptr);
		}

		::System::Void PlayErosionEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYEROSIONEND_OFFSET))(nullptr);
		}

		::System::Void PlayBossAppear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYBOSSAPPEAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayFx(::UnityEngine::ParticleSystem* arg, ::System::Single arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::ParticleSystem*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEFX_PLAYFX_OFFSET))(arg, arg2, nullptr);
		}

	};

