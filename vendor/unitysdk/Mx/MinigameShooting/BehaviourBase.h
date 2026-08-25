#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterStateMachine; }
namespace FlatData { class AniStateData; }
namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class CharacterAnimationController; }
namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class BlackBoard; }
namespace MX::MinigameShooting { class AnimatorState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x145C6D0)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_ANIMATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x145C6F0)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONUPDATEEXCLUDEFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x145C720)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_MACHINE_OFFSET UNITYSDK_OFFSET(0x145C730)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x145C740)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_SET_MACHINE_OFFSET UNITYSDK_OFFSET(0x145C8B0)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x145C8C0)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x145C8D0)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x145C8E0)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x145C910)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x145C930)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x145C960)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x145C990)
#define MX_MINIGAMESHOOTING_BEHAVIOURBASE_USESHOTEVENTS_OFFSET UNITYSDK_OFFSET(0x145C9A0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourBase_TypeDefinitionIndex = 15044;

	class BehaviourBase : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::CharacterStateMachine* _Machine_k__BackingField; // 0x10
		::System::Boolean firstFrame; // 0x18
		::System::Single timer; // 0x1C
		::System::Single length; // 0x20
		Il2CppObject* shotEventTime; // 0x28
		::FlatData::AniStateData* stateData; // 0x30
		::System::Boolean hasParam; // 0x40

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_CHARACTER_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::CharacterAnimationController* get_AnimationController()
		{
			return ((::MX::MinigameShooting::CharacterAnimationController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_ANIMATIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnUpdateExcludeFirstFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONUPDATEEXCLUDEFIRSTFRAME_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::CharacterStateMachine* get_Machine()
		{
			return ((::MX::MinigameShooting::CharacterStateMachine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_MACHINE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_Machine(::MX::MinigameShooting::CharacterStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_SET_MACHINE_OFFSET))(arg, nullptr);
		}

		::System::Void OnLateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONLATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnFixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONFIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONENTER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::BlackBoard* get_BlackBoard()
		{
			return ((::MX::MinigameShooting::BlackBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_GET_BLACKBOARD_OFFSET))(nullptr);
		}

		::System::Void ChangeState(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::CharacterStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnExit(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_ONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void UseShotEvents(::MX::MinigameShooting::AnimatorState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::AnimatorState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURBASE_USESHOTEVENTS_OFFSET))(arg, nullptr);
		}

	};
}

