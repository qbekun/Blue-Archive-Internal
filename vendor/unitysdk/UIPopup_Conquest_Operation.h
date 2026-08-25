#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class ButtonActivator;
namespace UnityEngine { class Coroutine; }
class UIAdmissionDisplay;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class UIGrid;
class UIScrollView;
class UISmallParcelCard;
class ConquestOperationEchelonInfo;
class GroupBuffBonusUI;
namespace MX::Conquest { class ConquestTile; }
namespace MX::Conquest { class ConquestUnit; }
namespace MX::Data { class ConquestData; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
class UIConquest;
class ConquestManageBaseResponseMessage;
namespace MX::Data { class ConquestGroupBonusExcelData; }
class UISweepResult;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class LocalizeData; }

#define UIPOPUP_CONQUEST_OPERATION_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2375150)
#define UIPOPUP_CONQUEST_OPERATION_ONCLICKMINUSBUTTON_OFFSET UNITYSDK_OFFSET(0x2375380)
#define UIPOPUP_CONQUEST_OPERATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x23758B0)
#define UIPOPUP_CONQUEST_OPERATION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23762A0)
#define UIPOPUP_CONQUEST_OPERATION_ISANYSTUDENTDEPLOYEDFORMANAGE_OFFSET UNITYSDK_OFFSET(0x2376F00)
#define UIPOPUP_CONQUEST_OPERATION_CHECKANYSTUDENTDEPLOYEDFORMANAGE_OFFSET UNITYSDK_OFFSET(0x2376FB0)
#define UIPOPUP_CONQUEST_OPERATION__OPENREWARDPOPUP_B__67_0_OFFSET UNITYSDK_OFFSET(0x2377630)
#define UIPOPUP_CONQUEST_OPERATION_SETDATA_OFFSET UNITYSDK_OFFSET(0x2377660)
#define UIPOPUP_CONQUEST_OPERATION_OPENECHELONEDITPOPUP_OFFSET UNITYSDK_OFFSET(0x2377D60)
#define UIPOPUP_CONQUEST_OPERATION_OPENREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0x2377D90)
#define UIPOPUP_CONQUEST_OPERATION_GETGROUPBONUSAPPLIEDSTUDENTS_OFFSET UNITYSDK_OFFSET(0x2377EB0)
#define UIPOPUP_CONQUEST_OPERATION_REFRESHOPERATIONCOUNTSTATE_OFFSET UNITYSDK_OFFSET(0x23753F0)
#define UIPOPUP_CONQUEST_OPERATION_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x23780D0)
#define UIPOPUP_CONQUEST_OPERATION_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0x23771B0)
#define UIPOPUP_CONQUEST_OPERATION_REFRESHSCHOOLBUFF_OFFSET UNITYSDK_OFFSET(0x2377D20)
#define UIPOPUP_CONQUEST_OPERATION_GETMAXOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x2377C60)
#define UIPOPUP_CONQUEST_OPERATION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2378180)
#define UIPOPUP_CONQUEST_OPERATION_HANDLECONQUESTMANAGEBASENETWORKMESSAGE_OFFSET UNITYSDK_OFFSET(0x2378210)
#define UIPOPUP_CONQUEST_OPERATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23782D0)
#define UIPOPUP_CONQUEST_OPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2378550)
#define UIPOPUP_CONQUEST_OPERATION_ONCLICKMINBUTTON_OFFSET UNITYSDK_OFFSET(0x2378570)
#define UIPOPUP_CONQUEST_OPERATION_ONCLICKSTARTBUTTON_OFFSET UNITYSDK_OFFSET(0x2378580)
#define UIPOPUP_CONQUEST_OPERATION_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x23762E0)
#define UIPOPUP_CONQUEST_OPERATION__OPENREWARDPOPUP_B__67_1_OFFSET UNITYSDK_OFFSET(0x2379180)
#define UIPOPUP_CONQUEST_OPERATION_GETBONUSVALUEPAIR_OFFSET UNITYSDK_OFFSET(0x2378F80)
#define UIPOPUP_CONQUEST_OPERATION_ONCLICKPLUSBUTTON_OFFSET UNITYSDK_OFFSET(0x2379260)
#define UIPOPUP_CONQUEST_OPERATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23792D0)
#define UIPOPUP_CONQUEST_OPERATION___N__0_OFFSET UNITYSDK_OFFSET(0x23795D0)
#define UIPOPUP_CONQUEST_OPERATION_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23795E0)
#define UIPOPUP_CONQUEST_OPERATION_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x2379090)
#define UIPOPUP_CONQUEST_OPERATION_SETLOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x2379660)
#define UIPOPUP_CONQUEST_OPERATION_CO_LONGPRESSOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x2379AE0)
#define UIPOPUP_CONQUEST_OPERATION_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2379B80)
#define UIPOPUP_CONQUEST_OPERATION_HANDLECONQUESTDEPLOYECHELONNETWORKMESSAGE_OFFSET UNITYSDK_OFFSET(0x2379BA0)
#define UIPOPUP_CONQUEST_OPERATION_SETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x2379C50)
#define UIPOPUP_CONQUEST_OPERATION_ONCLICKMAXBUTTON_OFFSET UNITYSDK_OFFSET(0x2379E50)
#define UIPOPUP_CONQUEST_OPERATION_ONCLICKPOPUPRECOMMENDSCHOOL_OFFSET UNITYSDK_OFFSET(0x2379E70)
#define UIPOPUP_CONQUEST_OPERATION_ONPRESSMINUSBUTTON_OFFSET UNITYSDK_OFFSET(0x2379F70)
#define UIPOPUP_CONQUEST_OPERATION_ONPRESSPLUSBUTTON_OFFSET UNITYSDK_OFFSET(0x237A010)
#define UIPOPUP_CONQUEST_OPERATION_GET_LOCALDATA_OFFSET UNITYSDK_OFFSET(0x2379A60)
#define UIPOPUP_CONQUEST_OPERATION_GETFILTEREDSTAGEREWARDS_OFFSET UNITYSDK_OFFSET(0x237A0B0)
#define UIPOPUP_CONQUEST_OPERATION__SETDATA_B__50_0_OFFSET UNITYSDK_OFFSET(0x237A1E0)
#define UIPOPUP_CONQUEST_OPERATION_SETECHELONDATA_OFFSET UNITYSDK_OFFSET(0x237A210)

	inline static constexpr unsigned int UIPopup_Conquest_Operation_TypeDefinitionIndex = 5105;

	class UIPopup_Conquest_Operation : public Il2CppObject
	{
	public:
		MXButton* CloseButton; // 0xD8
		::Il2CppArray<::System::Object*>* mainCharacter; // 0xE0
		::Il2CppArray<::System::Object*>* supportCharacter; // 0xE8
		UILabel* stageStepLabel; // 0xF0
		UILabel* stageNameLabel; // 0xF8
		UILabel* countLabel; // 0x100
		UILabel* currencyLabel; // 0x108
		ButtonActivator* plusButton; // 0x110
		ButtonActivator* minusButton; // 0x118
		ButtonActivator* maxButton; // 0x120
		ButtonActivator* minButton; // 0x128
		::System::Boolean fromMapInfo; // 0x130
		::System::Int64 maxOperationCount; // 0x138
		::System::Int64 currentOperationCount; // 0x140
		::UnityEngine::Coroutine* longPressCoroutine; // 0x148
		::System::Single operationCountAccumSpeed; // 0x150
		UIAdmissionDisplay* apAdmissionDisplay; // 0x158
		::MX::GameLogic::Parcel::ParcelInfo* parcelInfo; // 0x160
		UIGrid* rewardGrid; // 0x168
		UIScrollView* rewardListScrollView; // 0x170
		UISmallParcelCard* rewardParcelPref; // 0x178
		UILabel* rewardEmptyLabel; // 0x180
		ConquestOperationEchelonInfo* operationEchelonInfo; // 0x188
		GroupBuffBonusUI* groupBuffBonusUI; // 0x190
		MXButton* StartButton; // 0x198
		MXButton* StartButtonDisabled; // 0x1A0
		UILabel* titleLabel; // 0x1A8
		UILabel* actionEchelonLabel; // 0x1B0
		UILabel* actionSweepLabel; // 0x1B8
		Il2CppObject* rewardParcels; // 0x1C0
		::MX::Conquest::ConquestTile* selectedTileData; // 0x1C8
		::MX::Conquest::ConquestUnit* selectedUnit; // 0x1D0
		::MX::Data::ConquestData* conquestData; // 0x1D8
		::MX::GameLogic::DBModel::ConquestTileDB* conquestTileDB; // 0x1E0
		UIConquest* uiConquest; // 0x1E8
		Il2CppObject* totalStageRewards; // 0x1F0
		ConquestManageBaseResponseMessage* messageCache; // 0x1F8
		::MX::Data::ConquestGroupBonusExcelData* bonusExcelData; // 0x200

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickMinusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONCLICKMINUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAnyStudentDeployedForManage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ISANYSTUDENTDEPLOYEDFORMANAGE_OFFSET))(nullptr);
		}

		::System::Void CheckAnyStudentDeployedForManage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHECKANYSTUDENTDEPLOYEDFORMANAGE_OFFSET))(nullptr);
		}

		::System::Void _OpenRewardPopup_b__67_0(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION__OPENREWARDPOPUP_B__67_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Conquest::ConquestTile* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OpenEchelonEditPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_OPENECHELONEDITPOPUP_OFFSET))(nullptr);
		}

		::System::Void OpenRewardPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_OPENREWARDPOPUP_OFFSET))(nullptr);
		}

		::System::Int32 GetGroupBonusAppliedStudents()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_GETGROUPBONUSAPPLIEDSTUDENTS_OFFSET))(nullptr);
		}

		::System::Void RefreshOperationCountState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_REFRESHOPERATIONCOUNTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Void RefreshSchoolBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_REFRESHSCHOOLBUFF_OFFSET))(nullptr);
		}

		::System::Int64 GetMaxOperationCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_GETMAXOPERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean HandleConquestManageBaseNetworkMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_HANDLECONQUESTMANAGEBASENETWORKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickMinButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONCLICKMINBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickStartButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONCLICKSTARTBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_SETREWARDS_OFFSET))(nullptr);
		}

		::System::Void _OpenRewardPopup_b__67_1(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION__OPENREWARDPOPUP_B__67_1_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBonusValuePair(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_GETBONUSVALUEPAIR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickPlusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONCLICKPLUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION___N__0_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void SetLocalizeText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_SETLOCALIZETEXT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LongPressOperationCount(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CO_LONGPRESSOPERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleConquestDeployEchelonNetworkMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_HANDLECONQUESTDEPLOYECHELONNETWORKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStageInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_SETSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickMaxButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONCLICKMAXBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickPopupRecommendSchool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONCLICKPOPUPRECOMMENDSCHOOL_OFFSET))(nullptr);
		}

		::System::Void OnPressMinusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONPRESSMINUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnPressPlusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_ONPRESSPLUSBUTTON_OFFSET))(nullptr);
		}

		::MX::Data::LocalizeData* get_localData()
		{
			return ((::MX::Data::LocalizeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_GET_LOCALDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetFilteredStageRewards(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_GETFILTEREDSTAGEREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_b__50_0(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION__SETDATA_B__50_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetEchelonData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_SETECHELONDATA_OFFSET))(nullptr);
		}

	};

