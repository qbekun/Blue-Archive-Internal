#pragma once
#include "unitysdk.h"

class UIScrollView;
class MXButton;
namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }

#define UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA6E4B0)
#define UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA6E750)
#define UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6E7A0)
#define UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6EA40)
#define UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_REFRESHSAVEDSLOTS_OFFSET UNITYSDK_OFFSET(0xA6E510)

	inline static constexpr unsigned int UIBeforehandGachaSavedResultViewPopup_TypeDefinitionIndex = 7852;

	class UIBeforehandGachaSavedResultViewPopup : public Il2CppObject
	{
	public:
		Il2CppObject* savedSlots; // 0x18
		UIScrollView* savedSlotsScrollView; // 0x20
		MXButton* okBtn; // 0x28
		MXButton* closeBtn; // 0x30
		::System::Action* closeCallback; // 0x38

		::System::Void SetData(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshSavedSlots(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTVIEWPOPUP_REFRESHSAVEDSLOTS_OFFSET))(arg, nullptr);
		}

	};

