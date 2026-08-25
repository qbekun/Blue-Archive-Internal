#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UISprite;
class UITexture;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
class UISmallParcelCard;
class UIGrid;
class UIScrollView;
namespace MX::Conquest { class ConquestTile; }
namespace MX::Data::Excel { class ConquestTileExcel; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
namespace MX::Data { class ConquestData; }
class UIConquest;
class ConquestUpgradeBaseNetworkMessage;
namespace MX::Data { class LocalizeData; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_ConquestTileInfo_Detail;
class UIRewardPopup;

#define UIPOPUP_CONQUESTTILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x236B880)
#define UIPOPUP_CONQUESTTILEINFO_GET_LOCALDATA_OFFSET UNITYSDK_OFFSET(0x236B890)
#define UIPOPUP_CONQUESTTILEINFO_SETSETTLEREWARDS_OFFSET UNITYSDK_OFFSET(0x236B910)
#define UIPOPUP_CONQUESTTILEINFO_HANDLECONQUESTUPGRADEBASENETWORKMESSAGE_OFFSET UNITYSDK_OFFSET(0x236C1C0)
#define UIPOPUP_CONQUESTTILEINFO_SETUPGRADEUI_OFFSET UNITYSDK_OFFSET(0x236C270)
#define UIPOPUP_CONQUESTTILEINFO_SETTILETYPEUI_OFFSET UNITYSDK_OFFSET(0x236C850)
#define UIPOPUP_CONQUESTTILEINFO_ONCLICKUPGRADE_OFFSET UNITYSDK_OFFSET(0x236D1E0)
#define UIPOPUP_CONQUESTTILEINFO_SETSCHOOLINFO_OFFSET UNITYSDK_OFFSET(0x236DD10)
#define UIPOPUP_CONQUESTTILEINFO_SETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x236E300)
#define UIPOPUP_CONQUESTTILEINFO_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x236E540)
#define UIPOPUP_CONQUESTTILEINFO_GET_SETTLEREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x236C060)
#define UIPOPUP_CONQUESTTILEINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x236E5D0)
#define UIPOPUP_CONQUESTTILEINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x236E990)
#define UIPOPUP_CONQUESTTILEINFO_ONCLICKRANKINFO_OFFSET UNITYSDK_OFFSET(0x236EB10)
#define UIPOPUP_CONQUESTTILEINFO__ONCLICKRANKINFO_B__73_0_OFFSET UNITYSDK_OFFSET(0x236EBC0)
#define UIPOPUP_CONQUESTTILEINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x236EF80)
#define UIPOPUP_CONQUESTTILEINFO_GET_MANAGEREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x236F140)
#define UIPOPUP_CONQUESTTILEINFO_OPENREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0x236F230)
#define UIPOPUP_CONQUESTTILEINFO_SETLOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x236F3F0)
#define UIPOPUP_CONQUESTTILEINFO__OPENREWARDPOPUP_B__76_1_OFFSET UNITYSDK_OFFSET(0x236F8B0)
#define UIPOPUP_CONQUESTTILEINFO_SETMANAGEREWARDS_OFFSET UNITYSDK_OFFSET(0x236CA60)
#define UIPOPUP_CONQUESTTILEINFO_SETUIS_OFFSET UNITYSDK_OFFSET(0x236F380)
#define UIPOPUP_CONQUESTTILEINFO_SETOKUI_OFFSET UNITYSDK_OFFSET(0x236C9C0)
#define UIPOPUP_CONQUESTTILEINFO_SETERODEDREWARDS_OFFSET UNITYSDK_OFFSET(0x236F8F0)
#define UIPOPUP_CONQUESTTILEINFO_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2370130)
#define UIPOPUP_CONQUESTTILEINFO_GET_ERODEDREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x2370030)
#define UIPOPUP_CONQUESTTILEINFO___N__0_OFFSET UNITYSDK_OFFSET(0x23701C0)
#define UIPOPUP_CONQUESTTILEINFO__OPENREWARDPOPUP_B__76_0_OFFSET UNITYSDK_OFFSET(0x23701D0)
#define UIPOPUP_CONQUESTTILEINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2370270)
#define UIPOPUP_CONQUESTTILEINFO_GET_SETTLEPARCELPREF_OFFSET UNITYSDK_OFFSET(0x236C180)
#define UIPOPUP_CONQUESTTILEINFO_SETLEVELINFO_OFFSET UNITYSDK_OFFSET(0x2370290)
#define UIPOPUP_CONQUESTTILEINFO_GET_SETTLEREWARDGRID_OFFSET UNITYSDK_OFFSET(0x236C1A0)
#define UIPOPUP_CONQUESTTILEINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2370760)
#define UIPOPUP_CONQUESTTILEINFO_REQUESTUPGRADE_OFFSET UNITYSDK_OFFSET(0x2370860)

	inline static constexpr unsigned int UIPopup_ConquestTileInfo_TypeDefinitionIndex = 5087;

	class UIPopup_ConquestTileInfo : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* rankInfoButton; // 0xE0
		UILabel* titleLabel; // 0xE8
		UILabel* tileTypeLabel; // 0xF0
		UILabel* tileTypeNotConquestedLabel; // 0xF8
		UILabel* levelLabel; // 0x100
		UISprite* maxLevelSprite; // 0x108
		UITexture* tileImage; // 0x110
		::UnityEngine::Transform* costInfoBG; // 0x118
		UISprite* costIcon; // 0x120
		UILabel* costLabel; // 0x128
		UILabel* stageStepLabel; // 0x130
		UILabel* stageNameLabel; // 0x138
		::UnityEngine::GameObject* upgradeCostInfo; // 0x140
		UISprite* upgradeCostIcon; // 0x148
		UILabel* upgradeCostLabel; // 0x150
		MXButton* upgradeButtonOn; // 0x158
		MXButton* upgradeButtonOff; // 0x160
		UILabel* upgradeButtonNotice; // 0x168
		MXButton* okButton; // 0x170
		UILabel* actionRequiredResourceLabel; // 0x178
		UILabel* manageRewardLabel; // 0x180
		UILabel* actionBuffLabel; // 0x188
		UILabel* erosionPenaltyTitleLabel; // 0x190
		::UnityEngine::GameObject* settleRewardRoot; // 0x198
		UISmallParcelCard* settleParcelPref; // 0x1A0
		UIGrid* settleRewardGrid; // 0x1A8
		UILabel* settleRewardEmptyLabel; // 0x1B0
		::UnityEngine::GameObject* settleRewardRoot_Type2; // 0x1B8
		UISmallParcelCard* settleParcelPref_Type2; // 0x1C0
		UIGrid* settleRewardGrid_Type2; // 0x1C8
		UILabel* settleRewardEmptyLabel_Type2; // 0x1D0
		UISmallParcelCard* erosionParcelPref_Type2; // 0x1D8
		UIGrid* erosionGrid_Type2; // 0x1E0
		UILabel* erosionEmptyLabel_Type2; // 0x1E8
		::UnityEngine::GameObject* manageRewardRoot; // 0x1F0
		UISmallParcelCard* manageParcelPref; // 0x1F8
		UIGrid* manageRewardGrid; // 0x200
		UILabel* manageRewardEmptyLabel; // 0x208
		UIScrollView* manageRewardListScroll; // 0x210
		::UnityEngine::GameObject* BuffBonusInfoOn; // 0x218
		::UnityEngine::GameObject* BuffBonusInfoOff; // 0x220
		::Il2CppArray<::System::Object*>* schoolBonusIcons; // 0x228
		::Il2CppArray<::System::Object*>* schoolBuffIcons; // 0x230
		Il2CppObject* settleRewardParcels; // 0x238
		Il2CppObject* erodedRewardParcels; // 0x240
		Il2CppObject* manageRewardParcels; // 0x248
		::MX::Conquest::ConquestTile* selectedTileData; // 0x250
		::MX::Data::Excel::ConquestTileExcel* thisTileExcel; // 0x258
		::MX::GameLogic::DBModel::ConquestTileDB* tileDB; // 0x268
		::MX::Data::ConquestData* conquestData; // 0x270
		UIConquest* uiConquest; // 0x278
		ConquestUpgradeBaseNetworkMessage* messageCache; // 0x280
		::System::Boolean showErosionInfo; // 0x288

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::LocalizeData* get_localData()
		{
			return ((::MX::Data::LocalizeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_GET_LOCALDATA_OFFSET))(nullptr);
		}

		::System::Void SetSettleRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETSETTLEREWARDS_OFFSET))(nullptr);
		}

		::System::Boolean HandleConquestUpgradeBaseNetworkMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_HANDLECONQUESTUPGRADEBASENETWORKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUpgradeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETUPGRADEUI_OFFSET))(nullptr);
		}

		::System::Void SetTileTypeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETTILETYPEUI_OFFSET))(nullptr);
		}

		::System::Void OnClickUpgrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_ONCLICKUPGRADE_OFFSET))(nullptr);
		}

		::System::Void SetSchoolInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETSCHOOLINFO_OFFSET))(nullptr);
		}

		::System::Void SetStageInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_SettleRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_GET_SETTLEREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickRankInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_ONCLICKRANKINFO_OFFSET))(nullptr);
		}

		::System::Void _OnClickRankInfo_b__73_0(UIPopup_ConquestTileInfo_Detail* arg)
		{
			((::System::Void(*)(UIPopup_ConquestTileInfo_Detail*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO__ONCLICKRANKINFO_B__73_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Conquest::ConquestTile* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ManageRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_GET_MANAGEREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void OpenRewardPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_OPENREWARDPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetLocalizeText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETLOCALIZETEXT_OFFSET))(nullptr);
		}

		::System::Void _OpenRewardPopup_b__76_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO__OPENREWARDPOPUP_B__76_1_OFFSET))(nullptr);
		}

		::System::Void SetManageRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETMANAGEREWARDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetUIs()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETUIS_OFFSET))(nullptr);
		}

		::System::Void SetOkUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETOKUI_OFFSET))(nullptr);
		}

		::System::Void SetErodedRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETERODEDREWARDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_CO_LOADING_OFFSET))(nullptr);
		}

		Il2CppObject* get_ErodedRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_GET_ERODEDREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO___N__0_OFFSET))(nullptr);
		}

		::System::Void _OpenRewardPopup_b__76_0(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO__OPENREWARDPOPUP_B__76_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		UISmallParcelCard* get_SettleParcelPref()
		{
			return ((UISmallParcelCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_GET_SETTLEPARCELPREF_OFFSET))(nullptr);
		}

		::System::Void SetLevelInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_SETLEVELINFO_OFFSET))(nullptr);
		}

		UIGrid* get_SettleRewardGrid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_GET_SETTLEREWARDGRID_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RequestUpgrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTTILEINFO_REQUESTUPGRADE_OFFSET))(nullptr);
		}

	};

