#pragma once
#include "unitysdk.h"

class UIWidget;
class UIFormationEchelonCards;
class MXButton;
class EchelonObject;

#define UIPOPUP_FORMATION_NOTICE_IMPORT_AWAKE_OFFSET UNITYSDK_OFFSET(0x256B2B0)
#define UIPOPUP_FORMATION_NOTICE_IMPORT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x256B3D0)
#define UIPOPUP_FORMATION_NOTICE_IMPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25698A0)
#define UIPOPUP_FORMATION_NOTICE_IMPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x256B490)

	inline static constexpr unsigned int UIPopup_Formation_Notice_Import_TypeDefinitionIndex = 6144;

	class UIPopup_Formation_Notice_Import : public Il2CppObject
	{
	public:
		UIWidget* bg; // 0x18
		::System::Int32 defaultBgWidth; // 0x20
		::System::Int32 extensionBgWidth; // 0x24
		UIFormationEchelonCards* defaultEchelonCards; // 0x28
		UIFormationEchelonCards* extensionEchelonCards; // 0x30
		MXButton* confirmButton; // 0x38
		::System::Action* confirmCallback; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_IMPORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_IMPORT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void Initialize(EchelonObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(EchelonObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_IMPORT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_IMPORT_.CTOR_OFFSET))(nullptr);
		}

	};

