#pragma once
#include "unitysdk.h"

class UIGrid;
class UIScrollView;
class UISupStatInfoSlot;
class MXButton;
class UIEchelonInfo;
class FormationModel;

#define UIFORMATION_SUPPORTINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x254D0C0)
#define UIFORMATION_SUPPORTINFOPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25460F0)
#define UIFORMATION_SUPPORTINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x254D140)
#define UIFORMATION_SUPPORTINFOPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0x2546340)
#define UIFORMATION_SUPPORTINFOPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x254D540)

	inline static constexpr unsigned int UIFormation_SupportInfoPopup_TypeDefinitionIndex = 6087;

	class UIFormation_SupportInfoPopup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SurpportSlots; // 0x18
		UIGrid* grid; // 0x20
		UIScrollView* scrollView; // 0x28
		UISupStatInfoSlot* statSlot; // 0x30
		MXButton* OkButton; // 0x38
		Il2CppObject* statSlots; // 0x40
		UIEchelonInfo* uiEchelonInfo; // 0x48
		::System::Action* closeCallback; // 0x50
		FormationModel* formationModel; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SUPPORTINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIEchelonInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(UIEchelonInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SUPPORTINFOPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SUPPORTINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OpenPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SUPPORTINFOPOPUP_OPENPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SUPPORTINFOPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

	};

