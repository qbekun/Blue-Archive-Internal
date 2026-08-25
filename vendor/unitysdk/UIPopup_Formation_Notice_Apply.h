#pragma once
#include "unitysdk.h"

class UIWidget;
class UIFormationEchelonCards;
class MXButton;
class EchelonObject;
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }

#define UIPOPUP_FORMATION_NOTICE_APPLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x256A4E0)
#define UIPOPUP_FORMATION_NOTICE_APPLY_AWAKE_OFFSET UNITYSDK_OFFSET(0x256A500)
#define UIPOPUP_FORMATION_NOTICE_APPLY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2569DD0)
#define UIPOPUP_FORMATION_NOTICE_APPLY_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x256A620)

	inline static constexpr unsigned int UIPopup_Formation_Notice_Apply_TypeDefinitionIndex = 6140;

	class UIPopup_Formation_Notice_Apply : public Il2CppObject
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

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_APPLY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_APPLY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(EchelonObject* arg, ::MX::GameLogic::DBModel::EchelonPresetDB* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(EchelonObject*, ::MX::GameLogic::DBModel::EchelonPresetDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_APPLY_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_APPLY_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

	};

