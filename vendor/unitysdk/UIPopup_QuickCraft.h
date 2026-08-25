#pragma once
#include "unitysdk.h"

class InventoryScrollViewController;
class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIMaxMinButtonController;
class IntTabController;
namespace MX::GameLogic::DBModel { class CraftPresetSlotDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UICraftDuration;

#define UIPOPUP_QUICKCRAFT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A1AA0)
#define UIPOPUP_QUICKCRAFT_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET UNITYSDK_OFFSET(0x23A1AB0)
#define UIPOPUP_QUICKCRAFT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x23A2E00)
#define UIPOPUP_QUICKCRAFT_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x23A2FE0)
#define UIPOPUP_QUICKCRAFT_ISSAMEPRESETIGNORENAME_OFFSET UNITYSDK_OFFSET(0x23A38F0)
#define UIPOPUP_QUICKCRAFT_REFRESHPRESETTABNAME_OFFSET UNITYSDK_OFFSET(0x23A3610)
#define UIPOPUP_QUICKCRAFT_ONCLICKQUICKCRAFTSTART_OFFSET UNITYSDK_OFFSET(0x23A3AC0)
#define UIPOPUP_QUICKCRAFT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23A3C60)
#define UIPOPUP_QUICKCRAFT_HANDLECRAFTNODEINFOCLICKMESSAGE_OFFSET UNITYSDK_OFFSET(0x23A3FF0)
#define UIPOPUP_QUICKCRAFT_HANDLECRAFTSAVEPRESETNAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23A41B0)
#define UIPOPUP_QUICKCRAFT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23A4230)
#define UIPOPUP_QUICKCRAFT__ONCLICKPRESETSETTING_B__30_0_OFFSET UNITYSDK_OFFSET(0x23A4440)
#define UIPOPUP_QUICKCRAFT_ONCLICKPRESETSETTING_OFFSET UNITYSDK_OFFSET(0x23A4480)
#define UIPOPUP_QUICKCRAFT_ONCLICKPRESETEDIT_OFFSET UNITYSDK_OFFSET(0x23A45F0)
#define UIPOPUP_QUICKCRAFT_ONCLICKCLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0x23A4AA0)
#define UIPOPUP_QUICKCRAFT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23A4B30)
#define UIPOPUP_QUICKCRAFT_HANDLECRAFTNODESLOTACTIVATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x23A4F10)
#define UIPOPUP_QUICKCRAFT_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x23A5320)
#define UIPOPUP_QUICKCRAFT_INIT_OFFSET UNITYSDK_OFFSET(0x23A43D0)
#define UIPOPUP_QUICKCRAFT_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x23A53C0)
#define UIPOPUP_QUICKCRAFT__AWAKE_B__18_0_OFFSET UNITYSDK_OFFSET(0x23A5450)
#define UIPOPUP_QUICKCRAFT_TRYSENDQUICKCRAFTPRESETSAVEDATA_OFFSET UNITYSDK_OFFSET(0x23A2E30)
#define UIPOPUP_QUICKCRAFT_AWAKE_OFFSET UNITYSDK_OFFSET(0x23A54A0)
#define UIPOPUP_QUICKCRAFT_HANDLECRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23A5AF0)
#define UIPOPUP_QUICKCRAFT_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x23A1B20)

	inline static constexpr unsigned int UIPopup_QuickCraft_TypeDefinitionIndex = 5193;

	class UIPopup_QuickCraft : public Il2CppObject
	{
	public:
		InventoryScrollViewController* scrollView; // 0xD8
		Il2CppObject* slots; // 0xE0
		MXButton* settingBtn; // 0xE8
		MXButton* closeBtn; // 0xF0
		MXButton* startBtn; // 0xF8
		::UnityEngine::GameObject* startDisableBtn; // 0x100
		UILabel* cost; // 0x108
		::UnityEngine::GameObject* emptyLabelObj; // 0x110
		UIMaxMinButtonController* btnController; // 0x118
		UILabel* notEnoughLabel; // 0x120
		IntTabController* presetTab; // 0x128
		MXButton* presetNameEditBtn; // 0x130
		::System::Int32 columnCount; // 0x0
		::System::Int32 maxSlotCount; // 0x0
		::System::Int32 currentPresetIndex; // 0x138
		::MX::GameLogic::DBModel::CraftPresetSlotDB* currentPresetData; // 0x140
		::System::Boolean isInit; // 0x148
		::System::Boolean _all; // 0x149

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickMaxMinButtonMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_REFRESHUI_OFFSET))(nullptr);
		}

		::System::Boolean IsSamePresetIgnoreName(::MX::GameLogic::DBModel::CraftPresetSlotDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CraftPresetSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ISSAMEPRESETIGNORENAME_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshPresetTabName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_REFRESHPRESETTABNAME_OFFSET))(nullptr);
		}

		::System::Void OnClickQuickCraftStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONCLICKQUICKCRAFTSTART_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftNodeInfoClickMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_HANDLECRAFTNODEINFOCLICKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCraftSavePresetNameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_HANDLECRAFTSAVEPRESETNAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPresetSetting_b__30_0(UICraftDuration* arg)
		{
			((::System::Void(*)(UICraftDuration*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT__ONCLICKPRESETSETTING_B__30_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPresetSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONCLICKPRESETSETTING_OFFSET))(nullptr);
		}

		::System::Void OnClickPresetEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONCLICKPRESETEDIT_OFFSET))(nullptr);
		}

		::System::Void OnClickClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONCLICKCLOSEPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftNodeSlotActivationMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_HANDLECRAFTNODESLOTACTIVATIONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnConfirm(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_ONCONFIRM_OFFSET))(arg, str, nullptr);
		}

		::System::Void _Awake_b__18_0(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT__AWAKE_B__18_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TrySendQuickCraftPresetSaveData(::MX::GameLogic::DBModel::CraftPresetSlotDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CraftPresetSlotDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_TRYSENDQUICKCRAFTPRESETSAVEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftAutoBeginProcessResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_HANDLECRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFT_REFRESHMATERIAL_OFFSET))(nullptr);
		}

	};

