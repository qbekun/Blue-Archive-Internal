#pragma once
#include "unitysdk.h"

namespace FlatData { class PotentialStatBonusRateType; }
class UILabel;
namespace UnityEngine { class GameObject; }
class WidgetsPositionSetter;
class UISprite;
class ButtonActivator;
namespace UnityEngine { class Coroutine; }

#define UIPOTENTIALBATCHMODESLOTDISPLAY_GET_ABSMAXPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x2725800)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ONCLICKPOSSIBLEMAXBUTTON_OFFSET UNITYSDK_OFFSET(0x2725980)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_GET_NEXTPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x27259A0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ONCLICKADDBUTTON_OFFSET UNITYSDK_OFFSET(0x27259B0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ONPRESSADDBUTTON_OFFSET UNITYSDK_OFFSET(0x27259D0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ONCLICKSUBBUTTON_OFFSET UNITYSDK_OFFSET(0x2725B10)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_GET_INITIALPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x2725B30)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_SETNEXTDATA_OFFSET UNITYSDK_OFFSET(0x2725B40)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_SETPOSSIBLEMAXBUTTONACTIVATION_OFFSET UNITYSDK_OFFSET(0x2725D40)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_REMOVE_ADDBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2725D60)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ADD_ADDBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2725E00)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_REMOVE_POSSIBLEMAXBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2725EA0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_SET_NEXTPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x2725F40)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_CO_PRESSSUBADDBUTTON_OFFSET UNITYSDK_OFFSET(0x2725A80)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_SET_INITIALPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x2725F70)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_REFRESHPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x2725BF0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ONPRESSSUBBUTTON_OFFSET UNITYSDK_OFFSET(0x2725F80)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_REFRESHSUBADDBUTTONACTIVATION_OFFSET UNITYSDK_OFFSET(0x2725CE0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ADD_SUBBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2726030)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x27260D0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x27260E0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_ADD_POSSIBLEMAXBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2726650)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_SETINITIALDATA_OFFSET UNITYSDK_OFFSET(0x27266F0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_REMOVE_SUBBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x27267A0)
#define UIPOTENTIALBATCHMODESLOTDISPLAY_GET_POTENTIALSTATTYPE_OFFSET UNITYSDK_OFFSET(0x2726840)

	inline static constexpr unsigned int UIPotentialBatchModeSlotDisplay_TypeDefinitionIndex = 7175;

	class UIPotentialBatchModeSlotDisplay : public Il2CppObject
	{
	public:
		::FlatData::PotentialStatBonusRateType* potentialStatType; // 0x18
		UILabel* potentialStatNameLabel; // 0x20
		UILabel* initialStatValueLabel; // 0x28
		::UnityEngine::GameObject* nextStatValueRoot; // 0x30
		UILabel* nextStatValueLabel; // 0x38
		WidgetsPositionSetter* potentialLevelPositionSetter; // 0x40
		UILabel* potentialLevelLabel; // 0x48
		UISprite* potentialLevelMaxTagSprite; // 0x50
		ButtonActivator* subButton; // 0x58
		ButtonActivator* addButton; // 0x60
		ButtonActivator* possibleMaxButton; // 0x68
		::UnityEngine::Coroutine* longPressCoroutine; // 0x70
		::System::Int32 _InitialPotentialLevel_k__BackingField; // 0x78
		::System::Int32 _NextPotentialLevel_k__BackingField; // 0x7C
		Il2CppObject* _absMaxPotentialLevel; // 0x80
		Il2CppObject* SubButtonClicked; // 0x88
		Il2CppObject* AddButtonClicked; // 0x90
		Il2CppObject* PossibleMaxButtonClicked; // 0x98

		::System::Int32 get_AbsMaxPotentialLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_GET_ABSMAXPOTENTIALLEVEL_OFFSET))(nullptr);
		}

		::System::Void OnClickPossibleMaxbutton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ONCLICKPOSSIBLEMAXBUTTON_OFFSET))(nullptr);
		}

		::System::Int32 get_NextPotentialLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_GET_NEXTPOTENTIALLEVEL_OFFSET))(nullptr);
		}

		::System::Void OnClickAddButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ONCLICKADDBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnPressAddButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ONPRESSADDBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSubButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ONCLICKSUBBUTTON_OFFSET))(nullptr);
		}

		::System::Int32 get_InitialPotentialLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_GET_INITIALPOTENTIALLEVEL_OFFSET))(nullptr);
		}

		::System::Void SetNextData(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_SETNEXTDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetPossibleMaxButtonActivation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_SETPOSSIBLEMAXBUTTONACTIVATION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_AddButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_REMOVE_ADDBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void add_AddButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ADD_ADDBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PossibleMaxButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_REMOVE_POSSIBLEMAXBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_NextPotentialLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_SET_NEXTPOTENTIALLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PressSubAddButton(ButtonActivator* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(ButtonActivator*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_CO_PRESSSUBADDBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_InitialPotentialLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_SET_INITIALPOTENTIALLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshPotentialLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_REFRESHPOTENTIALLEVEL_OFFSET))(nullptr);
		}

		::System::Void OnPressSubButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ONPRESSSUBBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshSubAddButtonActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_REFRESHSUBADDBUTTONACTIVATION_OFFSET))(nullptr);
		}

		::System::Void add_SubButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ADD_SUBBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void add_PossibleMaxButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_ADD_POSSIBLEMAXBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetInitialData(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_SETINITIALDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void remove_SubButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_REMOVE_SUBBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::FlatData::PotentialStatBonusRateType* get_PotentialStatType()
		{
			return ((::FlatData::PotentialStatBonusRateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALBATCHMODESLOTDISPLAY_GET_POTENTIALSTATTYPE_OFFSET))(nullptr);
		}

	};

