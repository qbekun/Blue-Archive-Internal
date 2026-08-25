#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::Conquest { class ConquestTileMap; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }

#define CONQUESTTILEMAPDATACONTAINER_GETALLPLAYABLETILELIST_OFFSET UNITYSDK_OFFSET(0x1BE4ED0)
#define CONQUESTTILEMAPDATACONTAINER_GETALLSTEPDEFEATEDANDTOTALENEMY_OFFSET UNITYSDK_OFFSET(0x1BE5290)
#define CONQUESTTILEMAPDATACONTAINER_GETCONQUESTEDANDALLBASETILECOUNT_OFFSET UNITYSDK_OFFSET(0x1BE5AF0)
#define CONQUESTTILEMAPDATACONTAINER_GETCONQUESTEDTILELIST_OFFSET UNITYSDK_OFFSET(0x1BE6420)
#define CONQUESTTILEMAPDATACONTAINER_GETCONQUESTTILEMAP_OFFSET UNITYSDK_OFFSET(0x1BE6940)
#define CONQUESTTILEMAPDATACONTAINER_TRYGETCONQUESTTILEEXCELBYTILEDB_OFFSET UNITYSDK_OFFSET(0x1BE69F0)
#define CONQUESTTILEMAPDATACONTAINER_GETCALCULATEREWARDEDANDERODEDTILECOUNT_OFFSET UNITYSDK_OFFSET(0x1BE6C30)
#define CONQUESTTILEMAPDATACONTAINER_GETALLSTEPCONQUESTEDANDTOTALTILECOUNT_OFFSET UNITYSDK_OFFSET(0x1BE7410)
#define CONQUESTTILEMAPDATACONTAINER_GETSYNCSTATEDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1BE7E10)
#define CONQUESTTILEMAPDATACONTAINER_GETMAPENTERDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1BE8400)
#define CONQUESTTILEMAPDATACONTAINER_GETSYNCSTATEDISPLAYINFOSFROMOTHERMAPS_OFFSET UNITYSDK_OFFSET(0x1BE89D0)
#define CONQUESTTILEMAPDATACONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9340)
#define CONQUESTTILEMAPDATACONTAINER_ISSAMEMAP_OFFSET UNITYSDK_OFFSET(0x1BE9210)
#define CONQUESTTILEMAPDATACONTAINER_GETSTEP_OFFSET UNITYSDK_OFFSET(0x1BE6B80)

	inline static constexpr unsigned int ConquestTileMapDataContainer_TypeDefinitionIndex = 1535;

	class ConquestTileMapDataContainer : public Il2CppObject
	{
	public:
		Il2CppObject* conquestTileMapDatas; // 0x10
		Il2CppObject* datasByDifficultyAndStep; // 0x18
		Il2CppObject* stepByDifficultyAndTileUniqueId; // 0x20
		Il2CppObject* tileMapDatasByDifficulty; // 0x28
		::System::Int64 eventContentId; // 0x30

		Il2CppObject* GetAllPlayableTileList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETALLPLAYABLETILELIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllStepDefeatedAndTotalEnemy(::FlatData::StageDifficulty* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETALLSTEPDEFEATEDANDTOTALENEMY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConquestedAndAllBaseTileCount(::FlatData::StageDifficulty* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETCONQUESTEDANDALLBASETILECOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConquestedTileList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETCONQUESTEDTILELIST_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMap* GetConquestTileMap(::FlatData::StageDifficulty* arg, ::System::Int32 arg2)
		{
			return ((::MX::Conquest::ConquestTileMap*(*)(::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETCONQUESTTILEMAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetConquestTileExcelByTileDB(::MX::GameLogic::DBModel::ConquestTileDB* arg, ::MX::Conquest::ConquestTile&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::MX::Conquest::ConquestTile&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_TRYGETCONQUESTTILEEXCELBYTILEDB_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetCalculateRewardedAndErodedTileCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETCALCULATEREWARDEDANDERODEDTILECOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllStepConquestedAndTotalTileCount(::FlatData::StageDifficulty* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETALLSTEPCONQUESTEDANDTOTALTILECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetSyncStateDisplayInfo(::FlatData::StageDifficulty* arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETSYNCSTATEDISPLAYINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetMapEnterDisplayInfo(::FlatData::StageDifficulty* arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETMAPENTERDISPLAYINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetSyncStateDisplayInfosFromOtherMaps(::FlatData::StageDifficulty* arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETSYNCSTATEDISPLAYINFOSFROMOTHERMAPS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSameMap(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_ISSAMEMAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetStep(::FlatData::StageDifficulty* arg, ::System::Int64 arg2)
		{
			return ((::System::Int32(*)(::FlatData::StageDifficulty*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATACONTAINER_GETSTEP_OFFSET))(arg, arg2, nullptr);
		}

	};

