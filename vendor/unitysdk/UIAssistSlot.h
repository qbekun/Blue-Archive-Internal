#pragma once
#include "unitysdk.h"

class UICharacterCard;
class MXButton;
namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
namespace MX::Data { class AssistSlotInfo; }

#define UIASSISTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x220D530)
#define UIASSISTSLOT_SETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x220D540)
#define UIASSISTSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x220D860)
#define UIASSISTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x220D890)
#define UIASSISTSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x220D9B0)
#define UIASSISTSLOT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x220DA00)

	inline static constexpr unsigned int UIAssistSlot_TypeDefinitionIndex = 4360;

	class UIAssistSlot : public Il2CppObject
	{
	public:
		UICharacterCard* clanMemberCharacterCard; // 0x18
		MXButton* confirmButton; // 0x20
		::System::Int32 slotNumber; // 0x28
		::MX::GameLogic::DBModel::ClanAssistSlotDB* clanAssistSlotDB; // 0x30
		::MX::Data::AssistSlotInfo* assistData; // 0x38
		Il2CppObject* onAssistSetSlotPopup; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMemberInfo(::MX::GameLogic::DBModel::ClanAssistSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSLOT_SETMEMBERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSLOT_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSLOT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSLOT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

	};

