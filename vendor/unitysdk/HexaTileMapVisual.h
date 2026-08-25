#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class ParticleSystem; }
class HexaTileVisual;
class HexaUnitVisual;
class StrategyVisual;
namespace MX::Campaign { class HexaUnit; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign { class Strategy; }
namespace MX::Campaign { class HexaTile; }

#define HEXATILEMAPVISUAL_INITHEXAMAP_OFFSET UNITYSDK_OFFSET(0xF797C0)
#define HEXATILEMAPVISUAL_ADDHEXATILEFORCE_OFFSET UNITYSDK_OFFSET(0xF79990)
#define HEXATILEMAPVISUAL_ADDHEXATILE_OFFSET UNITYSDK_OFFSET(0xF79C00)
#define HEXATILEMAPVISUAL_DELETEHEXATILE_OFFSET UNITYSDK_OFFSET(0xF79A70)
#define HEXATILEMAPVISUAL_DELETEUNIT_OFFSET UNITYSDK_OFFSET(0xF73DD0)
#define HEXATILEMAPVISUAL_DELETESTRATEGY_OFFSET UNITYSDK_OFFSET(0xF742E0)
#define HEXATILEMAPVISUAL_RELEASETILES_OFFSET UNITYSDK_OFFSET(0xF79D40)
#define HEXATILEMAPVISUAL_GETVISUALUNIT_OFFSET UNITYSDK_OFFSET(0xF79E70)
#define HEXATILEMAPVISUAL_ASYNC_OFFSET UNITYSDK_OFFSET(0xF79F50)
#define HEXATILEMAPVISUAL_PLAYSPAWNANIMATION_OFFSET UNITYSDK_OFFSET(0xF7A000)
#define HEXATILEMAPVISUAL_PLAYTACTICSKIPSTARTEFFECT_OFFSET UNITYSDK_OFFSET(0xF7A090)
#define HEXATILEMAPVISUAL_PLAYTACTICSKIPENDEFFECT_OFFSET UNITYSDK_OFFSET(0xF7A240)
#define HEXATILEMAPVISUAL_LOADHEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0xF7A2E0)
#define HEXATILEMAPVISUAL_LOADHEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0xF7A400)
#define HEXATILEMAPVISUAL_LOADHEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0xF7A530)
#define HEXATILEMAPVISUAL_MAKEHEXATILEMAP_OFFSET UNITYSDK_OFFSET(0xF7A610)
#define HEXATILEMAPVISUAL_MAKEHEXAUNIT_OFFSET UNITYSDK_OFFSET(0xF736B0)
#define HEXATILEMAPVISUAL_MAKESTRATEGY_OFFSET UNITYSDK_OFFSET(0xF78B60)
#define HEXATILEMAPVISUAL_MAKEHEXATILE_OFFSET UNITYSDK_OFFSET(0xF7A710)
#define HEXATILEMAPVISUAL_CREATEEVENTSVISUALS_OFFSET UNITYSDK_OFFSET(0xF7A830)
#define HEXATILEMAPVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF7B1C0)
#define HEXATILEMAPVISUAL__PLAYTACTICSKIPENDEFFECT_B__24_0_OFFSET UNITYSDK_OFFSET(0xF7B330)

	inline static constexpr unsigned int HexaTileMapVisual_TypeDefinitionIndex = 849;

	class HexaTileMapVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMap* Data; // 0x18
		::UnityEngine::GameObject* HexaTileRoot; // 0x20
		::UnityEngine::GameObject* MonsterRoot; // 0x28
		::UnityEngine::GameObject* Plane; // 0x30
		Il2CppObject* HexaTileVisualList; // 0x38
		Il2CppObject* HexaTileVisualMap; // 0x40
		Il2CppObject* UnitVisualList; // 0x48
		Il2CppObject* StrategyVisualList; // 0x50
		::UnityEngine::Transform* EventParent; // 0x58
		::UnityEngine::GameObject* tacticSkipStartEffectPrefab; // 0x60
		::UnityEngine::GameObject* tacticSkipEndEffectPrefab; // 0x68
		::UnityEngine::ParticleSystem* tacticSkipStartEffect; // 0x70
		::UnityEngine::ParticleSystem* tacticSkipEndEffect; // 0x78

		::System::Void InitHexaMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_INITHEXAMAP_OFFSET))(nullptr);
		}

		::System::Void AddHexaTileForce(HexaTileVisual* arg)
		{
			((::System::Void(*)(HexaTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_ADDHEXATILEFORCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddHexaTile(HexaTileVisual* arg)
		{
			return ((::System::Boolean(*)(HexaTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_ADDHEXATILE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteHexaTile(HexaTileVisual* arg)
		{
			((::System::Void(*)(HexaTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_DELETEHEXATILE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteUnit(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_DELETEUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteStrategy(StrategyVisual* arg)
		{
			((::System::Void(*)(StrategyVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_DELETESTRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseTiles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_RELEASETILES_OFFSET))(nullptr);
		}

		HexaUnitVisual* GetVisualUnit(::MX::Campaign::HexaUnit* arg)
		{
			return ((HexaUnitVisual*(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_GETVISUALUNIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ASync(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_ASYNC_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlaySpawnAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_PLAYSPAWNANIMATION_OFFSET))(nullptr);
		}

		::System::Void PlayTacticSkipStartEffect(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_PLAYTACTICSKIPSTARTEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayTacticSkipEndEffect(::MX::Campaign::HexLocation* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_PLAYTACTICSKIPENDEFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMap* LoadHexaMapData(::System::String* str)
		{
			return ((::MX::Campaign::HexaTileMap*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_LOADHEXAMAPDATA_OFFSET))(str, nullptr);
		}

		::System::Void LoadHexaMapData(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_LOADHEXAMAPDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadHexaMapData(::System::String* str, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_LOADHEXAMAPDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* MakeHexaTileMap(::MX::Campaign::HexaTileMap* arg, ::System::Boolean arg2, ::UnityEngine::Transform* arg3, Il2CppObject* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMap*, ::System::Boolean, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_MAKEHEXATILEMAP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* MakeHexaUnit(::MX::Campaign::HexaUnit* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaUnit*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_MAKEHEXAUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MakeStrategy(::MX::Campaign::Strategy* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_MAKESTRATEGY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MakeHexaTile(::MX::Campaign::HexaTile* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaTile*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_MAKEHEXATILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateEventsVisuals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_CREATEEVENTSVISUALS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PlayTacticSkipEndEffect_b__24_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEMAPVISUAL__PLAYTACTICSKIPENDEFFECT_B__24_0_OFFSET))(nullptr);
		}

	};

