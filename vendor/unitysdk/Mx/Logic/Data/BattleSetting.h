#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class EchelonType; }
namespace MX::Logic::Data { class TeamSetting; }
namespace FlatData { class TacticEnvironment; }
namespace FlatData { class StageTopography; }
namespace FlatData { class UIEnemyCountType; }
namespace MX::Logic::Data { class RaidSetting; }
namespace MX::Logic::Data { class EventBattleSetting; }
namespace MX::Logic::Data { class TimeAttackSetting; }
namespace FlatData { class ConquestEnemyType; }
namespace MX::Data::Excel { class GroundExcel; }
namespace MX::Logic::Data { class BattleSetting; }

#define MX_LOGIC_DATA_BATTLESETTING_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x11DA7B0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x11DA7C0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x11DA7D0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x11DA7E0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x11DA7F0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x11DA800)
#define MX_LOGIC_DATA_BATTLESETTING_GET_BATTLEDURATIONINFRAME_OFFSET UNITYSDK_OFFSET(0x11DA810)
#define MX_LOGIC_DATA_BATTLESETTING_SET_BATTLEDURATIONINFRAME_OFFSET UNITYSDK_OFFSET(0x11DA820)
#define MX_LOGIC_DATA_BATTLESETTING_GET_LEFTTEAM_OFFSET UNITYSDK_OFFSET(0x11DA830)
#define MX_LOGIC_DATA_BATTLESETTING_SET_LEFTTEAM_OFFSET UNITYSDK_OFFSET(0x11DA840)
#define MX_LOGIC_DATA_BATTLESETTING_GET_RIGHTTEAM_OFFSET UNITYSDK_OFFSET(0x11DA850)
#define MX_LOGIC_DATA_BATTLESETTING_SET_RIGHTTEAM_OFFSET UNITYSDK_OFFSET(0x11DA860)
#define MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DA870)
#define MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DA880)
#define MX_LOGIC_DATA_BATTLESETTING_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x11DA890)
#define MX_LOGIC_DATA_BATTLESETTING_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x11DA8A0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x11DA8B0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x11DA8C0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x11DA8D0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x11DA8E0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_ENVIRONMENTTYPE_OFFSET UNITYSDK_OFFSET(0x11DA8F0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_ENVIRONMENTTYPE_OFFSET UNITYSDK_OFFSET(0x11DA900)
#define MX_LOGIC_DATA_BATTLESETTING_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x11DA910)
#define MX_LOGIC_DATA_BATTLESETTING_SET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x11DA920)
#define MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDSCENENAME_OFFSET UNITYSDK_OFFSET(0x11DA930)
#define MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDSCENENAME_OFFSET UNITYSDK_OFFSET(0x11DA940)
#define MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDGRIDFILENAME_OFFSET UNITYSDK_OFFSET(0x11DA950)
#define MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDGRIDFILENAME_OFFSET UNITYSDK_OFFSET(0x11DA960)
#define MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDSTAGENAME_OFFSET UNITYSDK_OFFSET(0x11DA970)
#define MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDSTAGENAME_OFFSET UNITYSDK_OFFSET(0x11DA980)
#define MX_LOGIC_DATA_BATTLESETTING_GET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x11DA990)
#define MX_LOGIC_DATA_BATTLESETTING_SET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x11DA9A0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_HIDEBATTLEUIFROMSCRATCH_OFFSET UNITYSDK_OFFSET(0x11DA9B0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_HIDEBATTLEUIFROMSCRATCH_OFFSET UNITYSDK_OFFSET(0x11DA9C0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_UIENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0x11DA9D0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_UIENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0x11DA9E0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_TSSAIRUNITHEIGHT_OFFSET UNITYSDK_OFFSET(0x11DA9F0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_TSSAIRUNITHEIGHT_OFFSET UNITYSDK_OFFSET(0x11DAA00)
#define MX_LOGIC_DATA_BATTLESETTING_GET_PLAYERPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x11DAA10)
#define MX_LOGIC_DATA_BATTLESETTING_SET_PLAYERPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x11DAA20)
#define MX_LOGIC_DATA_BATTLESETTING_GET_ENEMYPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x11DAA30)
#define MX_LOGIC_DATA_BATTLESETTING_SET_ENEMYPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x11DAA40)
#define MX_LOGIC_DATA_BATTLESETTING_GET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x11DAA50)
#define MX_LOGIC_DATA_BATTLESETTING_SET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x11DAA60)
#define MX_LOGIC_DATA_BATTLESETTING_GET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x11DAA70)
#define MX_LOGIC_DATA_BATTLESETTING_SET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x11DAA80)
#define MX_LOGIC_DATA_BATTLESETTING_GET_RAIDBOSSINITIALPHASE_OFFSET UNITYSDK_OFFSET(0x11DAAA0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_RAIDSETTING_OFFSET UNITYSDK_OFFSET(0x11DAAC0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_RAIDSETTING_OFFSET UNITYSDK_OFFSET(0x11DAAD0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_EVENTSETTING_OFFSET UNITYSDK_OFFSET(0x11DAAF0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_EVENTSETTING_OFFSET UNITYSDK_OFFSET(0x11DAB00)
#define MX_LOGIC_DATA_BATTLESETTING_GET_TIMEATTACKSETTING_OFFSET UNITYSDK_OFFSET(0x11DAB20)
#define MX_LOGIC_DATA_BATTLESETTING_SET_TIMEATTACKSETTING_OFFSET UNITYSDK_OFFSET(0x11DAB30)
#define MX_LOGIC_DATA_BATTLESETTING_GET_CONQUESTGROUPBUFFID_OFFSET UNITYSDK_OFFSET(0x11DAB50)
#define MX_LOGIC_DATA_BATTLESETTING_SET_CONQUESTGROUPBUFFID_OFFSET UNITYSDK_OFFSET(0x11DAB60)
#define MX_LOGIC_DATA_BATTLESETTING_GET_CONQUESTENEMYTYPE_OFFSET UNITYSDK_OFFSET(0x11DAB70)
#define MX_LOGIC_DATA_BATTLESETTING_SET_CONQUESTENEMYTYPE_OFFSET UNITYSDK_OFFSET(0x11DAB80)
#define MX_LOGIC_DATA_BATTLESETTING_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x11DAB90)
#define MX_LOGIC_DATA_BATTLESETTING_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x11DABA0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x11DABB0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x11DABC0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_DISABLEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x11DABD0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_DISABLEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x11DABE0)
#define MX_LOGIC_DATA_BATTLESETTING_INITEVENT_OFFSET UNITYSDK_OFFSET(0x11DABF0)
#define MX_LOGIC_DATA_BATTLESETTING_GET_BATTLEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x11DACD0)
#define MX_LOGIC_DATA_BATTLESETTING_SET_BATTLEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x11DACE0)
#define MX_LOGIC_DATA_BATTLESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DAD00)
#define MX_LOGIC_DATA_BATTLESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DADE0)
#define MX_LOGIC_DATA_BATTLESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DAE10)
#define MX_LOGIC_DATA_BATTLESETTING_INITGROUND_OFFSET UNITYSDK_OFFSET(0x11DAEE0)
#define MX_LOGIC_DATA_BATTLESETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DB010)
#define MX_LOGIC_DATA_BATTLESETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DB110)
#define MX_LOGIC_DATA_BATTLESETTING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11DB1C0)
#define MX_LOGIC_DATA_BATTLESETTING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11D26D0)
#define MX_LOGIC_DATA_BATTLESETTING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11DB380)
#define MX_LOGIC_DATA_BATTLESETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DB070)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BattleSetting_TypeDefinitionIndex = 13423;

	class BattleSetting : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* _BattleType_k__BackingField; // 0x10
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x14
		::System::Int32 _RandomSeed_k__BackingField; // 0x18
		::System::Int32 _BattleDurationInFrame_k__BackingField; // 0x1C
		::MX::Logic::Data::TeamSetting* _LeftTeam_k__BackingField; // 0x20
		::MX::Logic::Data::TeamSetting* _RightTeam_k__BackingField; // 0x28
		::System::Int64 _GroundUniqueId_k__BackingField; // 0x30
		::System::Int64 _StageId_k__BackingField; // 0x38
		::System::String* _StageNumber_k__BackingField; // 0x40
		::System::String* _StageName_k__BackingField; // 0x48
		::FlatData::TacticEnvironment* _EnvironmentType_k__BackingField; // 0x50
		::FlatData::StageTopography* _StageTopography_k__BackingField; // 0x54
		::System::String* _GroundSceneName_k__BackingField; // 0x58
		::System::String* _GroundGridFileName_k__BackingField; // 0x60
		::System::String* _GroundStageName_k__BackingField; // 0x68
		::System::Boolean _IsDefeatBattle_k__BackingField; // 0x70
		::System::Boolean _HideBattleUIFromScratch_k__BackingField; // 0x71
		::FlatData::UIEnemyCountType* _UIEnemyCount_k__BackingField; // 0x74
		::System::Int64 _TSSAirUnitHeight_k__BackingField; // 0x78
		::System::Int64 _PlayerPositionGapRate_k__BackingField; // 0x80
		::System::Int64 _EnemyPositionGapRate_k__BackingField; // 0x88
		::System::Boolean _IsBoss_k__BackingField; // 0x90
		Il2CppObject* _ClanAssistUseInfo_k__BackingField; // 0x98
		::MX::Logic::Data::RaidSetting* _RaidSetting_k__BackingField; // 0xA0
		::MX::Logic::Data::EventBattleSetting* _EventSetting_k__BackingField; // 0xA8
		::MX::Logic::Data::TimeAttackSetting* _TimeAttackSetting_k__BackingField; // 0xB0
		::System::Int64 _ConquestGroupBuffId_k__BackingField; // 0xB8
		::FlatData::ConquestEnemyType* _ConquestEnemyType_k__BackingField; // 0xC0
		::System::Int64 _EventContentId_k__BackingField; // 0xC8
		::System::Int64 _FixedEchelonId_k__BackingField; // 0xD0
		::System::Boolean _DisableRootMotion_k__BackingField; // 0xD8
		Il2CppObject* _BattleRewardItems_k__BackingField; // 0xE0

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void set_BattleType(::MX::Logic::Data::BattleTypes* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_BATTLETYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_RANDOMSEED_OFFSET))(nullptr);
		}

		::System::Void set_RandomSeed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_RANDOMSEED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BattleDurationInFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_BATTLEDURATIONINFRAME_OFFSET))(nullptr);
		}

		::System::Void set_BattleDurationInFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_BATTLEDURATIONINFRAME_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::TeamSetting* get_LeftTeam()
		{
			return ((::MX::Logic::Data::TeamSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_LEFTTEAM_OFFSET))(nullptr);
		}

		::System::Void set_LeftTeam(::MX::Logic::Data::TeamSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_LEFTTEAM_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::TeamSetting* get_RightTeam()
		{
			return ((::MX::Logic::Data::TeamSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_RIGHTTEAM_OFFSET))(nullptr);
		}

		::System::Void set_RightTeam(::MX::Logic::Data::TeamSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_RIGHTTEAM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroundUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_GroundUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_StageNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_StageNumber(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_STAGENUMBER_OFFSET))(str, nullptr);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_STAGENAME_OFFSET))(nullptr);
		}

		::System::Void set_StageName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_STAGENAME_OFFSET))(str, nullptr);
		}

		::FlatData::TacticEnvironment* get_EnvironmentType()
		{
			return ((::FlatData::TacticEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_ENVIRONMENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EnvironmentType(::FlatData::TacticEnvironment* arg)
		{
			((::System::Void(*)(::FlatData::TacticEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_ENVIRONMENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Void set_StageTopography(::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_STAGETOPOGRAPHY_OFFSET))(arg, nullptr);
		}

		::System::String* get_GroundSceneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDSCENENAME_OFFSET))(nullptr);
		}

		::System::Void set_GroundSceneName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDSCENENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_GroundGridFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDGRIDFILENAME_OFFSET))(nullptr);
		}

		::System::Void set_GroundGridFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDGRIDFILENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_GroundStageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_GROUNDSTAGENAME_OFFSET))(nullptr);
		}

		::System::Void set_GroundStageName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_GROUNDSTAGENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsDefeatBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_ISDEFEATBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_IsDefeatBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_ISDEFEATBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideBattleUIFromScratch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_HIDEBATTLEUIFROMSCRATCH_OFFSET))(nullptr);
		}

		::System::Void set_HideBattleUIFromScratch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_HIDEBATTLEUIFROMSCRATCH_OFFSET))(arg, nullptr);
		}

		::FlatData::UIEnemyCountType* get_UIEnemyCount()
		{
			return ((::FlatData::UIEnemyCountType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_UIENEMYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_UIEnemyCount(::FlatData::UIEnemyCountType* arg)
		{
			((::System::Void(*)(::FlatData::UIEnemyCountType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_UIENEMYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSAirUnitHeight()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_TSSAIRUNITHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_TSSAirUnitHeight(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_TSSAIRUNITHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlayerPositionGapRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_PLAYERPOSITIONGAPRATE_OFFSET))(nullptr);
		}

		::System::Void set_PlayerPositionGapRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_PLAYERPOSITIONGAPRATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnemyPositionGapRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_ENEMYPOSITIONGAPRATE_OFFSET))(nullptr);
		}

		::System::Void set_EnemyPositionGapRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_ENEMYPOSITIONGAPRATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_ISBOSS_OFFSET))(nullptr);
		}

		::System::Void set_IsBoss(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_ISBOSS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClanAssistUseInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_CLANASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_ClanAssistUseInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_CLANASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RaidBossInitialPhase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_RAIDBOSSINITIALPHASE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RaidSetting* get_RaidSetting()
		{
			return ((::MX::Logic::Data::RaidSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_RAIDSETTING_OFFSET))(nullptr);
		}

		::System::Void set_RaidSetting(::MX::Logic::Data::RaidSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_RAIDSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::EventBattleSetting* get_EventSetting()
		{
			return ((::MX::Logic::Data::EventBattleSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_EVENTSETTING_OFFSET))(nullptr);
		}

		::System::Void set_EventSetting(::MX::Logic::Data::EventBattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::EventBattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_EVENTSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::TimeAttackSetting* get_TimeAttackSetting()
		{
			return ((::MX::Logic::Data::TimeAttackSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_TIMEATTACKSETTING_OFFSET))(nullptr);
		}

		::System::Void set_TimeAttackSetting(::MX::Logic::Data::TimeAttackSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::TimeAttackSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_TIMEATTACKSETTING_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConquestGroupBuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_CONQUESTGROUPBUFFID_OFFSET))(nullptr);
		}

		::System::Void set_ConquestGroupBuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_CONQUESTGROUPBUFFID_OFFSET))(arg, nullptr);
		}

		::FlatData::ConquestEnemyType* get_ConquestEnemyType()
		{
			return ((::FlatData::ConquestEnemyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_CONQUESTENEMYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ConquestEnemyType(::FlatData::ConquestEnemyType* arg)
		{
			((::System::Void(*)(::FlatData::ConquestEnemyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_CONQUESTENEMYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void set_FixedEchelonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_FIXEDECHELONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisableRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_DISABLEROOTMOTION_OFFSET))(nullptr);
		}

		::System::Void set_DisableRootMotion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_DISABLEROOTMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void InitEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_INITEVENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BattleRewardItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GET_BATTLEREWARDITEMS_OFFSET))(nullptr);
		}

		::System::Void set_BattleRewardItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_SET_BATTLEREWARDITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleTypes* arg, ::MX::Data::Excel::GroundExcel* arg2)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, ::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleTypes* arg, ::MX::Data::Excel::GroundExcel* arg2, ::MX::Logic::Data::TeamSetting* arg3, ::MX::Logic::Data::TeamSetting* arg4)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, ::MX::Data::Excel::GroundExcel*, ::MX::Logic::Data::TeamSetting*, ::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitGround(::MX::Data::Excel::GroundExcel* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::GroundExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_INITGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::BattleSetting* arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BattleSetting*, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::BattleSetting* arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BattleSetting*, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::BattleSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLESETTING_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

