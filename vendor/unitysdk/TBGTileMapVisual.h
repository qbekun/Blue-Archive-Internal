#pragma once
#include "unitysdk.h"

namespace MX::TableBoard { class TBGHexaMapData; }
namespace UnityEngine { class GameObject; }
class TBGUnitVisual;
namespace MX::Data { class ITBGThemaInfo; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
class TBGTileVisual;
namespace MX::TableBoard { class TBGHexaSpawnData; }
namespace MX::Campaign { class HexLocation; }
class TBGSpawnDataVisual;
namespace UnityEngine { class Transform; }
namespace MX::TableBoard { class TBGHexaTileData; }
class TBGEncounterVisual;
class UITBGCampaign;
namespace MX::TableBoard { class TBGHexaObjectDB; }

#define TBGTILEMAPVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x208D1C0)
#define TBGTILEMAPVISUAL_MAKEPLAYERCHARACTER_OFFSET UNITYSDK_OFFSET(0x208D3D0)
#define TBGTILEMAPVISUAL_REFRESHPLAYER_OFFSET UNITYSDK_OFFSET(0x208D4B0)
#define TBGTILEMAPVISUAL_ADDHEXATILE_OFFSET UNITYSDK_OFFSET(0x208DA30)
#define TBGTILEMAPVISUAL_MAKESPAWNDATA_OFFSET UNITYSDK_OFFSET(0x208DB70)
#define TBGTILEMAPVISUAL_SHOWENCOUNTERATPOSITION_OFFSET UNITYSDK_OFFSET(0x208DC90)
#define TBGTILEMAPVISUAL_DELETEHEXATILE_OFFSET UNITYSDK_OFFSET(0x208DE40)
#define TBGTILEMAPVISUAL_ADDSPAWNDATAFORCE_OFFSET UNITYSDK_OFFSET(0x208E000)
#define TBGTILEMAPVISUAL_ADDHEXATILEFORCE_OFFSET UNITYSDK_OFFSET(0x208E310)
#define TBGTILEMAPVISUAL_REFRESHOBJECTS_OFFSET UNITYSDK_OFFSET(0x208E3F0)
#define TBGTILEMAPVISUAL_INITIALIZEWITHSAVEDB_OFFSET UNITYSDK_OFFSET(0x208EE50)
#define TBGTILEMAPVISUAL_DELETESPAWNDATA_OFFSET UNITYSDK_OFFSET(0x208E0E0)
#define TBGTILEMAPVISUAL_MAKEHEXATILEMAP_OFFSET UNITYSDK_OFFSET(0x208EF00)
#define TBGTILEMAPVISUAL__BUILDMOVEMENTMAP_G__GETNEIGHBORLOCATIONS|29_0_OFFSET UNITYSDK_OFFSET(0x208EFD0)
#define TBGTILEMAPVISUAL_INITHEXAMAP_OFFSET UNITYSDK_OFFSET(0x208F1D0)
#define TBGTILEMAPVISUAL_MAKEHEXATILE_OFFSET UNITYSDK_OFFSET(0x208F7B0)
#define TBGTILEMAPVISUAL_LOADTBGHEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0x208F8D0)
#define TBGTILEMAPVISUAL_ADDSPAWNDATA_OFFSET UNITYSDK_OFFSET(0x208E1D0)
#define TBGTILEMAPVISUAL_MAKEHEXAUNIT_OFFSET UNITYSDK_OFFSET(0x208F9F0)
#define TBGTILEMAPVISUAL_GETENCOUNTERVISUALATPOSITION_OFFSET UNITYSDK_OFFSET(0x208DD40)
#define TBGTILEMAPVISUAL_MAKEHEXAUI_OFFSET UNITYSDK_OFFSET(0x208FAA0)
#define TBGTILEMAPVISUAL_MAKEENCOUNTER_OFFSET UNITYSDK_OFFSET(0x208FBE0)
#define TBGTILEMAPVISUAL_CLEARMOVEMENTMAP_OFFSET UNITYSDK_OFFSET(0x208FCA0)
#define TBGTILEMAPVISUAL_BUILDMOVEMENTMAP_OFFSET UNITYSDK_OFFSET(0x208FF20)
#define TBGTILEMAPVISUAL_HIDEENCOUNTERATPOSITION_OFFSET UNITYSDK_OFFSET(0x2090C10)
#define TBGTILEMAPVISUAL_REFRESHHEXAUIS_OFFSET UNITYSDK_OFFSET(0x2090CC0)

	inline static constexpr unsigned int TBGTileMapVisual_TypeDefinitionIndex = 3492;

	class TBGTileMapVisual : public Il2CppObject
	{
	public:
		::System::String* SpawnDataVisualPath; // 0x0
		::MX::TableBoard::TBGHexaMapData* Data; // 0x18
		::UnityEngine::GameObject* HexaTileRoot; // 0x20
		::UnityEngine::GameObject* MonsterRoot; // 0x28
		::UnityEngine::GameObject* Plane; // 0x30
		TBGUnitVisual* PlayerCharacter; // 0x38
		Il2CppObject* TileVisualList; // 0x40
		Il2CppObject* SpawnDataVisualList; // 0x48
		Il2CppObject* TBGTileVisualMap; // 0x50
		Il2CppObject* TBGSpawnDataVisualMap; // 0x58
		Il2CppObject* TBGEncounterVisualByServerId; // 0x60
		Il2CppObject* MovementMap; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* MakePlayerCharacter(::MX::Data::ITBGThemaInfo* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::ITBGThemaInfo*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_MAKEPLAYERCHARACTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshPlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_REFRESHPLAYER_OFFSET))(nullptr);
		}

		::System::Boolean AddHexaTile(TBGTileVisual* arg)
		{
			return ((::System::Boolean(*)(TBGTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_ADDHEXATILE_OFFSET))(arg, nullptr);
		}

		::System::Void MakeSpawnData(::MX::TableBoard::TBGHexaSpawnData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaSpawnData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_MAKESPAWNDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowEncounterAtPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_SHOWENCOUNTERATPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteHexaTile(TBGTileVisual* arg)
		{
			((::System::Void(*)(TBGTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_DELETEHEXATILE_OFFSET))(arg, nullptr);
		}

		::System::Void AddSpawnDataForce(TBGSpawnDataVisual* arg)
		{
			((::System::Void(*)(TBGSpawnDataVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_ADDSPAWNDATAFORCE_OFFSET))(arg, nullptr);
		}

		::System::Void AddHexaTileForce(TBGTileVisual* arg)
		{
			((::System::Void(*)(TBGTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_ADDHEXATILEFORCE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_REFRESHOBJECTS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitializeWithSaveDB(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_INITIALIZEWITHSAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteSpawnData(TBGSpawnDataVisual* arg)
		{
			((::System::Void(*)(TBGSpawnDataVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_DELETESPAWNDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MakeHexaTileMap(::MX::TableBoard::TBGHexaMapData* arg, ::System::Boolean arg2, ::UnityEngine::Transform* arg3, Il2CppObject* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::TableBoard::TBGHexaMapData*, ::System::Boolean, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_MAKEHEXATILEMAP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* _BuildMovementMap_g__GetNeighborLocations|29_0(::MX::Campaign::HexLocation* arg)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL__BUILDMOVEMENTMAP_G__GETNEIGHBORLOCATIONS|29_0_OFFSET))(arg, nullptr);
		}

		::System::Void InitHexaMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_INITHEXAMAP_OFFSET))(nullptr);
		}

		::System::Void MakeHexaTile(::MX::TableBoard::TBGHexaTileData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaTileData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_MAKEHEXATILE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::TableBoard::TBGHexaMapData* LoadTBGHexaMapData(::System::String* str)
		{
			return ((::MX::TableBoard::TBGHexaMapData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_LOADTBGHEXAMAPDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean AddSpawnData(TBGSpawnDataVisual* arg)
		{
			return ((::System::Boolean(*)(TBGSpawnDataVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_ADDSPAWNDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MakeHexaUnit(::System::String* str, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_MAKEHEXAUNIT_OFFSET))(str, arg, nullptr);
		}

		TBGEncounterVisual* GetEncounterVisualAtPosition(::MX::Campaign::HexLocation* arg)
		{
			return ((TBGEncounterVisual*(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_GETENCOUNTERVISUALATPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void MakeHexaUI(UITBGCampaign* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(UITBGCampaign*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_MAKEHEXAUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* MakeEncounter(::MX::TableBoard::TBGHexaObjectDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::TableBoard::TBGHexaObjectDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_MAKEENCOUNTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearMovementMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_CLEARMOVEMENTMAP_OFFSET))(nullptr);
		}

		::System::Void BuildMovementMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_BUILDMOVEMENTMAP_OFFSET))(nullptr);
		}

		::System::Void HideEncounterAtPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_HIDEENCOUNTERATPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshHexaUIs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEMAPVISUAL_REFRESHHEXAUIS_OFFSET))(nullptr);
		}

	};

