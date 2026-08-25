#pragma once
#include "unitysdk.h"

class UIWidget;
class UIFormationEchelonCards;
class MXButton;
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }

#define UIPOPUP_FORMATION_NOTICE_OVERWRITE_AWAKE_OFFSET UNITYSDK_OFFSET(0x256B4B0)
#define UIPOPUP_FORMATION_NOTICE_OVERWRITE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2569C00)
#define UIPOPUP_FORMATION_NOTICE_OVERWRITE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2569A30)
#define UIPOPUP_FORMATION_NOTICE_OVERWRITE_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x256B5D0)
#define UIPOPUP_FORMATION_NOTICE_OVERWRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x256B690)

	inline static constexpr unsigned int UIPopup_Formation_Notice_Overwrite_TypeDefinitionIndex = 6145;

	class UIPopup_Formation_Notice_Overwrite : public Il2CppObject
	{
	public:
		UIWidget* bg; // 0x18
		::System::Int32 defaultBgWidth; // 0x20
		::System::Int32 extensionBgWidth; // 0x24
		UIFormationEchelonCards* defaultBeforeEchelonCards; // 0x28
		UIFormationEchelonCards* defaultAfterrEchelonCards; // 0x30
		UIFormationEchelonCards* extensionBeforeEchelonCards; // 0x38
		UIFormationEchelonCards* extensionAfterEchelonCards; // 0x40
		MXButton* confirmButton; // 0x48
		::System::Action* confirmCallBack; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_OVERWRITE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::EchelonPresetDB* arg, ::MX::GameLogic::DBModel::EchelonPresetDB* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::MX::GameLogic::DBModel::EchelonPresetDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_OVERWRITE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::EchelonPresetDB* arg, ::MX::GameLogic::DBModel::RaidTeamSettingDB* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_OVERWRITE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_OVERWRITE_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_OVERWRITE_.CTOR_OFFSET))(nullptr);
		}

	};

