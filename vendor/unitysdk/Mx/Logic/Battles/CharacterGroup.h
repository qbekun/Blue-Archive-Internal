#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class StatCorrection; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class SyncUseSkillManager; }
namespace MX::Logic::Battles { class SightChangedEventArgs; }
namespace MX::Logic::BattleEntities { class SupportActor; }
class GroundNode;
class BlockedArea;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Logic::Battles { class Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62; }
namespace FlatData { class TacticEntityType; }
namespace MX::Logic::BattleEntities { class TemporaryCanUseSkillArea; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
class GroundGrid;
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class GroundFormationBeacon; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace FlatData { class School; }
namespace MX::Logic::Battles { class GroupStatTypes; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::Battles { class HeroReviveEventArgs; }
namespace MX::Logic::Battles { class CharacterGroundNodeChangedEventArgs; }
namespace MX::Logic::BattleEntities { class StatusAddedEventArgs; }
namespace MX::Logic::Battles { class AttackEventArgs; }
namespace FlatData { class ConcentratedTargetType; }

#define MX_LOGIC_BATTLES_CHARACTERGROUP_ADD_SIGHTCHANGED_OFFSET UNITYSDK_OFFSET(0x138B480)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVE_SIGHTCHANGED_OFFSET UNITYSDK_OFFSET(0x138B520)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ONSIGHTCHANGED_OFFSET UNITYSDK_OFFSET(0x138B5C0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x138B5E0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x138B5F0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x138B600)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x138B610)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_MAXCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x138B620)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SUPPORTACTIONUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x138B630)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SUPPORTACTIONUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x138B640)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x138B650)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x138B660)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_ACTIVECHARACTERS_OFFSET UNITYSDK_OFFSET(0x138B670)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_ACTIVECHARACTERS_OFFSET UNITYSDK_OFFSET(0x138B680)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_ALIVECHARACTERS_OFFSET UNITYSDK_OFFSET(0x138B690)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_ALIVECHARACTERS_OFFSET UNITYSDK_OFFSET(0x138B6A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_FINDSUPPORTER_OFFSET UNITYSDK_OFFSET(0x138B6B0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_HASSURVIVOR_OFFSET UNITYSDK_OFFSET(0x138B780)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_HASSURVIVOR_OFFSET UNITYSDK_OFFSET(0x138B790)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CHARACTERSINSIGHT_OFFSET UNITYSDK_OFFSET(0x138B7A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CHARACTERSINSIGHTINCLUDEDEAD_OFFSET UNITYSDK_OFFSET(0x138BD90)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_LEADER_OFFSET UNITYSDK_OFFSET(0x138BDA0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_LEADER_OFFSET UNITYSDK_OFFSET(0x138BDB0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_FORMATIONBEACONS_OFFSET UNITYSDK_OFFSET(0x138BDC0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_FORMATIONBEACONS_OFFSET UNITYSDK_OFFSET(0x138BDD0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_STATCORRECTION_OFFSET UNITYSDK_OFFSET(0x138BDE0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CHECKTSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x138BE10)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_CHECKTSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x138BE20)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x138BE30)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x138BE40)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x138BE50)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x138BE60)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_HANDCOUNT_OFFSET UNITYSDK_OFFSET(0x138BE70)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_HANDCOUNT_OFFSET UNITYSDK_OFFSET(0x138BE80)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_IGNORESKILLCARDSHUFFLE_OFFSET UNITYSDK_OFFSET(0x138BE90)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_IGNORESKILLCARDSHUFFLE_OFFSET UNITYSDK_OFFSET(0x138BEA0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SKILLCARDMANAGERTABLE_OFFSET UNITYSDK_OFFSET(0x138BEB0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SKILLCARDMANAGERTABLE_OFFSET UNITYSDK_OFFSET(0x138BEC0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SIGHTGRIDS_OFFSET UNITYSDK_OFFSET(0x138BEE0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SIGHTGRIDS_OFFSET UNITYSDK_OFFSET(0x138BEF0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_MAXCHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x138BF10)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CONCENTRATEDTARGETS_OFFSET UNITYSDK_OFFSET(0x138C1B0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_CONCENTRATEDTARGETS_OFFSET UNITYSDK_OFFSET(0x138C1C0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ISINBLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0x138C1E0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ADDBLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0x138C2D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVEBLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0x138C380)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_HASNOTMOVELOGICEFFECTCHARACTER_OFFSET UNITYSDK_OFFSET(0x138C6B0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x138C7D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x138C7E0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ISCHARACTEROFAIGROUPIDATTACKED_OFFSET UNITYSDK_OFFSET(0x138C7F0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SETCHARACTEROFAIGROUPIDATTACKABLE_OFFSET UNITYSDK_OFFSET(0x138C850)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SKILLACTOR_OFFSET UNITYSDK_OFFSET(0x138C8A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SKILLACTOR_OFFSET UNITYSDK_OFFSET(0x138C8B0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x138C8D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x138C8E0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TEMPORARYCANUSESKILLAREAS_OFFSET UNITYSDK_OFFSET(0x138C900)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TEMPORARYCANUSESKILLAREAS_OFFSET UNITYSDK_OFFSET(0x138C910)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SKIPUNTARGETABLETARGETCHECKINMOVE_OFFSET UNITYSDK_OFFSET(0x138C930)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SKIPUNTARGETABLETARGETCHECKINMOVE_OFFSET UNITYSDK_OFFSET(0x138C940)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SIGHTRANGEMAX_OFFSET UNITYSDK_OFFSET(0x138C950)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_POSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x138C960)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SYNCUSESKILLMANAGER_OFFSET UNITYSDK_OFFSET(0x138C970)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x138C980)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_CANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_CREATESKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_CREATESKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ADDSKILLCARDTOMANAGER_OFFSET UNITYSDK_OFFSET(0x138D0D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ADDSKILLCARDTOMANAGER_OFFSET UNITYSDK_OFFSET(0x138D1D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETSKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x138D2D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_HAVEENOUGHSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1384440)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ADDTEMPORARYCANUSESKILLAREAS_OFFSET UNITYSDK_OFFSET(0x138D360)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVETEMPORARYCANUSESKILLAREAS_OFFSET UNITYSDK_OFFSET(0x138D420)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ISINTEMPORARYCANUSESKILLAREA_OFFSET UNITYSDK_OFFSET(0x138D470)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_INITCHARACTERS_OFFSET UNITYSDK_OFFSET(0x138D560)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SETHASSURVIVORINRETREAT_OFFSET UNITYSDK_OFFSET(0x138D8F0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REGISTERSKILLACTOR_OFFSET UNITYSDK_OFFSET(0x138D900)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_PROCESSSECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x138D950)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ISOBSTACLEINSIGHTOFGROUP_OFFSET UNITYSDK_OFFSET(0x138E5A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ISVISIBLENODE_OFFSET UNITYSDK_OFFSET(0x138E650)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ADDSUPPORTER_OFFSET UNITYSDK_OFFSET(0x138E6D0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVESUPPORTER_OFFSET UNITYSDK_OFFSET(0x138E7A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ADDCHARACTER_OFFSET UNITYSDK_OFFSET(0x138EA00)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_FINDCHARACTER_OFFSET UNITYSDK_OFFSET(0x138EDF0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_FINDCHARACTER_OFFSET UNITYSDK_OFFSET(0x138EE60)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_FINDCHARACTERBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x138EF30)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_FINDENTITY_OFFSET UNITYSDK_OFFSET(0x138F0B0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SETLEADERUNIT_OFFSET UNITYSDK_OFFSET(0x138F210)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ATTACHBEACON_OFFSET UNITYSDK_OFFSET(0x138F510)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_FINDFORMATIONBEACON_OFFSET UNITYSDK_OFFSET(0x138F9A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ISCHANGETOCONCENTRATEDTARGETREQUIRED_OFFSET UNITYSDK_OFFSET(0x138FA50)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ISVALIDTARGETINCONCENTRATEDTARGETCHECK_OFFSET UNITYSDK_OFFSET(0x138FAD0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_SETCONCENTRATEDTARGET_OFFSET UNITYSDK_OFFSET(0x1390EF0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_RELEASECONCENTRATEDTARGET_OFFSET UNITYSDK_OFFSET(0x1391320)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_UPDATESUPPORTER_OFFSET UNITYSDK_OFFSET(0x13913A0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_CALCULATESUPPORTPOSITIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1391900)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1391A40)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_UPDATEPASSIVE_OFFSET UNITYSDK_OFFSET(0x1391C40)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_INITPASSIVE_OFFSET UNITYSDK_OFFSET(0x1391F20)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_ENABLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x13921F0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_DISABLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x13924C0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETSCHOOLCOUNT_OFFSET UNITYSDK_OFFSET(0x1392790)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETSCHOOLCOUNT_OFFSET UNITYSDK_OFFSET(0x1392B10)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETSTAT_OFFSET UNITYSDK_OFFSET(0x1392E20)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETNEXTLINEINDEX_OFFSET UNITYSDK_OFFSET(0x1393500)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_BATTLE_HERODEADORDYING_OFFSET UNITYSDK_OFFSET(0x1393790)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVESKILLCARDOFCHARACTER_OFFSET UNITYSDK_OFFSET(0x1393B40)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVESKILLCARDOFSUPPORTER_OFFSET UNITYSDK_OFFSET(0x138E850)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_BATTLE_HEROREVIVED_OFFSET UNITYSDK_OFFSET(0x1393D40)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_BATTLE_BATTLEENTITYNODECHANGED_OFFSET UNITYSDK_OFFSET(0x1393FF0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REFRESHCHARACTERSINSIGHT_OFFSET UNITYSDK_OFFSET(0x1391000)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REFRESHFORMATIONBEACONONSECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x138DC40)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETCHARACTERSINSIGHT_OFFSET UNITYSDK_OFFSET(0x138B7B0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REFRESHSIGHTGRIDARRAY_OFFSET UNITYSDK_OFFSET(0x138DF30)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_CHARACTER_STATUSDEADORDYING_OFFSET UNITYSDK_OFFSET(0x1394B30)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x1394BD0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_REVIVE_OFFSET UNITYSDK_OFFSET(0x1394FD0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETALLENTITY_OFFSET UNITYSDK_OFFSET(0x1396D40)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GETALLCOSTUMEDATA_OFFSET UNITYSDK_OFFSET(0x1396DF0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1396EA0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1396F90)
#define MX_LOGIC_BATTLES_CHARACTERGROUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1397130)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__GETVALIDCONCENTRATEDTARGETS|157_0_OFFSET UNITYSDK_OFFSET(0x138FD80)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__GETHIGHESTPRIORITYSTATUS|157_1_OFFSET UNITYSDK_OFFSET(0x13909F0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISVALIDTARGET|157_2_OFFSET UNITYSDK_OFFSET(0x1390AE0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__EXISTSHIGHERPRIORITYTARGET|157_3_OFFSET UNITYSDK_OFFSET(0x1390BE0)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISHIGHERPRIORITY|157_4_OFFSET UNITYSDK_OFFSET(0x1397460)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISVALIDTARGETTYPE|157_5_OFFSET UNITYSDK_OFFSET(0x1397390)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISINRANGE|157_6_OFFSET UNITYSDK_OFFSET(0x1397410)
#define MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__GETCONCENTRATEDTYPE|157_7_OFFSET UNITYSDK_OFFSET(0x1397290)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterGroup_TypeDefinitionIndex = 14432;

	class CharacterGroup : public Il2CppObject
	{
	public:
		Il2CppObject* SightChanged; // 0x10
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x18
		::System::Int64 _TeamId_k__BackingField; // 0x20
		::System::String* _SupportActionUniqueName_k__BackingField; // 0x28
		::System::Boolean _IsExtension_k__BackingField; // 0x30
		Il2CppObject* _ActiveCharacters_k__BackingField; // 0x38
		Il2CppObject* _AliveCharacters_k__BackingField; // 0x40
		Il2CppObject* Supporters; // 0x48
		::System::Boolean _HasSurvivor_k__BackingField; // 0x50
		::MX::Logic::BattleEntities::BattleEntity* _Leader_k__BackingField; // 0x58
		Il2CppObject* _FormationBeacons_k__BackingField; // 0x60
		Il2CppObject* linkedFormationBeacons; // 0x68
		::MX::Logic::Data::StatCorrection* _StatCorrection_k__BackingField; // 0x70
		::System::Boolean _CheckTSSInteractionServerId_k__BackingField; // 0xA8
		::System::Int64 _TSSInteractionServerId_k__BackingField; // 0xB0
		::System::Int64 _TSSInteractionUniqueId_k__BackingField; // 0xB8
		::System::Int32 _HandCount_k__BackingField; // 0xC0
		::System::Boolean _IgnoreSkillCardShuffle_k__BackingField; // 0xC4
		Il2CppObject* _SkillCardManagerTable_k__BackingField; // 0xC8
		::Il2CppArray<::System::Object*>* sightGrids; // 0xD0
		Il2CppObject* _ConcentratedTargets_k__BackingField; // 0xD8
		Il2CppObject* ConcentratedTypeDic; // 0xE0
		Il2CppObject* BlockedAreas; // 0xE8
		Il2CppObject* aiGroupIdOfAttackedCharacter; // 0xF0
		Il2CppObject* AttackedCharacter; // 0xF8
		Il2CppObject* supportersToRemove; // 0x100
		::System::Int32 _GroupId_k__BackingField; // 0x108
		::MX::Logic::BattleEntities::SkillActor* _SkillActor_k__BackingField; // 0x110
		::MX::Logic::Battles::Battle* _BattleCache_k__BackingField; // 0x118
		Il2CppObject* discoveredEnemies; // 0x120
		::System::Int32 currentSectionId; // 0x128
		Il2CppObject* _TemporaryCanUseSkillAreas_k__BackingField; // 0x130
		::System::Boolean _SkipUntargetableTargetCheckInMove_k__BackingField; // 0x138
		::System::Boolean _SightRangeMax_k__BackingField; // 0x139
		::System::Int64 _PositionGapRate_k__BackingField; // 0x140
		::MX::Logic::Battles::SyncUseSkillManager* _SyncUseSkillManager_k__BackingField; // 0x148

		::System::Void add_SightChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ADD_SIGHTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SightChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVE_SIGHTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSightChanged(::MX::Logic::Battles::SightChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::SightChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ONSIGHTCHANGED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::System::Void set_GroupTag(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_GROUPTAG_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TeamId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TEAMID_OFFSET))(nullptr);
		}

		::System::Void set_TeamId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TEAMID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxCharacterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_MAXCHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_SupportActionUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SUPPORTACTIONUNIQUENAME_OFFSET))(nullptr);
		}

		::System::Void set_SupportActionUniqueName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SUPPORTACTIONUNIQUENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_ISEXTENSION_OFFSET))(nullptr);
		}

		::System::Void set_IsExtension(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_ISEXTENSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ActiveCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_ACTIVECHARACTERS_OFFSET))(nullptr);
		}

		::System::Void set_ActiveCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_ACTIVECHARACTERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AliveCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_ALIVECHARACTERS_OFFSET))(nullptr);
		}

		::System::Void set_AliveCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_ALIVECHARACTERS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* FindSupporter(::System::Int64 arg)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_FINDSUPPORTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasSurvivor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_HASSURVIVOR_OFFSET))(nullptr);
		}

		::System::Void set_HasSurvivor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_HASSURVIVOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CharactersInSight()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CHARACTERSINSIGHT_OFFSET))(nullptr);
		}

		Il2CppObject* get_CharactersInSightIncludeDead()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CHARACTERSINSIGHTINCLUDEDEAD_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Leader()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_LEADER_OFFSET))(nullptr);
		}

		::System::Void set_Leader(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_LEADER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FormationBeacons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_FORMATIONBEACONS_OFFSET))(nullptr);
		}

		::System::Void set_FormationBeacons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_FORMATIONBEACONS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::StatCorrection* get_StatCorrection()
		{
			return ((::MX::Logic::Data::StatCorrection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_STATCORRECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckTSSInteractionServerId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CHECKTSSINTERACTIONSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_CheckTSSInteractionServerId(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_CHECKTSSINTERACTIONSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TSSINTERACTIONSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TSSINTERACTIONSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TSSINTERACTIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TSSINTERACTIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HandCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_HANDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_HandCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_HANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreSkillCardShuffle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_IGNORESKILLCARDSHUFFLE_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreSkillCardShuffle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_IGNORESKILLCARDSHUFFLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillCardManagerTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SKILLCARDMANAGERTABLE_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardManagerTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SKILLCARDMANAGERTABLE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SightGrids()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SIGHTGRIDS_OFFSET))(nullptr);
		}

		::System::Void set_SightGrids(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SIGHTGRIDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxCharacterLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_MAXCHARACTERLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConcentratedTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CONCENTRATEDTARGETS_OFFSET))(nullptr);
		}

		::System::Void set_ConcentratedTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_CONCENTRATEDTARGETS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInBlockedArea(GroundNode* arg)
		{
			return ((::System::Boolean(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ISINBLOCKEDAREA_OFFSET))(arg, nullptr);
		}

		::System::Void AddBlockedArea(BlockedArea* arg)
		{
			((::System::Void(*)(BlockedArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ADDBLOCKEDAREA_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveBlockedArea(BlockedArea* arg)
		{
			((::System::Void(*)(BlockedArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVEBLOCKEDAREA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasNotMoveLogicEffectCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_HASNOTMOVELOGICEFFECTCHARACTER_OFFSET))(nullptr);
		}

		::System::Int32 get_GroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCharacterOfAIGroupIdAttacked(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ISCHARACTEROFAIGROUPIDATTACKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacterOfAIGroupIdAttackable(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SETCHARACTEROFAIGROUPIDATTACKABLE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillActor* get_SkillActor()
		{
			return ((::MX::Logic::BattleEntities::SkillActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SKILLACTOR_OFFSET))(nullptr);
		}

		::System::Void set_SkillActor(::MX::Logic::BattleEntities::SkillActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SKILLACTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Battle* get_BattleCache()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_BATTLECACHE_OFFSET))(nullptr);
		}

		::System::Void set_BattleCache(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_BATTLECACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TemporaryCanUseSkillAreas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_TEMPORARYCANUSESKILLAREAS_OFFSET))(nullptr);
		}

		::System::Void set_TemporaryCanUseSkillAreas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_TEMPORARYCANUSESKILLAREAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SkipUntargetableTargetCheckInMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SKIPUNTARGETABLETARGETCHECKINMOVE_OFFSET))(nullptr);
		}

		::System::Void set_SkipUntargetableTargetCheckInMove(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SET_SKIPUNTARGETABLETARGETCHECKINMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SightRangeMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SIGHTRANGEMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_PositionGapRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_POSITIONGAPRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::SyncUseSkillManager* get_SyncUseSkillManager()
		{
			return ((::MX::Logic::Battles::SyncUseSkillManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_SYNCUSESKILLMANAGER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::TeamSetting* arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::TeamSetting*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CanUseAutoSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_CANUSEAUTOSKILL_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62* CreateSkillCardManager(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_CREATESKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62* CreateSkillCardManager(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62*(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_CREATESKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void AddSkillCardToManager(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ADDSKILLCARDTOMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void AddSkillCardToManager(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ADDSKILLCARDTOMANAGER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62* GetSkillCardManager(::System::Int32 arg, ::FlatData::TacticEntityType* arg2)
		{
			return ((::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62*(*)(::System::Int32, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETSKILLCARDMANAGER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HaveEnoughSkillCost(::System::Single arg, ::System::Boolean arg2, ::System::Int32 arg3, ::FlatData::TacticEntityType* arg4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Boolean, ::System::Int32, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_HAVEENOUGHSKILLCOST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddTemporaryCanUseSkillAreas(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ADDTEMPORARYCANUSESKILLAREAS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveTemporaryCanUseSkillAreas(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::TemporaryCanUseSkillArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVETEMPORARYCANUSESKILLAREAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInTemporaryCanUseSkillArea(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ISINTEMPORARYCANUSESKILLAREA_OFFSET))(arg, nullptr);
		}

		::System::Void InitCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_INITCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetHasSurvivorInRetreat(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SETHASSURVIVORINRETREAT_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterSkillActor(::MX::Logic::BattleEntities::SkillActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REGISTERSKILLACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSectionChanged(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_PROCESSSECTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsObstacleInSightOfGroup(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ISOBSTACLEINSIGHTOFGROUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVisibleNode(GroundNode* arg)
		{
			return ((::System::Boolean(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ISVISIBLENODE_OFFSET))(arg, nullptr);
		}

		::System::Void AddSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::SupportActor* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ADDSUPPORTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::SupportActor* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVESUPPORTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, GroundGrid* arg2, ::UnityEngine::Vector2* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, GroundGrid*, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ADDCHARACTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* FindCharacter(::System::Int32 arg)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_FINDCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* FindCharacter(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_FINDCHARACTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindCharacterByCharacterId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_FINDCHARACTERBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindEntity(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_FINDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetLeaderUnit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SETLEADERUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void AttachBeacon(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ATTACHBEACON_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::GroundFormationBeacon* FindFormationBeacon(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::MX::Logic::Battles::GroundFormationBeacon*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_FINDFORMATIONBEACON_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsChangeToConcentratedTargetRequired(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2, ::MX::Logic::Skills::TargetSideId* arg3, ::MX::Logic::Skills::TargetEntityType* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::BattleEntities::SkillSlot* arg6, ::System::Boolean arg7)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::Skills::TargetSideId*, ::MX::Logic::Skills::TargetEntityType*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ISCHANGETOCONCENTRATEDTARGETREQUIRED_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean IsValidTargetInConcentratedTargetCheck(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::TargetEntityType* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::BattleEntities::SkillSlot* arg5, ::System::Boolean arg6)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::TargetEntityType*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ISVALIDTARGETINCONCENTRATEDTARGETCHECK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetConcentratedTarget(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_SETCONCENTRATEDTARGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReleaseConcentratedTarget(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_RELEASECONCENTRATEDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSupporter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_UPDATESUPPORTER_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateSupportPositionDirection(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2&* arg2, ::UnityEngine::Vector2&* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_CALCULATESUPPORTPOSITIONDIRECTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_UPDATEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void InitPassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_INITPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void EnablePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_ENABLEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void DisablePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_DISABLEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSchoolCount(::FlatData::School* arg)
		{
			return ((::System::Int32(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETSCHOOLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSchoolCount(::FlatData::School* arg, ::FlatData::School* arg2)
		{
			return ((::System::Int32(*)(::FlatData::School*, ::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETSCHOOLCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetStat(::MX::Logic::Battles::GroupStatTypes* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::GroupStatTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETSTAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNextLineIndex(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETNEXTLINEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_HeroDeadOrDying(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_BATTLE_HERODEADORDYING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveSkillCardOfCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVESKILLCARDOFCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSkillCardOfSupporter(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REMOVESKILLCARDOFSUPPORTER_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_HeroRevived(::System::Object* arg, ::MX::Logic::Battles::HeroReviveEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::HeroReviveEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_BATTLE_HEROREVIVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleEntityNodeChanged(::System::Object* arg, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_BATTLE_BATTLEENTITYNODECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCharactersInSight(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REFRESHCHARACTERSINSIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshFormationBeaconOnSectionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REFRESHFORMATIONBEACONONSECTIONCHANGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharactersInSight(::MX::Logic::Battles::Battle* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETCHARACTERSINSIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshSightGridArray(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, GroundGrid* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, GroundGrid*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REFRESHSIGHTGRIDARRAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Character_StatusDeadOrDying(::System::Object* arg, ::MX::Logic::BattleEntities::StatusAddedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::StatusAddedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_CHARACTER_STATUSDEADORDYING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Revive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_REVIVE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllEntity()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETALLENTITY_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllCostumeData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GETALLCOSTUMEDATA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_CENTER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP_CONTAINS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _IsValidTargetInConcentratedTargetCheck_g__GetValidConcentratedTargets|157_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, <>c__DisplayClass157_0&* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, <>c__DisplayClass157_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__GETVALIDCONCENTRATEDTARGETS|157_0_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* _IsValidTargetInConcentratedTargetCheck_g__GetHighestPriorityStatus|157_1(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__GETHIGHESTPRIORITYSTATUS|157_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsValidTargetInConcentratedTargetCheck_g__IsValidTarget|157_2(Il2CppObject* arg, <>c__DisplayClass157_0&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, <>c__DisplayClass157_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISVALIDTARGET|157_2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _IsValidTargetInConcentratedTargetCheck_g__ExistsHigherPriorityTarget|157_3(Il2CppObject* arg, <>c__DisplayClass157_0&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, <>c__DisplayClass157_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__EXISTSHIGHERPRIORITYTARGET|157_3_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _IsValidTargetInConcentratedTargetCheck_g__IsHigherPriority|157_4(::System::Boolean arg, ::System::Int32 arg2, ::System::Boolean arg3, ::System::Int32 arg4)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISHIGHERPRIORITY|157_4_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _IsValidTargetInConcentratedTargetCheck_g__IsValidTargetType|157_5(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, <>c__DisplayClass157_0&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, <>c__DisplayClass157_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISVALIDTARGETTYPE|157_5_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _IsValidTargetInConcentratedTargetCheck_g__IsInRange|157_6(::UnityEngine::Vector2* arg, ::System::Int64 arg2, <>c__DisplayClass157_0&* arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Int64, <>c__DisplayClass157_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__ISINRANGE|157_6_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::ConcentratedTargetType* _IsValidTargetInConcentratedTargetCheck_g__GetConcentratedType|157_7(::System::String* str, <>c__DisplayClass157_0&* arg)
		{
			return ((::FlatData::ConcentratedTargetType*(*)(::System::String*, <>c__DisplayClass157_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERGROUP__ISVALIDTARGETINCONCENTRATEDTARGETCHECK_G__GETCONCENTRATEDTYPE|157_7_OFFSET))(str, arg, nullptr);
		}

	};
}

