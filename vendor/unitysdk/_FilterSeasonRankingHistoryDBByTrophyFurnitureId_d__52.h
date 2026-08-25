#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidSeasonRankingHistoryDB; }
namespace MX::Data { class RaidData; }
namespace FlatData { class ContentType; }

#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_.CTOR_OFFSET UNITYSDK_OFFSET(0x192ADE0)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x19304A0)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1930560)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1930CF0)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.DBMODEL.RAIDSEASONRANKINGHISTORYDB_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1930DA0)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1930DB0)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1930E00)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.DBMODEL.RAIDSEASONRANKINGHISTORYDB_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1930E10)
#define <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1930ED0)

	inline static constexpr unsigned int <FilterSeasonRankingHistoryDBByTrophyFurnitureId>d__52_TypeDefinitionIndex = 16328;

	class <FilterSeasonRankingHistoryDBByTrophyFurnitureId>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::GameLogic::DBModel::RaidSeasonRankingHistoryDB* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int64 furnitureId; // 0x28
		::System::Int64 __3__furnitureId; // 0x30
		::MX::Data::RaidData* __4__this; // 0x38
		::FlatData::ContentType* contentType; // 0x40
		::FlatData::ContentType* __3__contentType; // 0x44
		Il2CppObject* raidSeasonRankingHistoryDBs; // 0x48
		Il2CppObject* __3__raidSeasonRankingHistoryDBs; // 0x50
		<>c__DisplayClass52_0* __8__1; // 0x58
		Il2CppObject* _pairs_5__2; // 0x60
		Il2CppObject* __7__wrap2; // 0x68

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidSeasonRankingHistoryDB* System.Collections.Generic.IEnumerator_MX.GameLogic.DBModel.RaidSeasonRankingHistoryDB_.get_Current()
		{
			return (return (::MX::GameLogic::DBModel::RaidSeasonRankingHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.DBMODEL.RAIDSEASONRANKINGHISTORYDB_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.GameLogic.DBModel.RaidSeasonRankingHistoryDB_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.DBMODEL.RAIDSEASONRANKINGHISTORYDB_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID>D__52_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

