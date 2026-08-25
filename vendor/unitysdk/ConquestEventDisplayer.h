#pragma once
#include "unitysdk.h"

class UIConquest;
class ConquestTileMapVisual;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::GameLogic::DBModel { class ConquestErosionDB; }
class ConquestTileVisual;
class ErosionToPlay;

#define CONQUESTEVENTDISPLAYER_GET_UICONQUEST_OFFSET UNITYSDK_OFFSET(0x1ADDDF0)
#define CONQUESTEVENTDISPLAYER_GET_MAPVISUAL_OFFSET UNITYSDK_OFFSET(0x1ADDF00)
#define CONQUESTEVENTDISPLAYER_CACHECLEAR_OFFSET UNITYSDK_OFFSET(0x1ADDF20)
#define CONQUESTEVENTDISPLAYER_PREPARECONQUESTDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1ADE160)
#define CONQUESTEVENTDISPLAYER_PLAYCONQUESTDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1ADE1E0)
#define CONQUESTEVENTDISPLAYER_GETNEEDTOCHANGEMAPINFO_OFFSET UNITYSDK_OFFSET(0x1ADE260)
#define CONQUESTEVENTDISPLAYER_MOVECAMERA_OFFSET UNITYSDK_OFFSET(0x1ADE730)
#define CONQUESTEVENTDISPLAYER_REFRESHTILEMAPSTATEWITHCACHE_OFFSET UNITYSDK_OFFSET(0x1ADE7A0)
#define CONQUESTEVENTDISPLAYER_PLAYTILECONQUERED_OFFSET UNITYSDK_OFFSET(0x1ADE880)
#define CONQUESTEVENTDISPLAYER_PLAYTILEUPGRADED_OFFSET UNITYSDK_OFFSET(0x1ADE900)
#define CONQUESTEVENTDISPLAYER_PLAYSUDDENEVENTOCCURED_OFFSET UNITYSDK_OFFSET(0x1ADE980)
#define CONQUESTEVENTDISPLAYER_PLAYBOSSOPEN_OFFSET UNITYSDK_OFFSET(0x1ADEA00)
#define CONQUESTEVENTDISPLAYER_PLAYSTEPOPEN_OFFSET UNITYSDK_OFFSET(0x1ADEA80)
#define CONQUESTEVENTDISPLAYER_PREPAREEROSION_OFFSET UNITYSDK_OFFSET(0x1ADEAF0)
#define CONQUESTEVENTDISPLAYER_PLAYEROSIONONTILE_OFFSET UNITYSDK_OFFSET(0x1ADEB90)
#define CONQUESTEVENTDISPLAYER_PLAYMASSEROSION_OFFSET UNITYSDK_OFFSET(0x1ADEC30)
#define CONQUESTEVENTDISPLAYER_PLAYEROSION_OFFSET UNITYSDK_OFFSET(0x1ADECB0)
#define CONQUESTEVENTDISPLAYER_PLAYCHECKTILEEROSION_OFFSET UNITYSDK_OFFSET(0x1ADED20)
#define CONQUESTEVENTDISPLAYER_PREPAREEROSIONREMOVE_OFFSET UNITYSDK_OFFSET(0x1ADED90)
#define CONQUESTEVENTDISPLAYER_PLAYEROSIONREMOVE_OFFSET UNITYSDK_OFFSET(0x1ADEE30)
#define CONQUESTEVENTDISPLAYER_PLAYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1ADEEB0)
#define CONQUESTEVENTDISPLAYER_PLAYPROPANIMATION_OFFSET UNITYSDK_OFFSET(0x1ADEF20)
#define CONQUESTEVENTDISPLAYER_PLAYPROPANIMATIONANDBLOCK_OFFSET UNITYSDK_OFFSET(0x1ADEFA0)
#define CONQUESTEVENTDISPLAYER_PLAYPROPANIMATIONHOLDANDPLAY_OFFSET UNITYSDK_OFFSET(0x1ADF020)
#define CONQUESTEVENTDISPLAYER_PLAYBOSSCLEAR_OFFSET UNITYSDK_OFFSET(0x1ADF0A0)
#define CONQUESTEVENTDISPLAYER_PLAYSTEPOPEN_OFFSET UNITYSDK_OFFSET(0x1ADF120)
#define CONQUESTEVENTDISPLAYER_PLAYSTEPCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ADF1A0)
#define CONQUESTEVENTDISPLAYER_PLAYHIDECONQUESTUI_OFFSET UNITYSDK_OFFSET(0x1ADF220)
#define CONQUESTEVENTDISPLAYER_PLAYSHOWCONQUESTUI_OFFSET UNITYSDK_OFFSET(0x1ADF2A0)
#define CONQUESTEVENTDISPLAYER_PLAYHIDEHEXAUI_OFFSET UNITYSDK_OFFSET(0x1ADF320)
#define CONQUESTEVENTDISPLAYER_PLAYSHOWHEXAUI_OFFSET UNITYSDK_OFFSET(0x1ADF390)
#define CONQUESTEVENTDISPLAYER_PLAYCAMERASETTING_OFFSET UNITYSDK_OFFSET(0x1ADF400)
#define CONQUESTEVENTDISPLAYER_PLAYPLAYMAPENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x1ADF480)
#define CONQUESTEVENTDISPLAYER_PLAYSHOWTILECONQUERREWARD_OFFSET UNITYSDK_OFFSET(0x1ADF500)
#define CONQUESTEVENTDISPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF560)
#define CONQUESTEVENTDISPLAYER__GETNEEDTOCHANGEMAPINFO_B__16_0_OFFSET UNITYSDK_OFFSET(0x1ADF6F0)
#define CONQUESTEVENTDISPLAYER__REFRESHTILEMAPSTATEWITHCACHE_B__18_0_OFFSET UNITYSDK_OFFSET(0x1ADF730)

	inline static constexpr unsigned int ConquestEventDisplayer_TypeDefinitionIndex = 1522;

	class ConquestEventDisplayer : public Il2CppObject
	{
	public:
		UIConquest* _uiConquest; // 0x10
		Il2CppObject* tileCompleteCache; // 0x18
		Il2CppObject* objectCompleteCache; // 0x20
		Il2CppObject* massErosionCache; // 0x28
		Il2CppObject* propAnimationHoldCache; // 0x30
		::System::Boolean erosionCache; // 0x38
		::System::Boolean NeedToChangeMap; // 0x39
		::System::Int32 StepToSwitch; // 0x3C
		Il2CppObject* ReservedDisplayInfos; // 0x40

		UIConquest* get_uiConquest()
		{
			return ((UIConquest*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_GET_UICONQUEST_OFFSET))(nullptr);
		}

		ConquestTileMapVisual* get_mapVisual()
		{
			return ((ConquestTileMapVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_GET_MAPVISUAL_OFFSET))(nullptr);
		}

		::System::Void CacheClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_CACHECLEAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PrepareConquestDisplayInfos(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PREPARECONQUESTDISPLAYINFOS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayConquestDisplayInfos(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYCONQUESTDISPLAYINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNeedToChangeMapInfo(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((Il2CppObject*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_GETNEEDTOCHANGEMAPINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MoveCamera(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_MOVECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTileMapStateWithCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_REFRESHTILEMAPSTATEWITHCACHE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayTileConquered(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYTILECONQUERED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayTileUpgraded(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYTILEUPGRADED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlaySuddenEventOccured(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYSUDDENEVENTOCCURED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayBossOpen(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYBOSSOPEN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayStepOpen(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYSTEPOPEN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PrepareErosion(::MX::GameLogic::DBModel::ConquestErosionDB* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::ConquestErosionDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PREPAREEROSION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayErosionOnTile(ConquestTileVisual* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(ConquestTileVisual*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYEROSIONONTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayMassErosion(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYMASSEROSION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayErosion(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYEROSION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayCheckTileErosion(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYCHECKTILEEROSION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PrepareErosionRemove(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PREPAREEROSIONREMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayErosionRemove(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYEROSIONREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayOperator(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayPropAnimation(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYPROPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayPropAnimationAndBlock(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYPROPANIMATIONANDBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayPropAnimationHoldAndPlay(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYPROPANIMATIONHOLDANDPLAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayBossClear(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYBOSSCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayStepOpen(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYSTEPOPEN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayStepComplete(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYSTEPCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayHideConquestUI(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYHIDECONQUESTUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayShowConquestUI(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYSHOWCONQUESTUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayHideHexaUI(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYHIDEHEXAUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayShowHexaUI(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYSHOWHEXAUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayCameraSetting(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYCAMERASETTING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayPlayMapEnterScenario(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYPLAYMAPENTERSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayShowTileConquerReward(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_PLAYSHOWTILECONQUERREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetNeedToChangeMapInfo_b__16_0(ErosionToPlay* arg)
		{
			return ((::System::Boolean(*)(ErosionToPlay*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER__GETNEEDTOCHANGEMAPINFO_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RefreshTileMapStateWithCache_b__18_0(ConquestTileVisual* arg)
		{
			return ((::System::Boolean(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTDISPLAYER__REFRESHTILEMAPSTATEWITHCACHE_B__18_0_OFFSET))(arg, nullptr);
		}

	};

