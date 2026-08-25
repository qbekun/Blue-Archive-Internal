#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class BehaviourBase; }
namespace MX::MinigameShooting { class BlackBoard; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class SkillData; }

#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x145DC20)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x145DC30)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x145DC40)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x145DC50)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x145DC60)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x145DC70)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_CURBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x145DC80)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_CURBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x145DC90)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x145DCA0)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x145DD80)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x145DF20)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x145E060)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x145E090)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x145E0C0)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x145E0D0)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_LOOK_OFFSET UNITYSDK_OFFSET(0x145E160)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_FINDNEARESTCHARACTER_OFFSET UNITYSDK_OFFSET(0x145E300)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x145E6E0)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x145EA20)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETAVAILABLESKILL_OFFSET UNITYSDK_OFFSET(0x145EE90)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_CHANGEATTACKORPUBLIC_OFFSET UNITYSDK_OFFSET(0x145EEB0)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_CHECKANDCHANGEPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x145EEF0)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETAVAILABLESKILLDATA_OFFSET UNITYSDK_OFFSET(0x145EF40)
#define MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETCURRENTPUBLICSTATEINDEX_OFFSET UNITYSDK_OFFSET(0x145EFA0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterStateMachine_TypeDefinitionIndex = 15050;

	class CharacterStateMachine : public Il2CppObject
	{
	public:
		::System::Boolean _IsStopped_k__BackingField; // 0x10
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x18
		::MX::MinigameShooting::CharacterState* _CurState_k__BackingField; // 0x20
		::MX::MinigameShooting::BehaviourBase* _CurBehaviour_k__BackingField; // 0x28
		::MX::MinigameShooting::BlackBoard* BlackBoard; // 0x30
		Il2CppObject* Behaviours; // 0x38

		::System::Boolean get_IsStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_ISSTOPPED_OFFSET))(nullptr);
		}

		::System::Void set_IsStopped(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_ISSTOPPED_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::CharacterState* get_CurState()
		{
			return ((::MX::MinigameShooting::CharacterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_CURSTATE_OFFSET))(nullptr);
		}

		::System::Void set_CurState(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_CURSTATE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::BehaviourBase* get_CurBehaviour()
		{
			return ((::MX::MinigameShooting::BehaviourBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GET_CURBEHAVIOUR_OFFSET))(nullptr);
		}

		::System::Void set_CurBehaviour(::MX::MinigameShooting::BehaviourBase* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::BehaviourBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_SET_CURBEHAVIOUR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeState(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::Character* GetTarget()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETTARGET_OFFSET))(nullptr);
		}

		::System::Void LookAtTarget(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_LOOKATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void Look(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_LOOK_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* FindNearestCharacter(Il2CppObject* arg)
		{
			return ((::MX::MinigameShooting::Character*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_FINDNEARESTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBlocked(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::SkillData* arg2)
		{
			return ((::System::Boolean(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::SkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_ISBLOCKED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsBlocked(::MX::MinigameShooting::Character* arg, ::System::Single arg2, ::MX::MinigameShooting::SkillData* arg3)
		{
			return ((::System::Boolean(*)(::MX::MinigameShooting::Character*, ::System::Single, ::MX::MinigameShooting::SkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_ISBLOCKED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetAvailableSkill()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETAVAILABLESKILL_OFFSET))(nullptr);
		}

		::System::Boolean ChangeAttackOrPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_CHANGEATTACKORPUBLIC_OFFSET))(nullptr);
		}

		::System::Boolean CheckAndChangePublicSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_CHECKANDCHANGEPUBLICSKILL_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::SkillData* GetAvailableSkillData()
		{
			return ((::MX::MinigameShooting::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETAVAILABLESKILLDATA_OFFSET))(nullptr);
		}

		::System::Int32 GetCurrentPublicStateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTATEMACHINE_GETCURRENTPUBLICSTATEINDEX_OFFSET))(nullptr);
		}

	};
}

