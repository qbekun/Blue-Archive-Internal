#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UIPanel;
class UIScrollView;
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Coroutine; }
class UITexture;
class UIWorldRaidLobbySeasonInfo;
class UIWorldRaidSeasonOption;
namespace UnityEngine { class Animation; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class BGMPlayInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWORLDRAIDLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFF440)
#define UIWORLDRAIDLOBBY__CREATESTACKUI_B__39_0_OFFSET UNITYSDK_OFFSET(0xBFF500)
#define UIWORLDRAIDLOBBY_GETLOCATIONPANEL_OFFSET UNITYSDK_OFFSET(0xBFF540)
#define UIWORLDRAIDLOBBY_GETSEASONOPTION_OFFSET UNITYSDK_OFFSET(0xBFF550)
#define UIWORLDRAIDLOBBY_RESETLOCATIONPANELPOS_OFFSET UNITYSDK_OFFSET(0xBFF560)
#define UIWORLDRAIDLOBBY__COAUTOSYNCLOBBY_G__GETFAKEHP|40_0_OFFSET UNITYSDK_OFFSET(0xBFF690)
#define UIWORLDRAIDLOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBFF710)
#define UIWORLDRAIDLOBBY_GETWORLDBOSSCLIENTFAKEHPDIC_OFFSET UNITYSDK_OFFSET(0xBFF8F0)
#define UIWORLDRAIDLOBBY_SETWORLDBOSSHPONENTER_OFFSET UNITYSDK_OFFSET(0xBF8D20)
#define UIWORLDRAIDLOBBY_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0xBFFB00)
#define UIWORLDRAIDLOBBY__LOADSEASONLOCATION_B__43_0_OFFSET UNITYSDK_OFFSET(0xBFFB30)
#define UIWORLDRAIDLOBBY_HANDLEWORLDRAIDLOBBYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC002A0)
#define UIWORLDRAIDLOBBY__SETSEASONPREFAB_B__45_1_OFFSET UNITYSDK_OFFSET(0xC003F0)
#define UIWORLDRAIDLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC00440)
#define UIWORLDRAIDLOBBY_COAUTOSYNCLOBBY_OFFSET UNITYSDK_OFFSET(0xC005D0)
#define UIWORLDRAIDLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0xC00660)
#define UIWORLDRAIDLOBBY_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC00670)
#define UIWORLDRAIDLOBBY_LOADSEASONLOCATION_OFFSET UNITYSDK_OFFSET(0xC00900)
#define UIWORLDRAIDLOBBY_GETLOCATIONANIMATION_OFFSET UNITYSDK_OFFSET(0xC00A50)
#define UIWORLDRAIDLOBBY_REFRESHLOBBYUI_OFFSET UNITYSDK_OFFSET(0xC00370)
#define UIWORLDRAIDLOBBY_UPDATE_OFFSET UNITYSDK_OFFSET(0xC01300)
#define UIWORLDRAIDLOBBY_REFRESH_OFFSET UNITYSDK_OFFSET(0xC006F0)
#define UIWORLDRAIDLOBBY__REFRESHONENTER_B__48_0_OFFSET UNITYSDK_OFFSET(0xC01690)
#define UIWORLDRAIDLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xC01740)
#define UIWORLDRAIDLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xC01F10)
#define UIWORLDRAIDLOBBY_SETWORLDBOSSHPONSYNC_OFFSET UNITYSDK_OFFSET(0xC02D70)
#define UIWORLDRAIDLOBBY_REFRESHONENTER_OFFSET UNITYSDK_OFFSET(0xC03380)
#define UIWORLDRAIDLOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0xC03B40)
#define UIWORLDRAIDLOBBY_GETWORLDRAIDZONES_OFFSET UNITYSDK_OFFSET(0xC03BD0)
#define UIWORLDRAIDLOBBY_REFRESHENTERPARCEL_OFFSET UNITYSDK_OFFSET(0xC03BE0)
#define UIWORLDRAIDLOBBY___N__1_OFFSET UNITYSDK_OFFSET(0xC03C80)
#define UIWORLDRAIDLOBBY_SETSEASONPREFAB_OFFSET UNITYSDK_OFFSET(0xC01F40)
#define UIWORLDRAIDLOBBY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC03D30)
#define UIWORLDRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xC03EB0)
#define UIWORLDRAIDLOBBY_SHOWENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0xC024E0)
#define UIWORLDRAIDLOBBY_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xC03FA0)
#define UIWORLDRAIDLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0xC03FC0)
#define UIWORLDRAIDLOBBY_REQUESTENTERPOPUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xC03FD0)
#define UIWORLDRAIDLOBBY_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xC04120)
#define UIWORLDRAIDLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xC04130)

	inline static constexpr unsigned int UIWorldRaidLobby_TypeDefinitionIndex = 8790;

	class UIWorldRaidLobby : public Il2CppObject
	{
	public:
		Il2CppObject* WorldRaidZones; // 0xD8
		::UnityEngine::Transform* LocationPanelTransform; // 0xE0
		UIPanel* LocationPanel; // 0xE8
		UIScrollView* LocationScrollView; // 0xF0
		::MX::Data::WorldRaidSeasonInfo* _SeasonInfo_k__BackingField; // 0xF8
		::UnityEngine::GameObject* locationObject; // 0x100
		::System::Boolean needChangeLocationPrefab; // 0x108
		::System::Boolean isLocationLoaded; // 0x109
		::UnityEngine::Coroutine* AutoSyncCorountine; // 0x110
		Il2CppObject* worldBossBackupHpDic; // 0x118
		Il2CppObject* WorldBossClientFakeHPDic; // 0x120
		UITexture* CurrentSeasonLobbyBG; // 0x128
		::UnityEngine::GameObject* LobbyBGGradient; // 0x130
		Il2CppObject* SeasonInfoPrefabs; // 0x138
		UIWorldRaidLobbySeasonInfo* CurrentSeasonInfoPrefab; // 0x140
		UIWorldRaidSeasonOption* seasonOption; // 0x148
		::UnityEngine::GameObject* OpenEventObject; // 0x150
		::UnityEngine::Animation* OpenEventAnimation; // 0x158

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CreateStackUI_b__39_0(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY__CREATESTACKUI_B__39_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetLocationPanel()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GETLOCATIONPANEL_OFFSET))(nullptr);
		}

		UIWorldRaidSeasonOption* GetSeasonOption()
		{
			return ((UIWorldRaidSeasonOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GETSEASONOPTION_OFFSET))(nullptr);
		}

		::System::Void ResetLocationPanelPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_RESETLOCATIONPANELPOS_OFFSET))(nullptr);
		}

		::System::Int64 _CoAutoSyncLobby_g__GetFakeHp|40_0(::System::Int64 arg, <>c__DisplayClass40_0&* arg2, <>c__DisplayClass40_1&* arg3)
		{
			return ((::System::Int64(*)(::System::Int64, <>c__DisplayClass40_0&*, <>c__DisplayClass40_1&*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY__COAUTOSYNCLOBBY_G__GETFAKEHP|40_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldBossClientFakeHPDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GETWORLDBOSSCLIENTFAKEHPDIC_OFFSET))(nullptr);
		}

		::System::Void SetWorldBossHpOnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_SETWORLDBOSSHPONENTER_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void _LoadSeasonLocation_b__43_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY__LOADSEASONLOCATION_B__43_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleWorldRaidLobbyResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_HANDLEWORLDRAIDLOBBYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetSeasonPrefab_b__45_1(UIWorldRaidLobbySeasonInfo* arg)
		{
			return ((::System::Boolean(*)(UIWorldRaidLobbySeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY__SETSEASONPREFAB_B__45_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoAutoSyncLobby()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_COAUTOSYNCLOBBY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Boolean HandleWorldRaidBossListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSeasonLocation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_LOADSEASONLOCATION_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* GetLocationAnimation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GETLOCATIONANIMATION_OFFSET))(nullptr);
		}

		::System::Void RefreshLobbyUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_REFRESHLOBBYUI_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void _RefreshOnEnter_b__48_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY__REFRESHONENTER_B__48_0_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetWorldBossHpOnSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_SETWORLDBOSSHPONSYNC_OFFSET))(nullptr);
		}

		::System::Void RefreshOnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_REFRESHONENTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldRaidZones()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GETWORLDRAIDZONES_OFFSET))(nullptr);
		}

		::System::Void RefreshEnterParcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_REFRESHENTERPARCEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY___N__1_OFFSET))(nullptr);
		}

		::System::Void SetSeasonPrefab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_SETSEASONPREFAB_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void ShowEnterScenario()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_SHOWENTERSCENARIO_OFFSET))(nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RequestEnterPopupCallBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_REQUESTENTERPOPUPCALLBACK_OFFSET))(nullptr);
		}

		::MX::Data::WorldRaidSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::WorldRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

	};

