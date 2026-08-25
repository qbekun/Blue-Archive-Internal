#pragma once
#include "unitysdk.h"

class UIState;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIWidget;
class MXButton;
namespace MX::GameLogic::DBModel { class CraftPresetSlotDB; }
namespace MX::GameLogic::DBModel { class CraftPresetNodeDB; }
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
class UICraftDuration;

#define UICRAFTNODEPRIORITYINFO_GET_ISACTIVATION_OFFSET UNITYSDK_OFFSET(0x2394620)
#define UICRAFTNODEPRIORITYINFO_SET_ISACTIVATION_OFFSET UNITYSDK_OFFSET(0x2394630)
#define UICRAFTNODEPRIORITYINFO_GET_NODEEXCELINFOS_OFFSET UNITYSDK_OFFSET(0x2394640)
#define UICRAFTNODEPRIORITYINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2394650)
#define UICRAFTNODEPRIORITYINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2394B40)
#define UICRAFTNODEPRIORITYINFO_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2394E30)
#define UICRAFTNODEPRIORITYINFO_SETSELECTNODE_OFFSET UNITYSDK_OFFSET(0x2394F30)
#define UICRAFTNODEPRIORITYINFO_ONCLICKSELECTNODE_OFFSET UNITYSDK_OFFSET(0x2395270)
#define UICRAFTNODEPRIORITYINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2395360)
#define UICRAFTNODEPRIORITYINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x23955A0)
#define UICRAFTNODEPRIORITYINFO_SETWIDGETALPHA_OFFSET UNITYSDK_OFFSET(0x2395A60)
#define UICRAFTNODEPRIORITYINFO_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x2395B00)
#define UICRAFTNODEPRIORITYINFO_ONCLICKEDIT_OFFSET UNITYSDK_OFFSET(0x2395C10)
#define UICRAFTNODEPRIORITYINFO_ONCLICKSETTING_OFFSET UNITYSDK_OFFSET(0x2395D80)
#define UICRAFTNODEPRIORITYINFO_SETUISTATE_OFFSET UNITYSDK_OFFSET(0x2394E20)
#define UICRAFTNODEPRIORITYINFO_REFRESHUISTATE_OFFSET UNITYSDK_OFFSET(0x2395EF0)
#define UICRAFTNODEPRIORITYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2395FF0)
#define UICRAFTNODEPRIORITYINFO__ONCLICKEDIT_B__35_0_OFFSET UNITYSDK_OFFSET(0x2396110)
#define UICRAFTNODEPRIORITYINFO__ONCLICKSETTING_B__36_0_OFFSET UNITYSDK_OFFSET(0x2396160)

	inline static constexpr unsigned int UICraftNodePriorityInfo_TypeDefinitionIndex = 5168;

	class UICraftNodePriorityInfo : public Il2CppObject
	{
	public:
		UIState* uiState; // 0x18
		::UnityEngine::GameObject* enable; // 0x20
		::UnityEngine::GameObject* setting; // 0x28
		::UnityEngine::GameObject* disable; // 0x30
		UILabel* stepName; // 0x38
		::UnityEngine::GameObject* select; // 0x40
		UIWidget* widget; // 0x48
		MXButton* nodeInfoBtn; // 0x50
		Il2CppObject* nodeIcons; // 0x58
		MXButton* settingBtn; // 0x60
		MXButton* editBtn; // 0x68
		MXButton* btnSelect; // 0x70
		Il2CppObject* ActivationObject; // 0x78
		Il2CppObject* DeactivationObject; // 0x80
		::System::Boolean _isActivation_k__BackingField; // 0x88
		Il2CppObject* nodeExcelInfos; // 0x90
		::MX::GameLogic::DBModel::CraftPresetSlotDB* currentPresetSlot; // 0x98
		::MX::GameLogic::DBModel::CraftPresetNodeDB* currentPresetNode; // 0xA0
		::System::Int32 currentTier; // 0xA8
		::System::Int32 currentSlotNumber; // 0xAC

		::System::Boolean get_isActivation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_GET_ISACTIVATION_OFFSET))(nullptr);
		}

		::System::Void set_isActivation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_SET_ISACTIVATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NodeExcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_GET_NODEEXCELINFOS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::CraftNodeDB* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftNodeDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void SetSelectNode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_SETSELECTNODE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSelectNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_ONCLICKSELECTNODE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::MX::GameLogic::DBModel::CraftPresetSlotDB* arg2, ::MX::GameLogic::DBModel::CraftPresetNodeDB* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::GameLogic::DBModel::CraftPresetSlotDB*, ::MX::GameLogic::DBModel::CraftPresetNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetWidgetAlpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_SETWIDGETALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_ONCLICKEDIT_OFFSET))(nullptr);
		}

		::System::Void OnClickSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_ONCLICKSETTING_OFFSET))(nullptr);
		}

		::System::Void SetUIState(UIState* arg)
		{
			((::System::Void(*)(UIState*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_SETUISTATE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshUIState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_REFRESHUISTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEdit_b__35_0(UICraftDuration* arg)
		{
			((::System::Void(*)(UICraftDuration*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO__ONCLICKEDIT_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSetting_b__36_0(UICraftDuration* arg)
		{
			((::System::Void(*)(UICraftDuration*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEPRIORITYINFO__ONCLICKSETTING_B__36_0_OFFSET))(arg, nullptr);
		}

	};

