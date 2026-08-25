#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class UIButtonEnableSwitch;
namespace UnityEngine { class Collider; }
class FormationModel;
class UIFormationPresetScrollViewController;
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
class EchelonObject;
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
class CharacterObject;
class UIPopup_Formation_CharEdit;
class UIPopup_Formation_Notice;

#define UIFORMATIONPRESETSCROLLVIEWELEMENT_GET_PRESETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2563D70)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2563E00)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x25643E0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0x25630E0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_EDITPRESET_OFFSET UNITYSDK_OFFSET(0x2564630)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_EDITPRESET_OFFSET UNITYSDK_OFFSET(0x2564860)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_SETELEMENTPRESETDB_OFFSET UNITYSDK_OFFSET(0x25649E0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_SAVEPRESET_OFFSET UNITYSDK_OFFSET(0x2564700)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_SAVEECHELON_OFFSET UNITYSDK_OFFSET(0x2564C50)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ISDEPLOYEDECHELON_OFFSET UNITYSDK_OFFSET(0x2564CE0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ISFORMATIONCHARACTERINDEPLOYEDECHELON_OFFSET UNITYSDK_OFFSET(0x2564ED0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKIMPORT_OFFSET UNITYSDK_OFFSET(0x2565480)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKEDIT_OFFSET UNITYSDK_OFFSET(0x2565860)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKCOPY_OFFSET UNITYSDK_OFFSET(0x2565940)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKFORMATION_OFFSET UNITYSDK_OFFSET(0x2565AD0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKPASTE_OFFSET UNITYSDK_OFFSET(0x2566160)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKEDITNAME_OFFSET UNITYSDK_OFFSET(0x2566B70)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0x2563CC0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2566C50)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT__SAVEECHELON_B__22_0_OFFSET UNITYSDK_OFFSET(0x2566C90)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT__ONCLICKEDIT_B__26_0_OFFSET UNITYSDK_OFFSET(0x2566DD0)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT__ONCLICKEDIT_G__SAVEEDITRESULT|26_1_OFFSET UNITYSDK_OFFSET(0x2566F30)
#define UIFORMATIONPRESETSCROLLVIEWELEMENT__ONCLICKEDITNAME_B__30_0_OFFSET UNITYSDK_OFFSET(0x2567110)

	inline static constexpr unsigned int UIFormationPresetScrollViewElement_TypeDefinitionIndex = 6136;

	class UIFormationPresetScrollViewElement : public ::System::Xml::XmlException
	{
	public:
		UILabel* echelonNameLabel; // 0x28
		MXButton* editNameButton; // 0x30
		::Il2CppArray<::System::Object*>* strikerCards; // 0x38
		::Il2CppArray<::System::Object*>* specialCards; // 0x40
		::UnityEngine::GameObject* selectMark; // 0x48
		UIButtonEnableSwitch* importButton; // 0x50
		UIButtonEnableSwitch* editButton; // 0x58
		UIButtonEnableSwitch* copyButton; // 0x60
		UIButtonEnableSwitch* formationButton; // 0x68
		UIButtonEnableSwitch* pasteButton; // 0x70
		::UnityEngine::Collider* ScrollViewCollider; // 0x78
		::System::Boolean isPresetExist; // 0x80
		FormationModel* formationModel; // 0x88

		UIFormationPresetScrollViewController* get_presetController()
		{
			return ((UIFormationPresetScrollViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_GET_PRESETCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_SETBUTTONS_OFFSET))(nullptr);
		}

		::System::Void EditPreset(EchelonObject* arg)
		{
			((::System::Void(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_EDITPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void EditPreset(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_EDITPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void SetElementPresetDB(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_SETELEMENTPRESETDB_OFFSET))(arg, nullptr);
		}

		::System::Void SavePreset(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_SAVEPRESET_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SaveEchelon()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_SAVEECHELON_OFFSET))(nullptr);
		}

		::System::Boolean IsDeployedEchelon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ISDEPLOYEDECHELON_OFFSET))(nullptr);
		}

		::System::Boolean IsFormationCharacterInDeployedEchelon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ISFORMATIONCHARACTERINDEPLOYEDECHELON_OFFSET))(nullptr);
		}

		::System::Void OnClickImport()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKIMPORT_OFFSET))(nullptr);
		}

		::System::Void OnClickEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKEDIT_OFFSET))(nullptr);
		}

		::System::Void OnClickCopy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKCOPY_OFFSET))(nullptr);
		}

		::System::Void OnClickFormation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKFORMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickPaste()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKPASTE_OFFSET))(nullptr);
		}

		::System::Void OnClickEditName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_ONCLICKEDITNAME_OFFSET))(nullptr);
		}

		::System::Void RefreshStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_REFRESHSTYLES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SaveEchelon_b__22_0(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT__SAVEECHELON_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEdit_b__26_0(UIPopup_Formation_CharEdit* arg)
		{
			((::System::Void(*)(UIPopup_Formation_CharEdit*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT__ONCLICKEDIT_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEdit_g__SaveEditResult|26_1(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT__ONCLICKEDIT_G__SAVEEDITRESULT|26_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEditName_b__30_0(UIPopup_Formation_Notice* arg)
		{
			((::System::Void(*)(UIPopup_Formation_Notice*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONPRESETSCROLLVIEWELEMENT__ONCLICKEDITNAME_B__30_0_OFFSET))(arg, nullptr);
		}

	};

