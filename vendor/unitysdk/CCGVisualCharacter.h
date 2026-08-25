#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class AnimationCurve; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG { class CCGCharacter; }
namespace UnityEngine { class AnimationState; }

#define CCGVISUALCHARACTER_GET_ISGROUNDPOSITION_OFFSET UNITYSDK_OFFSET(0x26E8080)
#define CCGVISUALCHARACTER_SELECTCHARACTER_OFFSET UNITYSDK_OFFSET(0x26E8090)
#define CCGVISUALCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E8720)
#define CCGVISUALCHARACTER_GET_EXSKILLROTATIONCURVE_OFFSET UNITYSDK_OFFSET(0x26E87A0)
#define CCGVISUALCHARACTER_REFRESH_OFFSET UNITYSDK_OFFSET(0x26E87B0)
#define CCGVISUALCHARACTER_GET_ISUSER_OFFSET UNITYSDK_OFFSET(0x26E87C0)
#define CCGVISUALCHARACTER_START_OFFSET UNITYSDK_OFFSET(0x26E8810)
#define CCGVISUALCHARACTER_GET_ISPLAYINGHITANIMATION_OFFSET UNITYSDK_OFFSET(0x26E8A10)
#define CCGVISUALCHARACTER_TRYUSEENTITY_OFFSET UNITYSDK_OFFSET(0x26E8A90)
#define CCGVISUALCHARACTER_CANUSEENTITY_OFFSET UNITYSDK_OFFSET(0x26E8C00)
#define CCGVISUALCHARACTER_PLAYSKILLANIMATIONYIELD_OFFSET UNITYSDK_OFFSET(0x26E8E80)
#define CCGVISUALCHARACTER_SKILLSAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x26E8F30)
#define CCGVISUALCHARACTER_ISPLAYINGSKILLANIMATION_OFFSET UNITYSDK_OFFSET(0x26E8FB0)
#define CCGVISUALCHARACTER_SETACTIVESELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x26E6180)
#define CCGVISUALCHARACTER_SET_ISGROUNDPOSITION_OFFSET UNITYSDK_OFFSET(0x26E8FF0)
#define CCGVISUALCHARACTER_PLAYSKILLANIMATION_OFFSET UNITYSDK_OFFSET(0x26E9000)
#define CCGVISUALCHARACTER_SKILLANIMSTATE_OFFSET UNITYSDK_OFFSET(0x26E9080)
#define CCGVISUALCHARACTER_GETSKILLANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x26E90C0)
#define CCGVISUALCHARACTER_PLAYHITANIMATION_OFFSET UNITYSDK_OFFSET(0x26E9100)

	inline static constexpr unsigned int CCGVisualCharacter_TypeDefinitionIndex = 402;

	class CCGVisualCharacter : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0x68
		::UnityEngine::GameObject* selectedObject; // 0x70
		::UnityEngine::AnimationCurve* exSkillRotationCurve; // 0x78
		::System::String* clipBaseName; // 0x80
		::System::Boolean _IsGroundPosition_k__BackingField; // 0x88

		::System::Boolean get_IsGroundPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_GET_ISGROUNDPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean SelectCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_SELECTCHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationCurve* get_ExSkillRotationCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_GET_EXSKILLROTATIONCURVE_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MX::MinigameCCG::EventHealthChange* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isUser()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_GET_ISUSER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_START_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayingHitAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_GET_ISPLAYINGHITANIMATION_OFFSET))(nullptr);
		}

		::System::Boolean TryUseEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_TRYUSEENTITY_OFFSET))(nullptr);
		}

		::System::Boolean CanUseEntity(::MX::MinigameCCG::CCGCharacter* arg)
		{
			return ((::System::Boolean(*)(::MX::MinigameCCG::CCGCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_CANUSEENTITY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlaySkillAnimationYield(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_PLAYSKILLANIMATIONYIELD_OFFSET))(str, nullptr);
		}

		::System::Void SkillSampleAnimation(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_SKILLSAMPLEANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsPlayingSkillAnimation(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_ISPLAYINGSKILLANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void SetActiveSelectedObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_SETACTIVESELECTEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsGroundPosition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_SET_ISGROUNDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySkillAnimation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_PLAYSKILLANIMATION_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimationState* SkillAnimState(::System::String* str)
		{
			return ((::UnityEngine::AnimationState*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_SKILLANIMSTATE_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimationState* GetSkillAnimationState(::System::String* str)
		{
			return ((::UnityEngine::AnimationState*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_GETSKILLANIMATIONSTATE_OFFSET))(str, nullptr);
		}

		::System::Void PlayHitAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCHARACTER_PLAYHITANIMATION_OFFSET))(arg, nullptr);
		}

	};

