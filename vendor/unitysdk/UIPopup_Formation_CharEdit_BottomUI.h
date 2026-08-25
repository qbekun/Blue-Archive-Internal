#pragma once
#include "unitysdk.h"

class EchelonSlots;
namespace FlatData { class EchelonExtensionType; }
class MXButton;
class UIMulliganButton;
class CharacterObject;
class Callback;

#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_SETMULLIGANBUTTON_OFFSET UNITYSDK_OFFSET(0x24DE640)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_GET_EDITINGMULLIGANUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x24DE790)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_SETAUTOTEAMENABLED_OFFSET UNITYSDK_OFFSET(0x24DE7A0)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_OPENMULLIGANPOPUP_OFFSET UNITYSDK_OFFSET(0x24DE800)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DEA40)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_GET_ISAUTOTEAMSETTINGBUTTONEXIST_OFFSET UNITYSDK_OFFSET(0x24DEAC0)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_SETMULLIGAN_OFFSET UNITYSDK_OFFSET(0x24DE6D0)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_REFRESHMULLIGANBUTTON_OFFSET UNITYSDK_OFFSET(0x24DED80)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_DISABLEMULLIGAN_OFFSET UNITYSDK_OFFSET(0x24DEE10)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_CLEARMULLIGAN_OFFSET UNITYSDK_OFFSET(0x24DEE80)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_REFRESHMULLIGAN_OFFSET UNITYSDK_OFFSET(0x24DEB10)
#define UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24DEED0)

	inline static constexpr unsigned int UIPopup_Formation_CharEdit_BottomUI_TypeDefinitionIndex = 5998;

	class UIPopup_Formation_CharEdit_BottomUI : public Il2CppObject
	{
	public:
		EchelonSlots* EchelonSlots; // 0x18
		::FlatData::EchelonExtensionType* ExtensionType; // 0x20
		MXButton* AutoTeamSettingButton; // 0x28
		UIMulliganButton* MulliganButton; // 0x30
		Il2CppObject* _EditingMulliganUniqueIds_k__BackingField; // 0x38

		::System::Void SetMulliganButton(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_SETMULLIGANBUTTON_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EditingMulliganUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_GET_EDITINGMULLIGANUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void SetAutoTeamEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_SETAUTOTEAMENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void OpenMulliganPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_OPENMULLIGANPOPUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAutoTeamSettingButtonExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_GET_ISAUTOTEAMSETTINGBUTTONEXIST_OFFSET))(nullptr);
		}

		::System::Void SetMulligan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_SETMULLIGAN_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMulliganButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_REFRESHMULLIGANBUTTON_OFFSET))(nullptr);
		}

		::System::Void DisableMulligan(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_DISABLEMULLIGAN_OFFSET))(arg, nullptr);
		}

		::System::Void ClearMulligan()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_CLEARMULLIGAN_OFFSET))(nullptr);
		}

		::System::Void RefreshMulligan()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_REFRESHMULLIGAN_OFFSET))(nullptr);
		}

		::System::Void Initialize(Callback* arg)
		{
			((::System::Void(*)(Callback*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BOTTOMUI_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

