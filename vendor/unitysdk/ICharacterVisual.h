#pragma once
#include "unitysdk.h"

class CharacterAnimationController;
namespace MX::Audio { class EntityAudioController; }
class ICharacter;
namespace UnityEngine { class Transform; }

#define ICHARACTERVISUAL_GET_HASHIDECHARACTERLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTERVISUAL_GET_ANIMATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTERVISUAL_GET_AUDIOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTERVISUAL_GET_ICHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTERVISUAL_SET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTERVISUAL_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ICharacterVisual_TypeDefinitionIndex = 1023;

	class ICharacterVisual : public Il2CppObject
	{
	public:
		::System::Boolean get_HasHideCharacterLogicEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERVISUAL_GET_HASHIDECHARACTERLOGICEFFECT_OFFSET))(nullptr);
		}

		CharacterAnimationController* get_AnimationController()
		{
			return ((CharacterAnimationController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERVISUAL_GET_ANIMATIONCONTROLLER_OFFSET))(nullptr);
		}

		::MX::Audio::EntityAudioController* get_AudioController()
		{
			return ((::MX::Audio::EntityAudioController*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERVISUAL_GET_AUDIOCONTROLLER_OFFSET))(nullptr);
		}

		ICharacter* get_ICharacter()
		{
			return ((ICharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERVISUAL_GET_ICHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_MyTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERVISUAL_SET_MYTRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERVISUAL_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

	};

