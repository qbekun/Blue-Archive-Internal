#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class CharacterAnimationController;
namespace MX::Audio { class EntityAudioController; }

#define ENTITYVISUAL_START_OFFSET UNITYSDK_OFFSET(0x15A08A0)
#define ENTITYVISUAL_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15A0A50)
#define ENTITYVISUAL_GET_AUDIOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15A0A60)
#define ENTITYVISUAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15A0AC0)
#define ENTITYVISUAL_SET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15A0B20)
#define ENTITYVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A0B30)
#define ENTITYVISUAL_SET_ANIMATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15A0DB0)
#define ENTITYVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A0DC0)
#define ENTITYVISUAL_INITIALIZEAUDIOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15A0E30)
#define ENTITYVISUAL_GET_ANIMATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15A0FC0)

	inline static constexpr unsigned int EntityVisual_TypeDefinitionIndex = 1079;

	class EntityVisual : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Floater; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* BattleEntity; // 0x20
		Il2CppObject* audioContainer; // 0x28
		::UnityEngine::Transform* _MyTransform_k__BackingField; // 0x38
		CharacterAnimationController* _AnimationController_k__BackingField; // 0x40
		Il2CppObject* freezeParticleSystems; // 0x48

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_START_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::MX::Audio::EntityAudioController* get_AudioController()
		{
			return ((::MX::Audio::EntityAudioController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_GET_AUDIOCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_MyTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_SET_MYTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_AnimationController(CharacterAnimationController* arg)
		{
			((::System::Void(*)(CharacterAnimationController*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_SET_ANIMATIONCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeAudioController(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_INITIALIZEAUDIOCONTROLLER_OFFSET))(arg, nullptr);
		}

		CharacterAnimationController* get_AnimationController()
		{
			return ((CharacterAnimationController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUAL_GET_ANIMATIONCONTROLLER_OFFSET))(nullptr);
		}

	};

