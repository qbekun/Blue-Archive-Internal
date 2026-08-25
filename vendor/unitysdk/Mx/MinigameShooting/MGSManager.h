#pragma once
#include "../../unitysdk.h"

class MiniGameShootingSummary;
namespace MX::MinigameShooting { class ProjectilePool; }
namespace MX::MinigameShooting { class ResourcePreloader; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::MinigameShooting { class MGSSetting; }
namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class MGSCamera; }
namespace UnityEngine::AI { class NavMeshSurface; }
namespace UnityEngine { class Transform; }
namespace MX::MinigameShooting { class LogicGroundInfo; }
namespace MX::MinigameShooting { class Section; }
namespace MX::MinigameShooting { class MGSGameMode; }
namespace MX::MinigameShooting { class Entity; }
class UIBase;

#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x1476C90)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_SETTING_OFFSET UNITYSDK_OFFSET(0x1476CA0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_SETTING_OFFSET UNITYSDK_OFFSET(0x1476CB0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1476CC0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1476CD0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1476CE0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1476CF0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1476D00)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1476D10)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_CURSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1476D20)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_CURSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1476D30)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_CURSECTION_OFFSET UNITYSDK_OFFSET(0x1476A50)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_CHARACTERS_OFFSET UNITYSDK_OFFSET(0x1476D40)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1476E80)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1476E90)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_LEFTTIME_OFFSET UNITYSDK_OFFSET(0x1476EA0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_LEFTTIME_OFFSET UNITYSDK_OFFSET(0x1476EB0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_BATTLETIME_OFFSET UNITYSDK_OFFSET(0x1476EC0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_BATTLETIME_OFFSET UNITYSDK_OFFSET(0x1476ED0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_INGAMEBACKGROUNDLAYER_OFFSET UNITYSDK_OFFSET(0x1476EE0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_UNITLAYER_OFFSET UNITYSDK_OFFSET(0x1476FA0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_OBSTACLELAYER_OFFSET UNITYSDK_OFFSET(0x1477060)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x1477120)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_WATERLAYER_OFFSET UNITYSDK_OFFSET(0x14771E0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_TILELAYER_OFFSET UNITYSDK_OFFSET(0x14772A0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_PROJECTILEAREA_OFFSET UNITYSDK_OFFSET(0x1477360)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_WALKABLEAREA_OFFSET UNITYSDK_OFFSET(0x14773A0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_LOGICGROUND_OFFSET UNITYSDK_OFFSET(0x14773E0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_LOGICGROUND_OFFSET UNITYSDK_OFFSET(0x14773F0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_GAMESTART_OFFSET UNITYSDK_OFFSET(0x1477400)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_GAMESTART_OFFSET UNITYSDK_OFFSET(0x1477410)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_GEARINTERVAL_OFFSET UNITYSDK_OFFSET(0x1477420)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_GEARINTERVAL_OFFSET UNITYSDK_OFFSET(0x1477430)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_LOGICGROUNDDATA_OFFSET UNITYSDK_OFFSET(0x1477440)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_LOGICGROUNDDATA_OFFSET UNITYSDK_OFFSET(0x1477450)
#define MX_MINIGAMESHOOTING_MGSMANAGER_GET_PICKEDGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1477470)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SET_PICKEDGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1477480)
#define MX_MINIGAMESHOOTING_MGSMANAGER_REQUESTMINIGAMESHOOTINGENTER_OFFSET UNITYSDK_OFFSET(0x14774A0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_CREATESETTING_OFFSET UNITYSDK_OFFSET(0x14776A0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x14778F0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1477AC0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_COSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1477C40)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SELECTSECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1477CF0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x1477E70)
#define MX_MINIGAMESHOOTING_MGSMANAGER_EXITGAME_OFFSET UNITYSDK_OFFSET(0x1478010)
#define MX_MINIGAMESHOOTING_MGSMANAGER_COEXITGAME_OFFSET UNITYSDK_OFFSET(0x14780D0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1478160)
#define MX_MINIGAMESHOOTING_MGSMANAGER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x14786C0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_LOADGROUNDDATA_OFFSET UNITYSDK_OFFSET(0x1478750)
#define MX_MINIGAMESHOOTING_MGSMANAGER_LOADSECTION_OFFSET UNITYSDK_OFFSET(0x14787E0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_NEXTSECTION_OFFSET UNITYSDK_OFFSET(0x1478890)
#define MX_MINIGAMESHOOTING_MGSMANAGER_MOVETOSECTION_OFFSET UNITYSDK_OFFSET(0x14788A0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_INITSCREEN_OFFSET UNITYSDK_OFFSET(0x1478AC0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_SETPLAYER_OFFSET UNITYSDK_OFFSET(0x1478B50)
#define MX_MINIGAMESHOOTING_MGSMANAGER_REFRESHCAMERA_OFFSET UNITYSDK_OFFSET(0x1478C40)
#define MX_MINIGAMESHOOTING_MGSMANAGER_ADDENTITY_OFFSET UNITYSDK_OFFSET(0x1478C60)
#define MX_MINIGAMESHOOTING_MGSMANAGER_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x1478CD0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_PLAYERDIE_OFFSET UNITYSDK_OFFSET(0x1478DE0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1478E10)
#define MX_MINIGAMESHOOTING_MGSMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1478EB0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_CHECKGEASSELECT_OFFSET UNITYSDK_OFFSET(0x1478F50)
#define MX_MINIGAMESHOOTING_MGSMANAGER_ENDMINIGAME_OFFSET UNITYSDK_OFFSET(0x14781E0)
#define MX_MINIGAMESHOOTING_MGSMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1478FB0)
#define MX_MINIGAMESHOOTING_MGSMANAGER__EXITGAME_B__88_0_OFFSET UNITYSDK_OFFSET(0x14790F0)
#define MX_MINIGAMESHOOTING_MGSMANAGER__EXITGAME_G__COEXIT|88_1_OFFSET UNITYSDK_OFFSET(0x1479170)
#define MX_MINIGAMESHOOTING_MGSMANAGER__EXITGAME_B__88_2_OFFSET UNITYSDK_OFFSET(0x1479200)
#define MX_MINIGAMESHOOTING_MGSMANAGER__LOADSCENE_G__CLEARDURINGSCENELOAD|91_1_OFFSET UNITYSDK_OFFSET(0x14793E0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MGSManager_TypeDefinitionIndex = 15167;

	class MGSManager : public ::ToyWebViewShared::Messages::NotifyTitleChange
	{
	public:
		MiniGameShootingSummary* Summary; // 0x20
		::MX::MinigameShooting::ProjectilePool* ProjectilePool; // 0x28
		::MX::MinigameShooting::ResourcePreloader* ResourcePreloader; // 0x30
		::MX::Core::Math::IRandomService* _Random_k__BackingField; // 0x38
		::MX::MinigameShooting::MGSSetting* _Setting_k__BackingField; // 0x40
		::MX::MinigameShooting::Character* _Player_k__BackingField; // 0x48
		::MX::MinigameShooting::MGSCamera* _Camera_k__BackingField; // 0x50
		Il2CppObject* _Sections_k__BackingField; // 0x58
		::System::Int32 _CurSectionIndex_k__BackingField; // 0x60
		::System::Boolean _IsPause_k__BackingField; // 0x64
		::System::Single _LeftTime_k__BackingField; // 0x68
		::System::Single _BattleTime_k__BackingField; // 0x6C
		::UnityEngine::AI::NavMeshSurface* _LogicGround_k__BackingField; // 0x70
		::System::Boolean _GameStart_k__BackingField; // 0x78
		::System::Int32 _GearInterval_k__BackingField; // 0x7C
		::System::Int32 curGearInterval; // 0x80
		::System::Int32 gainGearCount; // 0x84
		::UnityEngine::Transform* SectionParent; // 0x88
		::MX::MinigameShooting::LogicGroundInfo* _LogicGroundData_k__BackingField; // 0x90
		Il2CppObject* _PickedGroupList_k__BackingField; // 0x98

		::MX::Core::Math::IRandomService* get_Random()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_RANDOM_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::MGSSetting* get_Setting()
		{
			return ((::MX::MinigameShooting::MGSSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_SETTING_OFFSET))(nullptr);
		}

		::System::Void set_Setting(::MX::MinigameShooting::MGSSetting* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::MGSSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_SETTING_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Player()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Void set_Player(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_PLAYER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::MGSCamera* get_Camera()
		{
			return ((::MX::MinigameShooting::MGSCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_CAMERA_OFFSET))(nullptr);
		}

		::System::Void set_Camera(::MX::MinigameShooting::MGSCamera* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::MGSCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_CAMERA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Sections()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_SECTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Sections(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_SECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurSectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_CURSECTIONINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CurSectionIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_CURSECTIONINDEX_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Section* get_CurSection()
		{
			return ((::MX::MinigameShooting::Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_CURSECTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_Characters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_CHARACTERS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_ISPAUSE_OFFSET))(nullptr);
		}

		::System::Void set_IsPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_ISPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Single get_LeftTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_LEFTTIME_OFFSET))(nullptr);
		}

		::System::Void set_LeftTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_LEFTTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_BattleTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_BATTLETIME_OFFSET))(nullptr);
		}

		::System::Void set_BattleTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_BATTLETIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InGameBackGroundLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_INGAMEBACKGROUNDLAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_UnitLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_UNITLAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_ObstacleLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_OBSTACLELAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_MAPLAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_WaterLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_WATERLAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_TileLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_TILELAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_ProjectileArea()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_PROJECTILEAREA_OFFSET))(nullptr);
		}

		::System::Int32 get_WalkableArea()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_WALKABLEAREA_OFFSET))(nullptr);
		}

		::UnityEngine::AI::NavMeshSurface* get_LogicGround()
		{
			return ((::UnityEngine::AI::NavMeshSurface*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_LOGICGROUND_OFFSET))(nullptr);
		}

		::System::Void set_LogicGround(::UnityEngine::AI::NavMeshSurface* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshSurface*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_LOGICGROUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_GameStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_GAMESTART_OFFSET))(nullptr);
		}

		::System::Void set_GameStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_GAMESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GearInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_GEARINTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_GearInterval(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_GEARINTERVAL_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::LogicGroundInfo* get_LogicGroundData()
		{
			return ((::MX::MinigameShooting::LogicGroundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_LOGICGROUNDDATA_OFFSET))(nullptr);
		}

		::System::Void set_LogicGroundData(::MX::MinigameShooting::LogicGroundInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicGroundInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_LOGICGROUNDDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PickedGroupList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_GET_PICKEDGROUPLIST_OFFSET))(nullptr);
		}

		::System::Void set_PickedGroupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SET_PICKEDGROUPLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMiniGameShootingEnter(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::MinigameShooting::MGSGameMode* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::MinigameShooting::MGSGameMode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_REQUESTMINIGAMESHOOTINGENTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::MinigameShooting::MGSSetting* CreateSetting(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::MinigameShooting::MGSGameMode* arg4)
		{
			return ((::MX::MinigameShooting::MGSSetting*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::MinigameShooting::MGSGameMode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_CREATESETTING_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartGame(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::MinigameShooting::MGSGameMode* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::MinigameShooting::MGSGameMode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_STARTGAME_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartGame(::MX::MinigameShooting::MGSSetting* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::MGSSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_STARTGAME_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoStartGame(::MX::MinigameShooting::MGSSetting* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::MinigameShooting::MGSSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_COSTARTGAME_OFFSET))(arg, nullptr);
		}

		::System::Void SelectSectionGroup(::MX::MinigameShooting::MGSSetting* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::MGSSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SELECTSECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void PlayBgm(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_PLAYBGM_OFFSET))(arg, nullptr);
		}

		::System::Void ExitGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_EXITGAME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExitGame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_COEXITGAME_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LoadScene(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_LOADSCENE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* LoadGroundData(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_LOADGROUNDDATA_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* LoadSection(::System::Int32 arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_LOADSECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void NextSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_NEXTSECTION_OFFSET))(nullptr);
		}

		::System::Void MoveToSection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_MOVETOSECTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitScreen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_INITSCREEN_OFFSET))(nullptr);
		}

		::System::Void SetPlayer(::MX::MinigameShooting::Character* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_SETPLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCamera(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_REFRESHCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void AddEntity(::MX::MinigameShooting::Entity* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_ADDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveEntity(::MX::MinigameShooting::Entity* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_REMOVEENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void PlayerDie()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_PLAYERDIE_OFFSET))(nullptr);
		}

		::System::Void Pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckGeasSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_CHECKGEASSELECT_OFFSET))(nullptr);
		}

		::System::Void EndMiniGame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_ENDMINIGAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ExitGame_b__88_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER__EXITGAME_B__88_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _ExitGame_g__CoExit|88_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER__EXITGAME_G__COEXIT|88_1_OFFSET))(nullptr);
		}

		::System::Void _ExitGame_b__88_2(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER__EXITGAME_B__88_2_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _LoadScene_g__ClearDuringSceneLoad|91_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSMANAGER__LOADSCENE_G__CLEARDURINGSCENELOAD|91_1_OFFSET))(nullptr);
		}

	};
}

