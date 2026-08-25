#pragma once
#include "unitysdk.h"

class UIBattlePassMissionTab;
class UIMissionScrollController;
class ButtonActivator;
namespace UnityEngine { class GameObject; }
class BattlePassMissionObject;
namespace FlatData { class MissionCategory; }
class BattlePassTask;
namespace MX::Data { class BattlePassSeasonInfo; }

#define UIBATTLEPASSMISSIONSCROLL_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x2247030)
#define UIBATTLEPASSMISSIONSCROLL_GET_BATTLEPASSMISSIONOBJECT_OFFSET UNITYSDK_OFFSET(0x2247550)
#define UIBATTLEPASSMISSIONSCROLL_ONCLICKRECEIVEALLBUTTONACTIVATOR_OFFSET UNITYSDK_OFFSET(0x22475D0)
#define UIBATTLEPASSMISSIONSCROLL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2247730)
#define UIBATTLEPASSMISSIONSCROLL_ONTABSWITCHED_OFFSET UNITYSDK_OFFSET(0x2247740)
#define UIBATTLEPASSMISSIONSCROLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x2247780)
#define UIBATTLEPASSMISSIONSCROLL_GET_TASK_OFFSET UNITYSDK_OFFSET(0x22476A0)
#define UIBATTLEPASSMISSIONSCROLL_REFRESH_OFFSET UNITYSDK_OFFSET(0x22468D0)
#define UIBATTLEPASSMISSIONSCROLL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2246520)
#define UIBATTLEPASSMISSIONSCROLL_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x22476E0)
#define UIBATTLEPASSMISSIONSCROLL_REFRESHSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x2247070)

	inline static constexpr unsigned int UIBattlePassMissionScroll_TypeDefinitionIndex = 4503;

	class UIBattlePassMissionScroll : public Il2CppObject
	{
	public:
		UIBattlePassMissionTab* Tab; // 0x18
		UIMissionScrollController* ScrollController; // 0x20
		ButtonActivator* ReceiveAllButtonActivator; // 0x28
		::UnityEngine::GameObject* EmptyRoot; // 0x30

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_RESETSCROLL_OFFSET))(nullptr);
		}

		BattlePassMissionObject* get_BattlePassMissionObject()
		{
			return ((BattlePassMissionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_GET_BATTLEPASSMISSIONOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveAllButtonActivator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_ONCLICKRECEIVEALLBUTTONACTIVATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabSwitched(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_ONTABSWITCHED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_AWAKE_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_INITIALIZE_OFFSET))(nullptr);
		}

		::MX::Data::BattlePassSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::BattlePassSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void RefreshScrollItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLL_REFRESHSCROLLITEMS_OFFSET))(nullptr);
		}

	};

