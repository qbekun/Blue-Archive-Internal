#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UITexture;
class UISlider;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class ButtonActivator;
class UIEmblemParcel;
namespace UnityEngine { class Coroutine; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class EchelonObject;
namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define UIARENAACCOUNTINFO_FILLARENADISABLE_OFFSET UNITYSDK_OFFSET(0x21F08E0)
#define UIARENAACCOUNTINFO_GET_TIMEREWARDMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0x21F1040)
#define UIARENAACCOUNTINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x21EE960)
#define UIARENAACCOUNTINFO_GET_UPDATEPERSECONDCOROUTINE_OFFSET UNITYSDK_OFFSET(0x21F1E90)
#define UIARENAACCOUNTINFO_SET_UPDATEPERSECONDCOROUTINE_OFFSET UNITYSDK_OFFSET(0x21F1EA0)
#define UIARENAACCOUNTINFO_ONCLICKDAILYREWARD_OFFSET UNITYSDK_OFFSET(0x21F1EC0)
#define UIARENAACCOUNTINFO_SETARENABUTTONS_OFFSET UNITYSDK_OFFSET(0x21F1DD0)
#define UIARENAACCOUNTINFO_HANDLEARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21F1F50)
#define UIARENAACCOUNTINFO_HANDLEARENAOPPONENTLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21F1F90)
#define UIARENAACCOUNTINFO_FILLARENAINFO_OFFSET UNITYSDK_OFFSET(0x21F1460)
#define UIARENAACCOUNTINFO_REFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x21F0D20)
#define UIARENAACCOUNTINFO_GET_CURRENTTIMEREWARD_OFFSET UNITYSDK_OFFSET(0x21F1FA0)
#define UIARENAACCOUNTINFO_COPLAYRANKFX_OFFSET UNITYSDK_OFFSET(0x21F1FB0)
#define UIARENAACCOUNTINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21F2040)
#define UIARENAACCOUNTINFO_SET_CURRENTTIMEREWARD_OFFSET UNITYSDK_OFFSET(0x21F0C50)
#define UIARENAACCOUNTINFO_FILLACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x21F1070)
#define UIARENAACCOUNTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x21F2330)
#define UIARENAACCOUNTINFO_GETSERVERIDS_OFFSET UNITYSDK_OFFSET(0x21F27E0)
#define UIARENAACCOUNTINFO_ONCLICKTIMEREWARD_OFFSET UNITYSDK_OFFSET(0x21F2BE0)
#define UIARENAACCOUNTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F2C70)
#define UIARENAACCOUNTINFO_COUPDATEPERSECOND_OFFSET UNITYSDK_OFFSET(0x21F22C0)
#define UIARENAACCOUNTINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x21EF600)
#define UIARENAACCOUNTINFO_ONCLICKRANKINFO_OFFSET UNITYSDK_OFFSET(0x21F2CA0)
#define UIARENAACCOUNTINFO_CREATEECHELON_OFFSET UNITYSDK_OFFSET(0x21F2E00)
#define UIARENAACCOUNTINFO_HANDLEARENADAILYREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21F32D0)
#define UIARENAACCOUNTINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21F3400)
#define UIARENAACCOUNTINFO_ONCLICKFORMATION_OFFSET UNITYSDK_OFFSET(0x21F3670)
#define UIARENAACCOUNTINFO_ONCLICKHISTORY_OFFSET UNITYSDK_OFFSET(0x21F37D0)
#define UIARENAACCOUNTINFO_PLAYRANKFX_OFFSET UNITYSDK_OFFSET(0x21ED9A0)

	inline static constexpr unsigned int UIArenaAccountInfo_TypeDefinitionIndex = 4258;

	class UIArenaAccountInfo : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x18
		UITexture* rankIcon; // 0x20
		UISlider* expGauge; // 0x28
		UILabel* levelLabel; // 0x30
		UILabel* nameLabel; // 0x38
		UILabel* expLabel; // 0x40
		::UnityEngine::GameObject* normalLevelExp; // 0x48
		::UnityEngine::GameObject* maxLevelExp; // 0x50
		UILabel* rankLabel; // 0x58
		UILabel* timeRewardLabel; // 0x60
		UILabel* cumulativeTimeRewardLabel; // 0x68
		UILabel* dailyRewardTimeLabel; // 0x70
		UILabel* ticketAmountLabel; // 0x78
		UILabel* coolTimeLabel; // 0x80
		MXButton* rankInfoButton; // 0x88
		MXButton* historyButton; // 0x90
		MXButton* formationButton; // 0x98
		ButtonActivator* timeRewardButton; // 0xA0
		ButtonActivator* dailyRewardButton; // 0xA8
		::UnityEngine::GameObject* rankFx; // 0xB0
		UIEmblemParcel* emblemParcel; // 0xB8
		::System::Int64 timeRewardPerMinute; // 0xC0
		::System::Int64 currentTimeReward; // 0xC8
		::System::TimeSpan* dailyRewardCoolTime; // 0xD0
		::System::TimeSpan* battleCoolTime; // 0xD8
		::UnityEngine::Coroutine* _updatePerSecondCoroutine_k__BackingField; // 0xE0
		::System::Boolean isArenaOpen; // 0xE8
		::UnityEngine::Coroutine* rankFxCoroutine; // 0xF0

		::System::Void FillArenaDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_FILLARENADISABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeRewardMaxAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_GET_TIMEREWARDMAXAMOUNT_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_REFRESH_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* get_updatePerSecondCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_GET_UPDATEPERSECONDCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void set_updatePerSecondCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_SET_UPDATEPERSECONDCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDailyReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_ONCLICKDAILYREWARD_OFFSET))(nullptr);
		}

		::System::Void SetArenaButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_SETARENABUTTONS_OFFSET))(nullptr);
		}

		::System::Boolean HandleArenaCumulativeTimeRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_HANDLEARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleArenaOpponentListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_HANDLEARENAOPPONENTLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void FillArenaInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_FILLARENAINFO_OFFSET))(nullptr);
		}

		::System::Void RefreshTimer(UILabel* arg, ::System::DateTime* arg2, ::System::Boolean arg3, ButtonActivator* arg4)
		{
			((::System::Void(*)(UILabel*, ::System::DateTime*, ::System::Boolean, ButtonActivator*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_REFRESHTIMER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 get_CurrentTimeReward()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_GET_CURRENTTIMEREWARD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayRankFx()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_COPLAYRANKFX_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTimeReward(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_SET_CURRENTTIMEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void FillAccountInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_FILLACCOUNTINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void GetServerIds(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_GETSERVERIDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickTimeReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_ONCLICKTIMEREWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdatePerSecond()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_COUPDATEPERSECOND_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRankInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_ONCLICKRANKINFO_OFFSET))(nullptr);
		}

		EchelonObject* CreateEchelon(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			return ((EchelonObject*(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_CREATEECHELON_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleArenaDailyRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_HANDLEARENADAILYREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickFormation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_ONCLICKFORMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_ONCLICKHISTORY_OFFSET))(nullptr);
		}

		::System::Void PlayRankFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAACCOUNTINFO_PLAYRANKFX_OFFSET))(nullptr);
		}

	};

