#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Conquest { class ConquestTile; }
namespace MX::Data::Excel { class ConquestTileExcel; }
class UIGrid;
class UIPopup_Conquest_Operation;
class ConquestOperationListItemInfo;

#define UICONQUESTOPERATIONLISTITEM_ONCLICKOPENPOPUP_OFFSET UNITYSDK_OFFSET(0x2364E00)
#define UICONQUESTOPERATIONLISTITEM_SETMANAGEREWARDS_OFFSET UNITYSDK_OFFSET(0x23652E0)
#define UICONQUESTOPERATIONLISTITEM_ONCLICKMOVETOBASE_OFFSET UNITYSDK_OFFSET(0x2365A70)
#define UICONQUESTOPERATIONLISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2365BB0)
#define UICONQUESTOPERATIONLISTITEM_GET_MANAGEREWARDGRID_OFFSET UNITYSDK_OFFSET(0x2365F60)
#define UICONQUESTOPERATIONLISTITEM_GET_MANAGEREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x23658D0)
#define UICONQUESTOPERATIONLISTITEM__ONCLICKMOVETOBASE_B__21_0_OFFSET UNITYSDK_OFFSET(0x2365FD0)
#define UICONQUESTOPERATIONLISTITEM__ONCLICKMOVETOBASE_B__21_1_OFFSET UNITYSDK_OFFSET(0x23660B0)
#define UICONQUESTOPERATIONLISTITEM_ONCLICKCHANGEECHELON_OFFSET UNITYSDK_OFFSET(0x23660F0)
#define UICONQUESTOPERATIONLISTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x23662F0)
#define UICONQUESTOPERATIONLISTITEM__ONCLICKCHANGEECHELON_B__22_0_OFFSET UNITYSDK_OFFSET(0x23669B0)
#define UICONQUESTOPERATIONLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x23669F0)

	inline static constexpr unsigned int UIConquestOperationListItem_TypeDefinitionIndex = 5064;

	class UIConquestOperationListItem : public ::System::Xml::Ucs4Decoder1234
	{
	public:
		MXButton* addEchelonButton; // 0x28
		MXButton* changeEchelonButton; // 0x30
		MXButton* toBaseQuickButton; // 0x38
		MXButton* rewardAllButton; // 0x40
		::UnityEngine::GameObject* rewardAllObj; // 0x48
		UILabel* stageNameLabel; // 0x50
		UILabel* stageStepLabel; // 0x58
		UILabel* baseLevelLabel; // 0x60
		::MX::Conquest::ConquestTile* conquestTileData; // 0x68
		::MX::Data::Excel::ConquestTileExcel* thisTileExcel; // 0x70
		UIGrid* manageRewardGrid; // 0x80
		Il2CppObject* manageRewardParcels; // 0x88
		Il2CppObject* stageManageRewards; // 0x90
		::System::Boolean isMainStoryOrPermanent; // 0x98

		::System::Void OnClickOpenPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_ONCLICKOPENPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetManageRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_SETMANAGEREWARDS_OFFSET))(nullptr);
		}

		::System::Void OnClickMoveToBase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_ONCLICKMOVETOBASE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_AWAKE_OFFSET))(nullptr);
		}

		UIGrid* get_ManageRewardGrid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_GET_MANAGEREWARDGRID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ManageRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_GET_MANAGEREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void _OnClickMoveToBase_b__21_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM__ONCLICKMOVETOBASE_B__21_0_OFFSET))(nullptr);
		}

		::System::Void _OnClickMoveToBase_b__21_1(UIPopup_Conquest_Operation* arg)
		{
			((::System::Void(*)(UIPopup_Conquest_Operation*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM__ONCLICKMOVETOBASE_B__21_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChangeEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_ONCLICKCHANGEECHELON_OFFSET))(nullptr);
		}

		::System::Void SetData(ConquestOperationListItemInfo* arg)
		{
			((::System::Void(*)(ConquestOperationListItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickChangeEchelon_b__22_0(UIPopup_Conquest_Operation* arg)
		{
			((::System::Void(*)(UIPopup_Conquest_Operation*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM__ONCLICKCHANGEECHELON_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTOPERATIONLISTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

