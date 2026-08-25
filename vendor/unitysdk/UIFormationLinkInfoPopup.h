#pragma once
#include "unitysdk.h"

class UIGrid;
class UIScrollView;
class UISupStatInfoSlot;
class MXButton;
class UIEchelonInfo;
class CharacterObject;
class FormationModel;

#define UIFORMATIONLINKINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x25432E0)
#define UIFORMATIONLINKINFOPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2543360)
#define UIFORMATIONLINKINFOPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0x25433D0)
#define UIFORMATIONLINKINFOPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2544860)
#define UIFORMATIONLINKINFOPOPUP_REFRESHTRANSFERSTATS_OFFSET UNITYSDK_OFFSET(0x2543900)
#define UIFORMATIONLINKINFOPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2544880)
#define UIFORMATIONLINKINFOPOPUP_ONCLICKSLOT_OFFSET UNITYSDK_OFFSET(0x25448C0)
#define UIFORMATIONLINKINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x25449D0)

	inline static constexpr unsigned int UIFormationLinkInfoPopup_TypeDefinitionIndex = 6067;

	class UIFormationLinkInfoPopup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Slots; // 0x18
		UIGrid* grid; // 0x20
		UIScrollView* scrollView; // 0x28
		UISupStatInfoSlot* statSlot; // 0x30
		MXButton* OkButton; // 0x38
		MXButton* CancelButton; // 0x40
		Il2CppObject* statSlots; // 0x48
		UIEchelonInfo* uiEchelonInfo; // 0x50
		::System::Action* closeCallback; // 0x58
		CharacterObject* currentSelectedTSSObject; // 0x60
		FormationModel* formationModel; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OpenPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_OPENPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void RefreshTransferStats(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_REFRESHTRANSFERSTATS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(UIEchelonInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(UIEchelonInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickSlot(CharacterObject* arg, CharacterObject* arg2)
		{
			((::System::Void(*)(CharacterObject*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_ONCLICKSLOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

