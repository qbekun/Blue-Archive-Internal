#pragma once
#include "unitysdk.h"

class UIEchelonInfo;
namespace UnityEngine { class GameObject; }
class MXButton;
class UICharacterInfo;
class UISprite;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
class CharacterObject;

#define SUPPORTPOSITION_SETMULLIGAN_OFFSET UNITYSDK_OFFSET(0x24E3DB0)
#define SUPPORTPOSITION_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x24E3FD0)
#define SUPPORTPOSITION_SETACTIVEBUFFONOBJECT_OFFSET UNITYSDK_OFFSET(0x24E3FE0)
#define SUPPORTPOSITION_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x24E40F0)
#define SUPPORTPOSITION_SET_MULLIGANINDEX_OFFSET UNITYSDK_OFFSET(0x24E4390)
#define SUPPORTPOSITION_UPDATE_OFFSET UNITYSDK_OFFSET(0x24E43A0)
#define SUPPORTPOSITION_ONCLICKATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x24E4520)
#define SUPPORTPOSITION_STOPTAGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x24E4650)
#define SUPPORTPOSITION_GET_MULLIGANINDEX_OFFSET UNITYSDK_OFFSET(0x24E4720)
#define SUPPORTPOSITION_ONCLICKARMORTYPE_OFFSET UNITYSDK_OFFSET(0x24E4730)
#define SUPPORTPOSITION_INITUI_OFFSET UNITYSDK_OFFSET(0x24E4860)
#define SUPPORTPOSITION_PLAYTSSINTERACTIONBYSERVERID_OFFSET UNITYSDK_OFFSET(0x24E4890)
#define SUPPORTPOSITION__ONCLICKARMORTYPE_G__TAGCOROUTINE|40_0_OFFSET UNITYSDK_OFFSET(0x24E47F0)
#define SUPPORTPOSITION__ONCLICKATTACKTYPE_G__TAGCOROUTINE|39_0_OFFSET UNITYSDK_OFFSET(0x24E45E0)
#define SUPPORTPOSITION_GET_HANDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x24E3EA0)
#define SUPPORTPOSITION_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x24E4A80)
#define SUPPORTPOSITION_CLEARCHARACTER_OFFSET UNITYSDK_OFFSET(0x24E4A90)
#define SUPPORTPOSITION_REFRESHLEADER_OFFSET UNITYSDK_OFFSET(0x24E42F0)
#define SUPPORTPOSITION_ACTIVEBUFFONOBJECT_OFFSET UNITYSDK_OFFSET(0x24E4C30)
#define SUPPORTPOSITION_AWAKE_OFFSET UNITYSDK_OFFSET(0x24E4CB0)
#define SUPPORTPOSITION_REFRESHTAG_OFFSET UNITYSDK_OFFSET(0x24E4280)
#define SUPPORTPOSITION_ONCLICKEDIT_OFFSET UNITYSDK_OFFSET(0x24E51A0)
#define SUPPORTPOSITION_PLAYTSSINTERACTIONBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x24E52D0)
#define SUPPORTPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E5320)
#define SUPPORTPOSITION_PLAYTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0x24E4930)
#define SUPPORTPOSITION_ONLONGPRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x24E5340)

	inline static constexpr unsigned int SupportPosition_TypeDefinitionIndex = 6016;

	class SupportPosition : public Il2CppObject
	{
	public:
		::System::Int32 _SlotIndex_k__BackingField; // 0x18
		UIEchelonInfo* uiEchelonInfo; // 0x20
		::UnityEngine::GameObject* Empty; // 0x28
		::UnityEngine::GameObject* BuffOnObject; // 0x30
		MXButton* AttackTypeButton; // 0x38
		MXButton* ArmorTypeButton; // 0x40
		::UnityEngine::GameObject* AttackTypeTag; // 0x48
		::UnityEngine::GameObject* ArmorTypeTag; // 0x50
		UICharacterInfo* CharacterInfo; // 0x58
		::System::Boolean IsLeader; // 0x60
		UISprite* LeaderIcon; // 0x68
		UISprite* AssistIcon; // 0x70
		::System::Collections::IEnumerator* tagCoroutine; // 0x78
		MXButton* button; // 0x80
		::System::Int32 _MulliganIndex_k__BackingField; // 0x88
		::UnityEngine::GameObject* MulliganMark; // 0x90
		::UnityEngine::GameObject* MulliganMark_Sub; // 0x98
		::UnityEngine::Animation* tacticRoleAnimation; // 0xA0
		::UnityEngine::AnimationClip* tacticRoleAnimationClip; // 0xA8
		Il2CppObject* _handSlotCount; // 0xB0

		::System::Void SetMulligan(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_SETMULLIGAN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void SetActiveBuffOnObject(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_SETACTIVEBUFFONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_SETCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_MulliganIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_SET_MULLIGANINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClickAttackType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_ONCLICKATTACKTYPE_OFFSET))(nullptr);
		}

		::System::Void StopTagCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_STOPTAGCOROUTINE_OFFSET))(nullptr);
		}

		::System::Int32 get_MulliganIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_GET_MULLIGANINDEX_OFFSET))(nullptr);
		}

		::System::Void OnClickArmorType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_ONCLICKARMORTYPE_OFFSET))(nullptr);
		}

		::System::Void InitUI(UIEchelonInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIEchelonInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_INITUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayTSSInteractionByServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_PLAYTSSINTERACTIONBYSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnClickArmorType_g__TagCoroutine|40_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION__ONCLICKARMORTYPE_G__TAGCOROUTINE|40_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickAttackType_g__TagCoroutine|39_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION__ONCLICKATTACKTYPE_G__TAGCOROUTINE|39_0_OFFSET))(nullptr);
		}

		::System::Int32 get_HandSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_GET_HANDSLOTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_CLEARCHARACTER_OFFSET))(nullptr);
		}

		::System::Void RefreshLeader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_REFRESHLEADER_OFFSET))(nullptr);
		}

		::System::Void ActiveBuffOnObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_ACTIVEBUFFONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_REFRESHTAG_OFFSET))(nullptr);
		}

		::System::Void OnClickEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_ONCLICKEDIT_OFFSET))(nullptr);
		}

		::System::Void PlayTSSInteractionByUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_PLAYTSSINTERACTIONBYUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayTSSInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_PLAYTSSINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnLongPressButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTPOSITION_ONLONGPRESSBUTTON_OFFSET))(nullptr);
		}

	};

