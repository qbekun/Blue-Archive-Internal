#pragma once
#include "unitysdk.h"

class UIWorldRaidLobby;
class UIWorldRaidEnterParcel;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UIPopup_WorldRaidReward;
namespace MX::Data { class WorldRaidSeasonInfo; }

#define UIWORLDRAIDLOBBYSEASONINFO_GET_WORLDBOSSCLIENTFAKEHPDIC_OFFSET UNITYSDK_OFFSET(0xC06CD0)
#define UIWORLDRAIDLOBBYSEASONINFO__ONCLICKREWARD_B__20_0_OFFSET UNITYSDK_OFFSET(0xC06CF0)
#define UIWORLDRAIDLOBBYSEASONINFO_REFRESHENTERPARCEL_OFFSET UNITYSDK_OFFSET(0xC03C60)
#define UIWORLDRAIDLOBBYSEASONINFO_GET_WORLDRAIDZONES_OFFSET UNITYSDK_OFFSET(0xC06D50)
#define UIWORLDRAIDLOBBYSEASONINFO_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xC06D30)
#define UIWORLDRAIDLOBBYSEASONINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xC00AA0)
#define UIWORLDRAIDLOBBYSEASONINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC03C90)
#define UIWORLDRAIDLOBBYSEASONINFO_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0xC071E0)
#define UIWORLDRAIDLOBBYSEASONINFO_ONCLICKBOSSLIST_OFFSET UNITYSDK_OFFSET(0xC072D0)
#define UIWORLDRAIDLOBBYSEASONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xC07700)
#define UIWORLDRAIDLOBBYSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC07930)

	inline static constexpr unsigned int UIWorldRaidLobbySeasonInfo_TypeDefinitionIndex = 8794;

	class UIWorldRaidLobbySeasonInfo : public Il2CppObject
	{
	public:
		UIWorldRaidLobby* uiWorldRaidLobby; // 0x18
		UIWorldRaidEnterParcel* EnterParcel; // 0x20
		MXButton* BossListButton; // 0x28
		::UnityEngine::GameObject* BossListButtonAble; // 0x30
		::UnityEngine::GameObject* BossListButtonDisable; // 0x38
		::UnityEngine::Transform* RewardButtonTransform; // 0x40
		MXButton* RewardButton; // 0x48
		::UnityEngine::GameObject* RewardButtonDim; // 0x50
		::UnityEngine::GameObject* RewardReddot; // 0x58

		Il2CppObject* get_WorldBossClientFakeHPDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_GET_WORLDBOSSCLIENTFAKEHPDIC_OFFSET))(nullptr);
		}

		::System::Void _OnClickReward_b__20_0(UIPopup_WorldRaidReward* arg)
		{
			((::System::Void(*)(UIPopup_WorldRaidReward*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO__ONCLICKREWARD_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshEnterParcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_REFRESHENTERPARCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_WorldRaidZones()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_GET_WORLDRAIDZONES_OFFSET))(nullptr);
		}

		::MX::Data::WorldRaidSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::WorldRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIWorldRaidLobby* arg)
		{
			((::System::Void(*)(UIWorldRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_ONCLICKREWARD_OFFSET))(nullptr);
		}

		::System::Void OnClickBossList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_ONCLICKBOSSLIST_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDLOBBYSEASONINFO_.CTOR_OFFSET))(nullptr);
		}

	};

