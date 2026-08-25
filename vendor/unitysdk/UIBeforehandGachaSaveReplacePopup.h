#pragma once
#include "unitysdk.h"

class UIBeforehandGachaSavedResultSlot;
class UIScrollView;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }

#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6EA50)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA6EE20)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_UPDATECONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xA6EE70)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_ONCLICKSAVEDSLOT_OFFSET UNITYSDK_OFFSET(0xA6EF60)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_REFRESHCURRENTRESULT_OFFSET UNITYSDK_OFFSET(0xA6F040)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6F0B0)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_REFRESHSAVEDSLOTS_OFFSET UNITYSDK_OFFSET(0xA6F0C0)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA6F360)
#define UIBEFOREHANDGACHASAVEREPLACEPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xA6F430)

	inline static constexpr unsigned int UIBeforehandGachaSaveReplacePopup_TypeDefinitionIndex = 7853;

	class UIBeforehandGachaSaveReplacePopup : public Il2CppObject
	{
	public:
		UIBeforehandGachaSavedResultSlot* currentResultSlot; // 0x18
		Il2CppObject* savedSlots; // 0x20
		UIScrollView* savedSlotsScrollView; // 0x28
		MXButton* confirmBtn; // 0x30
		::UnityEngine::GameObject* confirmDisableBtn; // 0x38
		MXButton* cancelBtn; // 0x40
		MXButton* closeBtn; // 0x48
		Il2CppObject* selectedSlotIndex; // 0x50
		Il2CppObject* confirmCallback; // 0x58
		::System::Action* closeCallback; // 0x60
		::System::Int32 CurrentResultSlotIndex; // 0x0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void UpdateConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_UPDATECONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSavedSlot(UIBeforehandGachaSavedResultSlot* arg)
		{
			((::System::Void(*)(UIBeforehandGachaSavedResultSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_ONCLICKSAVEDSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCurrentResult(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_REFRESHCURRENTRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshSavedSlots(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_REFRESHSAVEDSLOTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEREPLACEPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

	};

