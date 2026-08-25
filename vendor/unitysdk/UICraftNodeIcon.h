#pragma once
#include "unitysdk.h"

namespace MX::Data { class CraftNodeExcelInfo; }
class UIState;
namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
class UIParcelCard;
class MXButton;
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
namespace MX::GameLogic::DBModel { class CraftPresetNodeDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UICRAFTNODEICON_GET_NODEEXCELINFO_OFFSET UNITYSDK_OFFSET(0x2392B50)
#define UICRAFTNODEICON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2392B60)
#define UICRAFTNODEICON_SETDATA_OFFSET UNITYSDK_OFFSET(0x2392CD0)
#define UICRAFTNODEICON_SETDATADBTIER_OFFSET UNITYSDK_OFFSET(0x2393350)
#define UICRAFTNODEICON_SETDATADBTIER_OFFSET UNITYSDK_OFFSET(0x2393590)
#define UICRAFTNODEICON_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x23936E0)
#define UICRAFTNODEICON_REFRESHDEFAULTUI_OFFSET UNITYSDK_OFFSET(0x2393790)
#define UICRAFTNODEICON_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x2392D00)
#define UICRAFTNODEICON_REFRESHPARCELCARD_OFFSET UNITYSDK_OFFSET(0x2393500)
#define UICRAFTNODEICON_ACTIVESELECT_OFFSET UNITYSDK_OFFSET(0x2393970)
#define UICRAFTNODEICON_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x23939F0)
#define UICRAFTNODEICON_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x2393A00)
#define UICRAFTNODEICON_SETUISTATE_OFFSET UNITYSDK_OFFSET(0x2393AF0)
#define UICRAFTNODEICON_REFRESHUISTATE_OFFSET UNITYSDK_OFFSET(0x2393B00)
#define UICRAFTNODEICON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2393BC0)

	inline static constexpr unsigned int UICraftNodeIcon_TypeDefinitionIndex = 5159;

	class UICraftNodeIcon : public Il2CppObject
	{
	public:
		::MX::Data::CraftNodeExcelInfo* nodeExcelInfo; // 0x18
		::System::Boolean isFirst; // 0x20
		::System::Int32 priority; // 0x24
		UIState* uiState; // 0x28
		::UnityEngine::GameObject* enable; // 0x30
		::UnityEngine::GameObject* disable; // 0x38
		::UnityEngine::GameObject* firstPriorityIcon; // 0x40
		UILabel* otherPriorityLabel; // 0x48
		::UnityEngine::GameObject* quality01; // 0x50
		::UnityEngine::GameObject* quality02; // 0x58
		UITexture* icon; // 0x60
		UILabel* nodeName; // 0x68
		UILabel* nodeDesc; // 0x70
		::UnityEngine::GameObject* select; // 0x78
		UIParcelCard* rewardParcelCard; // 0x80
		MXButton* nodeInfoBtn; // 0x88
		::System::Int32 tier; // 0x90
		UILabel* nodeTierLabel; // 0x98
		UILabel* disableLabel; // 0xA0

		::MX::Data::CraftNodeExcelInfo* get_NodeExcelInfo()
		{
			return ((::MX::Data::CraftNodeExcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_GET_NODEEXCELINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::CraftNodeExcelInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::CraftNodeExcelInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDataDBTier(::MX::GameLogic::DBModel::CraftNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_SETDATADBTIER_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataDBTier(::MX::GameLogic::DBModel::CraftPresetNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_SETDATADBTIER_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void RefreshDefaultUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_REFRESHDEFAULTUI_OFFSET))(nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_REFRESHUI_OFFSET))(nullptr);
		}

		::System::Void RefreshParcelCard(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_REFRESHPARCELCARD_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_ACTIVESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPriority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_SETPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void SetUIState(UIState* arg)
		{
			((::System::Void(*)(UIState*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_SETUISTATE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshUIState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_REFRESHUISTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEICON_.CTOR_OFFSET))(nullptr);
		}

	};

