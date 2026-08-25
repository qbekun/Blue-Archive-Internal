#pragma once
#include "unitysdk.h"

class UIEliminateRaidLobby;
class UIEliminateRaidSeasonInfo;
namespace UnityEngine { class GameObject; }
class UIEliminateRaidTargetBoss;
namespace FlatData { class RaidSeasonType; }

#define UIELIMINATERAIDLOBBY_MAPVIEW_ONCLICKTARGETBOSS_OFFSET UNITYSDK_OFFSET(0x23E3E30)
#define UIELIMINATERAIDLOBBY_MAPVIEW_REFRESHRANKING_OFFSET UNITYSDK_OFFSET(0x23DFC00)
#define UIELIMINATERAIDLOBBY_MAPVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E3EA0)
#define UIELIMINATERAIDLOBBY_MAPVIEW_REFRESH_OFFSET UNITYSDK_OFFSET(0x23E0670)

	inline static constexpr unsigned int UIEliminateRaidLobby_MapView_TypeDefinitionIndex = 5380;

	class UIEliminateRaidLobby_MapView : public Il2CppObject
	{
	public:
		UIEliminateRaidLobby* lobby; // 0x18
		Il2CppObject* targetBosses; // 0x20
		UIEliminateRaidSeasonInfo* seasonInfoUI; // 0x28
		::UnityEngine::GameObject* SeasonCloseObject; // 0x30

		::System::Void OnClickTargetBoss(UIEliminateRaidTargetBoss* arg)
		{
			((::System::Void(*)(UIEliminateRaidTargetBoss*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_MAPVIEW_ONCLICKTARGETBOSS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_MAPVIEW_REFRESHRANKING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_MAPVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::FlatData::RaidSeasonType* arg)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_MAPVIEW_REFRESH_OFFSET))(arg, nullptr);
		}

	};

