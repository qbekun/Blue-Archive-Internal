#pragma once
#include "unitysdk.h"

class UILabel;
class IntTabController;
class MXButton;
class UIFormationPresetScrollViewController;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatData { class EchelonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_Formation_Notice;

#define UIPOPUP_FORMATION_PRESET_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x256B6B0)
#define UIPOPUP_FORMATION_PRESET_GET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x256B6E0)
#define UIPOPUP_FORMATION_PRESET_SET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x256B6F0)
#define UIPOPUP_FORMATION_PRESET_AWAKE_OFFSET UNITYSDK_OFFSET(0x256B710)
#define UIPOPUP_FORMATION_PRESET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x256BB90)
#define UIPOPUP_FORMATION_PRESET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x256BD20)
#define UIPOPUP_FORMATION_PRESET_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x256BF00)
#define UIPOPUP_FORMATION_PRESET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x256BF90)
#define UIPOPUP_FORMATION_PRESET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x256C100)
#define UIPOPUP_FORMATION_PRESET_ONOPENED_OFFSET UNITYSDK_OFFSET(0x256C1A0)
#define UIPOPUP_FORMATION_PRESET_SETTITLE_OFFSET UNITYSDK_OFFSET(0x256C030)
#define UIPOPUP_FORMATION_PRESET_ONBACK_OFFSET UNITYSDK_OFFSET(0x256CB70)
#define UIPOPUP_FORMATION_PRESET_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0x25670C0)
#define UIPOPUP_FORMATION_PRESET_HANDLECHANGEPRESETNAMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x256CEC0)
#define UIPOPUP_FORMATION_PRESET_HANDLEFORMATIONPRESETCOPYPASTEMESSAGE_OFFSET UNITYSDK_OFFSET(0x256CF40)
#define UIPOPUP_FORMATION_PRESET_REFRESHTABNAME_OFFSET UNITYSDK_OFFSET(0x256C280)
#define UIPOPUP_FORMATION_PRESET_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x256C4B0)
#define UIPOPUP_FORMATION_PRESET_ONCHANGEDECHELONGROUP_OFFSET UNITYSDK_OFFSET(0x256D1C0)
#define UIPOPUP_FORMATION_PRESET_ONCLICKECHELONGROUPEDITNAME_OFFSET UNITYSDK_OFFSET(0x256D2C0)
#define UIPOPUP_FORMATION_PRESET_ONCLICKCOPYCANCEL_OFFSET UNITYSDK_OFFSET(0x256CCC0)
#define UIPOPUP_FORMATION_PRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x256D3A0)
#define UIPOPUP_FORMATION_PRESET___N__0_OFFSET UNITYSDK_OFFSET(0x256D420)
#define UIPOPUP_FORMATION_PRESET__ONCLICKECHELONGROUPEDITNAME_B__38_0_OFFSET UNITYSDK_OFFSET(0x256D430)

	inline static constexpr unsigned int UIPopup_Formation_Preset_TypeDefinitionIndex = 6147;

	class UIPopup_Formation_Preset : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0xD8
		IntTabController* tabController; // 0xE0
		MXButton* echelonGroupEditNameButton; // 0xE8
		UIFormationPresetScrollViewController* scrollView; // 0xF0
		::UnityEngine::GameObject* baseScrollViewRoot; // 0xF8
		::UnityEngine::GameObject* extensionScrollViewRoot; // 0x100
		UIFormationPresetScrollViewController* baseScrollView; // 0x108
		UIFormationPresetScrollViewController* extensionScrollView; // 0x110
		::UnityEngine::GameObject* listEmptyMark; // 0x118
		::UnityEngine::GameObject* recentCopyNoticeLabel; // 0x120
		::UnityEngine::GameObject* copyCancelButtonObject; // 0x128
		MXButton* copyCancelButton; // 0x130
		::Il2CppArray<::System::Object*>* tab1Labels; // 0x138
		::Il2CppArray<::System::Object*>* tab2Labels; // 0x140
		::Il2CppArray<::System::Object*>* tab3Labels; // 0x148
		::Il2CppArray<::System::Object*>* tab4Labels; // 0x150
		Il2CppObject* tabLabels; // 0x158
		::MX::GameLogic::DBModel::RaidTeamSettingDB* _RaidTeamSettingDB_k__BackingField; // 0x160

		::FlatData::EchelonExtensionType* get_extensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidTeamSettingDB* get_RaidTeamSettingDB()
		{
			return ((::MX::GameLogic::DBModel::RaidTeamSettingDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_GET_RAIDTEAMSETTINGDB_OFFSET))(nullptr);
		}

		::System::Void set_RaidTeamSettingDB(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_SET_RAIDTEAMSETTINGDB_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Initialize(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::MX::GameLogic::DBModel::RaidTeamSettingDB* arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_SETTITLE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_ONBACK_OFFSET))(nullptr);
		}

		::System::Void RefreshStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_REFRESHSTYLES_OFFSET))(nullptr);
		}

		::System::Boolean HandleChangePresetNameMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_HANDLECHANGEPRESETNAMEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleFormationPresetCopyPasteMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_HANDLEFORMATIONPRESETCOPYPASTEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTabName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_REFRESHTABNAME_OFFSET))(nullptr);
		}

		::System::Void RefreshScrollView(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_REFRESHSCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedEchelonGroup(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_ONCHANGEDECHELONGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickEchelonGroupEditName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_ONCLICKECHELONGROUPEDITNAME_OFFSET))(nullptr);
		}

		::System::Void OnClickCopyCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_ONCLICKCOPYCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnClickEchelonGroupEditName_b__38_0(UIPopup_Formation_Notice* arg)
		{
			((::System::Void(*)(UIPopup_Formation_Notice*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_PRESET__ONCLICKECHELONGROUPEDITNAME_B__38_0_OFFSET))(arg, nullptr);
		}

	};

