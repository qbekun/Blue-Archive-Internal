#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UIFormationInfo;
namespace UnityEngine { class Transform; }
class UIEchelonInfo;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
class CharacterEchelon;
namespace UnityEngine { class Vector3; }
class TeamPosition;

#define TEAMPOSITION_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x24D42E0)
#define TEAMPOSITION_GET_GOALSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x24E5670)
#define TEAMPOSITION_SET_GOALSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x24E5680)
#define TEAMPOSITION_GET_CURRENTVISIBLECHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x24E5690)
#define TEAMPOSITION_SET_CURRENTVISIBLECHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x24E56A0)
#define TEAMPOSITION_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x24E56B0)
#define TEAMPOSITION_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x24E56C0)
#define TEAMPOSITION_GET_ADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x24E56D0)
#define TEAMPOSITION_GET_MULLIGANINDEX_OFFSET UNITYSDK_OFFSET(0x24E5830)
#define TEAMPOSITION_SET_MULLIGANINDEX_OFFSET UNITYSDK_OFFSET(0x24E5840)
#define TEAMPOSITION_GET_HANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x24E5850)
#define TEAMPOSITION_AWAKE_OFFSET UNITYSDK_OFFSET(0x24E5980)
#define TEAMPOSITION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24E5D60)
#define TEAMPOSITION_INITUI_OFFSET UNITYSDK_OFFSET(0x24E5D80)
#define TEAMPOSITION_SETSTYLEPREFABIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x24E5D70)
#define TEAMPOSITION_SETSTYLEPREFABIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x24E5E90)
#define TEAMPOSITION_SETGOALSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x24D4B20)
#define TEAMPOSITION_PICKUPRESERVE_OFFSET UNITYSDK_OFFSET(0x24D48B0)
#define TEAMPOSITION_CHECKNEEDCHANGESTYLE_OFFSET UNITYSDK_OFFSET(0x24D5780)
#define TEAMPOSITION_TRYSHOWNEXTSTYLECHARACTER_OFFSET UNITYSDK_OFFSET(0x24D5EF0)
#define TEAMPOSITION_CLEARCHARACTER_OFFSET UNITYSDK_OFFSET(0x24E6000)
#define TEAMPOSITION_ONOPENUIEDITTEAM_OFFSET UNITYSDK_OFFSET(0x24E6760)
#define TEAMPOSITION_CHANGECHARACTER_OFFSET UNITYSDK_OFFSET(0x24D2EC0)
#define TEAMPOSITION_SETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24E6900)
#define TEAMPOSITION_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x24E6AC0)
#define TEAMPOSITION_SETMULLIGANMARK_OFFSET UNITYSDK_OFFSET(0x24E69D0)
#define TEAMPOSITION_ACTIVEBUFFONOBJECT_OFFSET UNITYSDK_OFFSET(0x24E77F0)
#define TEAMPOSITION_SETACTIVEBUFFONOBJECT_OFFSET UNITYSDK_OFFSET(0x24E7870)
#define TEAMPOSITION_REFRESHTAG_OFFSET UNITYSDK_OFFSET(0x24E7AA0)
#define TEAMPOSITION_REFRESHLEADER_OFFSET UNITYSDK_OFFSET(0x24E7640)
#define TEAMPOSITION_REFRESHEMPTY_OFFSET UNITYSDK_OFFSET(0x24D3220)
#define TEAMPOSITION_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0x24E8290)
#define TEAMPOSITION_ONCLICKATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x24E8450)
#define TEAMPOSITION_ONCLICKARMORTYPE_OFFSET UNITYSDK_OFFSET(0x24E8570)
#define TEAMPOSITION_STOPTAGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x24E6580)
#define TEAMPOSITION_PLAYTSSINTERACTIONBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x24E8690)
#define TEAMPOSITION_PLAYTSSINTERACTIONBYSERVERID_OFFSET UNITYSDK_OFFSET(0x24E8740)
#define TEAMPOSITION_PLAYTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0x24E6650)
#define TEAMPOSITION_UPDATE_OFFSET UNITYSDK_OFFSET(0x24E87F0)
#define TEAMPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E8970)
#define TEAMPOSITION__ONCLICKATTACKTYPE_G__TAGCOROUTINE|63_0_OFFSET UNITYSDK_OFFSET(0x24E8500)
#define TEAMPOSITION__ONCLICKARMORTYPE_G__TAGCOROUTINE|64_0_OFFSET UNITYSDK_OFFSET(0x24E8620)

	inline static constexpr unsigned int TeamPosition_TypeDefinitionIndex = 6019;

	class TeamPosition : public Il2CppObject
	{
	public:
		Il2CppObject* characterList; // 0x18
		::System::Int32 _GoalStyleIndex_k__BackingField; // 0x20
		::System::Int32 _CurrentVisibleCharacterIndex_k__BackingField; // 0x24
		::UnityEngine::GameObject* UsingSprite; // 0x28
		::UnityEngine::GameObject* ReadySprite; // 0x30
		::UnityEngine::GameObject* BlackListSprite; // 0x38
		::UnityEngine::GameObject* BuffOnObject; // 0x40
		MXButton* AttackTypeButton; // 0x48
		MXButton* ArmorTypeButton; // 0x50
		::UnityEngine::GameObject* AttackTypeTag; // 0x58
		::UnityEngine::GameObject* ArmorTypeTag; // 0x60
		UIFormationInfo* UIFormationInfo; // 0x68
		MXButton* Empty; // 0x70
		::UnityEngine::GameObject* PositionDecorationObject; // 0x78
		::UnityEngine::Transform* CharacterPos; // 0x80
		::System::Collections::IEnumerator* tagCoroutine; // 0x88
		UIEchelonInfo* uiEchelonInfo; // 0x90
		::System::Int32 _SlotIndex_k__BackingField; // 0x98
		::UnityEngine::GameObject* MulliganMark; // 0xA0
		::UnityEngine::GameObject* MulliganMark_Sub; // 0xA8
		::System::Int32 _MulliganIndex_k__BackingField; // 0xB0
		::UnityEngine::Animation* tacticRoleAnimation; // 0xB8
		::UnityEngine::AnimationClip* tacticRoleAnimationClip; // 0xC0
		Il2CppObject* _handSlotCount; // 0xC8

		CharacterEchelon* get_Character()
		{
			return ((CharacterEchelon*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Int32 get_GoalStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_GET_GOALSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_GoalStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SET_GOALSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentVisibleCharacterIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_GET_CURRENTVISIBLECHARACTERINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CurrentVisibleCharacterIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SET_CURRENTVISIBLECHARACTERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_AddressKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_GET_ADDRESSKEY_OFFSET))(nullptr);
		}

		::System::Int32 get_MulliganIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_GET_MULLIGANINDEX_OFFSET))(nullptr);
		}

		::System::Void set_MulliganIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SET_MULLIGANINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HandSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_GET_HANDSLOTCOUNT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitUI(UIEchelonInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIEchelonInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_INITUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStylePrefabImmediately()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SETSTYLEPREFABIMMEDIATELY_OFFSET))(nullptr);
		}

		::System::Void SetStylePrefabImmediately(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SETSTYLEPREFABIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void SetGoalStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SETGOALSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void PickupReserve(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_PICKUPRESERVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckNeedChangeStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_CHECKNEEDCHANGESTYLE_OFFSET))(nullptr);
		}

		::System::Void TryShowNextStyleCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_TRYSHOWNEXTSTYLECHARACTER_OFFSET))(nullptr);
		}

		::System::Void ClearCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_CLEARCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpenUIEditTeam()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_ONOPENUIEDITTEAM_OFFSET))(nullptr);
		}

		::System::Void ChangeCharacter(TeamPosition* arg)
		{
			((::System::Void(*)(TeamPosition*, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_CHANGECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SETCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacter(CharacterEchelon* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(CharacterEchelon*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SETCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMulliganMark(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SETMULLIGANMARK_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveBuffOnObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_ACTIVEBUFFONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveBuffOnObject(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_SETACTIVEBUFFONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_REFRESHTAG_OFFSET))(nullptr);
		}

		::System::Void RefreshLeader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_REFRESHLEADER_OFFSET))(nullptr);
		}

		::System::Void RefreshEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_REFRESHEMPTY_OFFSET))(nullptr);
		}

		::System::Void OnClickEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_ONCLICKEMPTY_OFFSET))(nullptr);
		}

		::System::Void OnClickAttackType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_ONCLICKATTACKTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickArmorType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_ONCLICKARMORTYPE_OFFSET))(nullptr);
		}

		::System::Void StopTagCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_STOPTAGCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void PlayTSSInteractionByUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_PLAYTSSINTERACTIONBYUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTSSInteractionByServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_PLAYTSSINTERACTIONBYSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTSSInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_PLAYTSSINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickAttackType_g__TagCoroutine|63_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION__ONCLICKATTACKTYPE_G__TAGCOROUTINE|63_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickArmorType_g__TagCoroutine|64_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEAMPOSITION__ONCLICKARMORTYPE_G__TAGCOROUTINE|64_0_OFFSET))(nullptr);
		}

	};

