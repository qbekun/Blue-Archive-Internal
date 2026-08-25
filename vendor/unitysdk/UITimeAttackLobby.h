#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class UITimeAttackLobby_Detail;
class UITimeAttackLobby_DetailBottom;
namespace UnityEngine { class GameObject; }
namespace FlatData { class TimeAttackDungeonType; }
namespace UnityEngine { class Coroutine; }
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }

#define UITIMEATTACKLOBBY_GET_SELECTEDSLOT_OFFSET UNITYSDK_OFFSET(0xB63930)
#define UITIMEATTACKLOBBY_SET_SELECTEDTYPE_OFFSET UNITYSDK_OFFSET(0xB63940)
#define UITIMEATTACKLOBBY__ONGIVEUP_B__35_0_OFFSET UNITYSDK_OFFSET(0xB63950)
#define UITIMEATTACKLOBBY_GET_FOCUSANINAME_OFFSET UNITYSDK_OFFSET(0xB640C0)
#define UITIMEATTACKLOBBY_SET_SELECTEDSLOT_OFFSET UNITYSDK_OFFSET(0xB64120)
#define UITIMEATTACKLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB64130)
#define UITIMEATTACKLOBBY_PLAYANI_OFFSET UNITYSDK_OFFSET(0xB643E0)
#define UITIMEATTACKLOBBY_PLAYSTARTANI_OFFSET UNITYSDK_OFFSET(0xB64450)
#define UITIMEATTACKLOBBY_OPENEDROOMTIMER_OFFSET UNITYSDK_OFFSET(0xB644F0)
#define UITIMEATTACKLOBBY_GET_CHANGEANINAME_OFFSET UNITYSDK_OFFSET(0xB64570)
#define UITIMEATTACKLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xB645D0)
#define UITIMEATTACKLOBBY_SHOWRESULT_OFFSET UNITYSDK_OFFSET(0xB64720)
#define UITIMEATTACKLOBBY_PLAYSELECTANIMATIONS_OFFSET UNITYSDK_OFFSET(0xB642F0)
#define UITIMEATTACKLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB64870)
#define UITIMEATTACKLOBBY_STARTOPENEDROOMTIMER_OFFSET UNITYSDK_OFFSET(0xB64900)
#define UITIMEATTACKLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB649A0)
#define UITIMEATTACKLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0xB64AD0)
#define UITIMEATTACKLOBBY_ONCREATEROOM_OFFSET UNITYSDK_OFFSET(0xB64AE0)
#define UITIMEATTACKLOBBY_ONGIVEUP_OFFSET UNITYSDK_OFFSET(0xB64C70)
#define UITIMEATTACKLOBBY_GET_SELECTEDTYPE_OFFSET UNITYSDK_OFFSET(0xB64E10)
#define UITIMEATTACKLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0xB64E20)
#define UITIMEATTACKLOBBY_SETLOCATIONANDLISTOBJECTS_OFFSET UNITYSDK_OFFSET(0xB64EC0)
#define UITIMEATTACKLOBBY__ONOPENED_G__AFTERSCENARIO|37_0_OFFSET UNITYSDK_OFFSET(0xB64F10)
#define UITIMEATTACKLOBBY_OPENTUTORIALCHECK_OFFSET UNITYSDK_OFFSET(0xB65030)
#define UITIMEATTACKLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB65110)
#define UITIMEATTACKLOBBY__ONCREATEROOM_B__34_0_OFFSET UNITYSDK_OFFSET(0xB65130)
#define UITIMEATTACKLOBBY__DESELECTTYPE_B__28_0_OFFSET UNITYSDK_OFFSET(0xB65390)
#define UITIMEATTACKLOBBY_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0xB653A0)
#define UITIMEATTACKLOBBY__ONOPENED_G__YIELDSETDETAIL|37_1_OFFSET UNITYSDK_OFFSET(0xB64370)
#define UITIMEATTACKLOBBY_DESELECTTYPE_OFFSET UNITYSDK_OFFSET(0xB655B0)

	inline static constexpr unsigned int UITimeAttackLobby_TypeDefinitionIndex = 8436;

	class UITimeAttackLobby : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* slotFocusAnimation; // 0xD8
		::System::String* _SlotFocusAniPrefix; // 0xE0
		::UnityEngine::Animation* slotSelectAnimation; // 0xE8
		::System::String* _SlotSelectShowUIAniName; // 0xF0
		::System::String* _SlotSelectToStartAniName; // 0xF8
		::UnityEngine::Animation* startBannerAnimation; // 0x100
		MXButton* deselectSlotButton; // 0x108
		UITimeAttackLobby_Detail* detail; // 0x110
		UITimeAttackLobby_DetailBottom* detailbottom; // 0x118
		::UnityEngine::GameObject* locationObject; // 0x120
		::UnityEngine::GameObject* listObject; // 0x128
		::System::Int32 _SelectedSlot_k__BackingField; // 0x130
		::FlatData::TimeAttackDungeonType* _SelectedType_k__BackingField; // 0x134
		::UnityEngine::Coroutine* _OpenedRoomTimer; // 0x138

		::System::Int32 get_SelectedSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_GET_SELECTEDSLOT_OFFSET))(nullptr);
		}

		::System::Void set_SelectedType(::FlatData::TimeAttackDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::TimeAttackDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_SET_SELECTEDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnGiveUp_b__35_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY__ONGIVEUP_B__35_0_OFFSET))(nullptr);
		}

		::System::String* get_FocusAniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_GET_FOCUSANINAME_OFFSET))(nullptr);
		}

		::System::Void set_SelectedSlot(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_SET_SELECTEDSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAni(::UnityEngine::Animation* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_PLAYANI_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayStartAni(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_PLAYSTARTANI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* OpenedRoomTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_OPENEDROOMTIMER_OFFSET))(nullptr);
		}

		::System::String* get_ChangeAniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_GET_CHANGEANINAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void ShowResult(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_SHOWRESULT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlaySelectAnimations(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_PLAYSELECTANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void StartOpenedRoomTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_STARTOPENEDROOMTIMER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void OnCreateRoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_ONCREATEROOM_OFFSET))(nullptr);
		}

		::System::Void OnGiveUp(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_ONGIVEUP_OFFSET))(arg, nullptr);
		}

		::FlatData::TimeAttackDungeonType* get_SelectedType()
		{
			return ((::FlatData::TimeAttackDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_GET_SELECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetLocationAndListObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_SETLOCATIONANDLISTOBJECTS_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_g__AfterScenario|37_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY__ONOPENED_G__AFTERSCENARIO|37_0_OFFSET))(nullptr);
		}

		::System::Void OpenTutorialCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_OPENTUTORIALCHECK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _OnCreateRoom_b__34_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY__ONCREATEROOM_B__34_0_OFFSET))(nullptr);
		}

		::System::Void _DeselectType_b__28_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY__DESELECTTYPE_B__28_0_OFFSET))(nullptr);
		}

		::System::Void SelectType(::System::Int32 arg, ::FlatData::TimeAttackDungeonType* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::TimeAttackDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_SELECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* _OnOpened_g__YieldSetDetail|37_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY__ONOPENED_G__YIELDSETDETAIL|37_1_OFFSET))(nullptr);
		}

		::System::Void DeselectType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DESELECTTYPE_OFFSET))(nullptr);
		}

	};

