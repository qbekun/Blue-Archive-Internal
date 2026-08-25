#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define TBGUNITFXVISUAL_PLAYRECOVER_OFFSET UNITYSDK_OFFSET(0x20947A0)
#define TBGUNITFXVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2094960)
#define TBGUNITFXVISUAL_PLAYFX_OFFSET UNITYSDK_OFFSET(0x20947B0)
#define TBGUNITFXVISUAL_COPLAYFX_OFFSET UNITYSDK_OFFSET(0x2094980)
#define TBGUNITFXVISUAL_PLAYDAMAGED_OFFSET UNITYSDK_OFFSET(0x2094A30)
#define TBGUNITFXVISUAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2094A40)
#define TBGUNITFXVISUAL_PLAYATTACK_OFFSET UNITYSDK_OFFSET(0x2094BC0)
#define TBGUNITFXVISUAL_PLAYSTUN_OFFSET UNITYSDK_OFFSET(0x208D980)
#define TBGUNITFXVISUAL_STOPSTUN_OFFSET UNITYSDK_OFFSET(0x2094BD0)
#define TBGUNITFXVISUAL_PLAYBLOCK_OFFSET UNITYSDK_OFFSET(0x2094C60)

	inline static constexpr unsigned int TBGUnitFxVisual_TypeDefinitionIndex = 3499;

	class TBGUnitFxVisual : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* Recover; // 0x18
		::UnityEngine::ParticleSystem* Attack; // 0x20
		::UnityEngine::ParticleSystem* Damaged; // 0x28
		::UnityEngine::ParticleSystem* Block; // 0x30
		::UnityEngine::ParticleSystem* Stun; // 0x38

		::System::Action* PlayRecover(::System::Action* arg)
		{
			return ((::System::Action*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_PLAYRECOVER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Action* PlayFx(::UnityEngine::ParticleSystem* arg, ::System::Action* arg2)
		{
			return ((::System::Action*(*)(::UnityEngine::ParticleSystem*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_PLAYFX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayFx(::UnityEngine::ParticleSystem* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::ParticleSystem*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_COPLAYFX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Action* PlayDamaged(::System::Action* arg)
		{
			return ((::System::Action*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_PLAYDAMAGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Action* PlayAttack(::System::Action* arg)
		{
			return ((::System::Action*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_PLAYATTACK_OFFSET))(arg, nullptr);
		}

		::System::Void PlayStun()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_PLAYSTUN_OFFSET))(nullptr);
		}

		::System::Void StopStun()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_STOPSTUN_OFFSET))(nullptr);
		}

		::System::Action* PlayBlock(::System::Action* arg)
		{
			return ((::System::Action*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITFXVISUAL_PLAYBLOCK_OFFSET))(arg, nullptr);
		}

	};

