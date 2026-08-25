#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTileMapCommonEventSetting; }
namespace MX::Conquest { class ConquestTileMap; }
namespace FlatData { class StageDifficulty; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATESTEPCOMPLETEEVENTS_OFFSET UNITYSDK_OFFSET(0x142EF10)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATETILEUPGRADEEVENTS_OFFSET UNITYSDK_OFFSET(0x142F840)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1426BC0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATETILECONQUERREWARDEVENTS_OFFSET UNITYSDK_OFFSET(0x142FDC0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_SET_SETTING_OFFSET UNITYSDK_OFFSET(0x142FF70)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEEROSIONEVENTS_OFFSET UNITYSDK_OFFSET(0x142FF80)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GETTRIGGEREDCONQUESTTILEMAPEVENTS_OFFSET UNITYSDK_OFFSET(0x1430290)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATECOMMONEVENTS_OFFSET UNITYSDK_OFFSET(0x1430840)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATETILECONQUEREVENTS_OFFSET UNITYSDK_OFFSET(0x1430B20)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEBOSSOPENEVENTS_OFFSET UNITYSDK_OFFSET(0x1431170)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEMASSEROSIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1431A20)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEEROSIONREMOVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1431C80)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1430950)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GET_SETTING_OFFSET UNITYSDK_OFFSET(0x1432140)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEUNEXPECTEDEVENTEVENTS_OFFSET UNITYSDK_OFFSET(0x1431F90)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestTileMapCommonEventContainer_TypeDefinitionIndex = 14881;

	class ConquestTileMapCommonEventContainer : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestTileMapCommonEventSetting* _Setting_k__BackingField; // 0x10
		Il2CppObject* tileConquerEventsByTileUniqueId; // 0x18
		Il2CppObject* tileUpgradeEventsByTileUniqueId; // 0x20
		Il2CppObject* tileConquerEventsByUnitGroup; // 0x28
		Il2CppObject* syncStateEvents; // 0x30
		Il2CppObject* mapEnterEvents; // 0x38
		Il2CppObject* massErosionEvents; // 0x40
		Il2CppObject* erosionEvents; // 0x48
		Il2CppObject* erosionRemoveEvents; // 0x50
		Il2CppObject* UnexpectedEventEvents; // 0x58
		Il2CppObject* tileConquerEvents; // 0x60

		::System::Void GenerateStepCompleteEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATESTEPCOMPLETEEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateTileUpgradeEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATETILEUPGRADEEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GenerateTileConquerRewardEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATETILECONQUERREWARDEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Setting(::MX::Conquest::ConquestTileMapEvent::ConquestTileMapCommonEventSetting* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestTileMapCommonEventSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_SET_SETTING_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateErosionEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEEROSIONEVENTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTriggeredConquestTileMapEvents(::FlatData::StageDifficulty* arg, Il2CppObject* arg2, ::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg3, ::MX::Conquest::ConquestTileMap* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, Il2CppObject*, ::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::MX::Conquest::ConquestTileMap*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GETTRIGGEREDCONQUESTTILEMAPEVENTS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void GenerateCommonEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATECOMMONEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateTileConquerEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATETILECONQUEREVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateBossOpenEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEBOSSOPENEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateMassErosionEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEMASSEROSIONEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateErosionRemoveEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEEROSIONREMOVEEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_CLEAR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestTileMapCommonEventSetting* get_Setting()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestTileMapCommonEventSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GET_SETTING_OFFSET))(nullptr);
		}

		::System::Void GenerateUnexpectedEventEvents(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTCONTAINER_GENERATEUNEXPECTEDEVENTEVENTS_OFFSET))(arg, nullptr);
		}

	};
}

