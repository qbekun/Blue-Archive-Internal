#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::Visual { class CCGUnitHealthDisplay; }
class CCGHealthEffectIndicator;
namespace UnityEngine { class GameObject; }
namespace MX::Audio { class AnimationAudioEvent; }
namespace MX::MinigameCCG { class CCGStriker; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class ParticleSystem; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG { class CCGEntity; }

#define CCGVISUALSTRIKER_KILLSTRIKER_OFFSET UNITYSDK_OFFSET(0x26EA490)
#define CCGVISUALSTRIKER_ONPLAYHEALEFFECT_OFFSET UNITYSDK_OFFSET(0x26EA4E0)
#define CCGVISUALSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26EA580)
#define CCGVISUALSTRIKER_ACTIVEEXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x26E3800)
#define CCGVISUALSTRIKER_GET_ISPLAYINGHEALTHEFFECTINDICATOR_OFFSET UNITYSDK_OFFSET(0x26EA600)
#define CCGVISUALSTRIKER_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x26EA650)
#define CCGVISUALSTRIKER_ONPLAYDAMAGEEFFECT_OFFSET UNITYSDK_OFFSET(0x26EA660)
#define CCGVISUALSTRIKER_PLAYONESHOTSETFRONTAUDIO_OFFSET UNITYSDK_OFFSET(0x26EA700)
#define CCGVISUALSTRIKER_SELECTCHARACTER_OFFSET UNITYSDK_OFFSET(0x26EA730)
#define CCGVISUALSTRIKER_GET_SHIELDEFFECT_OFFSET UNITYSDK_OFFSET(0x26EA830)
#define CCGVISUALSTRIKER_GET_FRONTPOS_OFFSET UNITYSDK_OFFSET(0x26EA840)
#define CCGVISUALSTRIKER_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x26EA900)
#define CCGVISUALSTRIKER_GET_ORIGNPOS_OFFSET UNITYSDK_OFFSET(0x26EAEA0)
#define CCGVISUALSTRIKER_START_OFFSET UNITYSDK_OFFSET(0x26EAEC0)
#define CCGVISUALSTRIKER_REFRESH_OFFSET UNITYSDK_OFFSET(0x26EAFB0)
#define CCGVISUALSTRIKER_SET_SHIELDEFFECT_OFFSET UNITYSDK_OFFSET(0x26EB1E0)
#define CCGVISUALSTRIKER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26EB200)
#define CCGVISUALSTRIKER_SETFRONT_OFFSET UNITYSDK_OFFSET(0x26EA9D0)
#define CCGVISUALSTRIKER_TRYUSEENTITY_OFFSET UNITYSDK_OFFSET(0x26EB510)

	inline static constexpr unsigned int CCGVisualStriker_TypeDefinitionIndex = 410;

	class CCGVisualStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Visual::CCGUnitHealthDisplay* unitHealthDisplay; // 0x90
		CCGHealthEffectIndicator* healthEffectIndicator; // 0x98
		::UnityEngine::GameObject* blank; // 0xA0
		Il2CppObject* equipmentIcons; // 0xA8
		::MX::Audio::AnimationAudioEvent* changeAudioEvent; // 0xB0
		::MX::MinigameCCG::CCGStriker* character; // 0xB8
		::UnityEngine::Vector3* orignPos; // 0xC0
		::UnityEngine::Quaternion* orignRotation; // 0xCC
		::UnityEngine::ParticleSystem* _ShieldEffect_k__BackingField; // 0xE0

		::System::Void KillStriker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_KILLSTRIKER_OFFSET))(nullptr);
		}

		::System::Void OnPlayHealEffect(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_ONPLAYHEALEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ActiveExpectedValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_ACTIVEEXPECTEDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayingHealthEffectIndicator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_GET_ISPLAYINGHEALTHEFFECTINDICATOR_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGStriker* get_Character()
		{
			return ((::MX::MinigameCCG::CCGStriker*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void OnPlayDamageEffect(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_ONPLAYDAMAGEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOneShotSetFrontAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_PLAYONESHOTSETFRONTAUDIO_OFFSET))(nullptr);
		}

		::System::Boolean SelectCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_SELECTCHARACTER_OFFSET))(nullptr);
		}

		::UnityEngine::ParticleSystem* get_ShieldEffect()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_GET_SHIELDEFFECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_FrontPos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_GET_FRONTPOS_OFFSET))(nullptr);
		}

		::System::Void OnClickEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_OrignPos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_GET_ORIGNPOS_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_START_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MX::MinigameCCG::EventHealthChange* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShieldEffect(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_SET_SHIELDEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetFront()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_SETFRONT_OFFSET))(nullptr);
		}

		::System::Boolean TryUseEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSTRIKER_TRYUSEENTITY_OFFSET))(nullptr);
		}

	};

