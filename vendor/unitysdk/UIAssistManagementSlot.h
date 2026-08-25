#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class MXButton;
namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
namespace MX::Data { class AssistSlotInfo; }

#define UIASSISTMANAGEMENTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x220ADE0)
#define UIASSISTMANAGEMENTSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2209410)
#define UIASSISTMANAGEMENTSLOT_SETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x2209610)
#define UIASSISTMANAGEMENTSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x220AFE0)
#define UIASSISTMANAGEMENTSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2209B40)
#define UIASSISTMANAGEMENTSLOT_RESTASSISTINFO_OFFSET UNITYSDK_OFFSET(0x2209220)
#define UIASSISTMANAGEMENTSLOT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x220B0C0)
#define UIASSISTMANAGEMENTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x220B320)

	inline static constexpr unsigned int UIAssistManagementSlot_TypeDefinitionIndex = 4350;

	class UIAssistManagementSlot : public Il2CppObject
	{
	public:
		UICharacterCard* clanMemberCharacterCard; // 0x18
		UILabel* characterName; // 0x20
		UILabel* cumulativeTime; // 0x28
		UILabel* rewardCredit; // 0x30
		MXButton* formationButton; // 0x38
		MXButton* reFormationButton; // 0x40
		::System::Int32 slotNumber; // 0x48
		::FlatData::EchelonType* echelonType; // 0x4C
		::MX::GameLogic::DBModel::ClanAssistSlotDB* clanAssistSlotDB; // 0x50
		::MX::Data::AssistSlotInfo* assistData; // 0x58
		Il2CppObject* onAssistSetSlotPopup; // 0x60

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMemberInfo(::FlatData::EchelonType* arg, ::MX::GameLogic::DBModel::ClanAssistSlotDB* arg2)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_SETMEMBERINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetEmpty(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_SETEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void RestAssistInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_RESTASSISTINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENTSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

