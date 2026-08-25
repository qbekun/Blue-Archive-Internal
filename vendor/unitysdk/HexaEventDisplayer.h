#pragma once
#include "unitysdk.h"

class UICampaign;
class CampaignTask;
namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
class HexaTileVisual;
class HexaUnitVisual;
namespace MX::Campaign { class HexaTileMap; }
class HexaTileMapVisual;
namespace MX::Campaign { class HexaUnit; }

#define HEXAEVENTDISPLAYER_PROCESSSPAWNUNIT_OFFSET UNITYSDK_OFFSET(0xF6FB80)
#define HEXAEVENTDISPLAYER_TELEPORTINUNIT_OFFSET UNITYSDK_OFFSET(0xF6FC30)
#define HEXAEVENTDISPLAYER_PROCESSHIDETILE_OFFSET UNITYSDK_OFFSET(0xF6FCE0)
#define HEXAEVENTDISPLAYER_WARPUNIT_OFFSET UNITYSDK_OFFSET(0xF6FD90)
#define HEXAEVENTDISPLAYER_PROCESSMOVEUNIT_OFFSET UNITYSDK_OFFSET(0xF70110)
#define HEXAEVENTDISPLAYER_GET_ORIGINALMAPDATA_OFFSET UNITYSDK_OFFSET(0xF701C0)
#define HEXAEVENTDISPLAYER_PROCESSENDBATTLE_OFFSET UNITYSDK_OFFSET(0xF701E0)
#define HEXAEVENTDISPLAYER_PROCESSSPAWNTILE_OFFSET UNITYSDK_OFFSET(0xF702A0)
#define HEXAEVENTDISPLAYER_PROCESSHIDESTRATEGY_OFFSET UNITYSDK_OFFSET(0xF70350)
#define HEXAEVENTDISPLAYER_PROCESSCLEARFOGOFWAR_OFFSET UNITYSDK_OFFSET(0xF70400)
#define HEXAEVENTDISPLAYER_PROCESSSPAWNSTRATEGY_OFFSET UNITYSDK_OFFSET(0xF705C0)
#define HEXAEVENTDISPLAYER_PROCESSDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xF70670)
#define HEXAEVENTDISPLAYER_INITHEXAMAP_OFFSET UNITYSDK_OFFSET(0xF70720)
#define HEXAEVENTDISPLAYER_GET_MAPVISUAL_OFFSET UNITYSDK_OFFSET(0xF700C0)
#define HEXAEVENTDISPLAYER_PROCESSDIEUNIT_OFFSET UNITYSDK_OFFSET(0xF70760)
#define HEXAEVENTDISPLAYER_MAKEUNIT_OFFSET UNITYSDK_OFFSET(0xF70810)
#define HEXAEVENTDISPLAYER_SET_BLOCKINPUT_OFFSET UNITYSDK_OFFSET(0xF708C0)
#define HEXAEVENTDISPLAYER_PROCESSWARPUNITFROMHIDETILE_OFFSET UNITYSDK_OFFSET(0xF708D0)
#define HEXAEVENTDISPLAYER_PROCESSWARPUNIT_OFFSET UNITYSDK_OFFSET(0xF70980)
#define HEXAEVENTDISPLAYER_GET_BLOCKINPUT_OFFSET UNITYSDK_OFFSET(0xF70A30)
#define HEXAEVENTDISPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xF70A40)
#define HEXAEVENTDISPLAYER_PROCESSSPAWNUNITFROMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF70A50)
#define HEXAEVENTDISPLAYER_PROCESSBOSSEXILE_OFFSET UNITYSDK_OFFSET(0xF70B00)
#define HEXAEVENTDISPLAYER_PROCESSSTATBUFF_OFFSET UNITYSDK_OFFSET(0xF70B80)
#define HEXAEVENTDISPLAYER_PROCESSSETTILEMOVABLITY_OFFSET UNITYSDK_OFFSET(0xF70E10)
#define HEXAEVENTDISPLAYER_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xF700E0)
#define HEXAEVENTDISPLAYER_TELEPORTOUTUNIT_OFFSET UNITYSDK_OFFSET(0xF70EC0)
#define HEXAEVENTDISPLAYER_SET_STOP_OFFSET UNITYSDK_OFFSET(0xF70F70)
#define HEXAEVENTDISPLAYER_GET_STOP_OFFSET UNITYSDK_OFFSET(0xF70F80)

	inline static constexpr unsigned int HexaEventDisplayer_TypeDefinitionIndex = 828;

	class HexaEventDisplayer : public Il2CppObject
	{
	public:
		UICampaign* uiCampaign; // 0x10
		CampaignTask* campaignTask; // 0x18
		::System::Boolean _Stop_k__BackingField; // 0x20
		::System::Boolean _BlockInput_k__BackingField; // 0x21

		::System::Collections::IEnumerator* ProcessSpawnUnit(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSSPAWNUNIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* TeleportInUnit(HexaTileVisual* arg, HexaUnitVisual* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(HexaTileVisual*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_TELEPORTINUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessHideTile(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSHIDETILE_OFFSET))(arg, nullptr);
		}

		::System::Void WarpUnit(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_WARPUNIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessMoveUnit(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSMOVEUNIT_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMap* get_originalMapData()
		{
			return ((::MX::Campaign::HexaTileMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_GET_ORIGINALMAPDATA_OFFSET))(nullptr);
		}

		::System::Void ProcessEndBattle(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSENDBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSpawnTile(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSSPAWNTILE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessHideStrategy(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSHIDESTRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClearFogOfWar(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSCLEARFOGOFWAR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSpawnStrategy(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSSPAWNSTRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessDisplayInfo(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void InitHexaMap(UICampaign* arg, CampaignTask* arg2)
		{
			((::System::Void(*)(UICampaign*, CampaignTask*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_INITHEXAMAP_OFFSET))(arg, arg2, nullptr);
		}

		HexaTileMapVisual* get_mapVisual()
		{
			return ((HexaTileMapVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_GET_MAPVISUAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessDieUnit(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSDIEUNIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MakeUnit(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_MAKEUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_BlockInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_SET_BLOCKINPUT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessWarpUnitFromHideTile(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSWARPUNITFROMHIDETILE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessWarpUnit(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSWARPUNIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BlockInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_GET_BLOCKINPUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSpawnUnitFromUniqueId(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSSPAWNUNITFROMUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessBossExile(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSBOSSEXILE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessStatBuff(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSSTATBUFF_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSetTileMovablity(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_PROCESSSETTILEMOVABLITY_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMap* get_mapData()
		{
			return ((::MX::Campaign::HexaTileMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_GET_MAPDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* TeleportOutUnit(HexaTileVisual* arg, HexaUnitVisual* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(HexaTileVisual*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_TELEPORTOUTUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Stop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_SET_STOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Stop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTDISPLAYER_GET_STOP_OFFSET))(nullptr);
		}

	};

