#pragma once
#include "unitysdk.h"

class UIScrollView;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }
class UIBeforehandGachaSavedResultSlot;

#define UIBEFOREHANDGACHAFINALSELECTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6CE00)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA6CE10)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA6D320)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_ONCLICKRESULTSLOT_OFFSET UNITYSDK_OFFSET(0xA6D370)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xA6D550)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_UPDATECONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xA6D220)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_REFRESHRESULTSLOTS_OFFSET UNITYSDK_OFFSET(0xA6CEA0)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_SETRESULTSLOTSSELECTED_OFFSET UNITYSDK_OFFSET(0xA6D3F0)
#define UIBEFOREHANDGACHAFINALSELECTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6D780)

	inline static constexpr unsigned int UIBeforehandGachaFinalSelectPopup_TypeDefinitionIndex = 7849;

	class UIBeforehandGachaFinalSelectPopup : public Il2CppObject
	{
	public:
		Il2CppObject* resultSlots; // 0x18
		UIScrollView* resultSlotsScrollView; // 0x20
		MXButton* confirmBtn; // 0x28
		::UnityEngine::GameObject* confirmDisableBtn; // 0x30
		MXButton* cancelBtn; // 0x38
		MXButton* closeBtn; // 0x40
		::System::Int64 selectedTargetIndex; // 0x48
		Il2CppObject* selectedResults; // 0x50
		Il2CppObject* confirmCallback; // 0x58
		::System::Action* closeCallback; // 0x60
		::System::Int32 CurrentResultSlotIndex; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickResultSlot(UIBeforehandGachaSavedResultSlot* arg)
		{
			((::System::Void(*)(UIBeforehandGachaSavedResultSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_ONCLICKRESULTSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void UpdateConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_UPDATECONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshResultSlots(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_REFRESHRESULTSLOTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetResultSlotsSelected(UIBeforehandGachaSavedResultSlot* arg)
		{
			((::System::Void(*)(UIBeforehandGachaSavedResultSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_SETRESULTSLOTSSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHAFINALSELECTPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

