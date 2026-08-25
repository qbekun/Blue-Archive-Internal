#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class GroundFormationBeacon; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::BattleEntities { class AreaSpawner; }
namespace MX::Logic::BattleEntities { class SkillEntityTimelineSpawner; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Data { class CharacterEntityValue; }
namespace MX::Logic::BattleEntities { class HeroSummaryDetailFlag; }

#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_ADD_SUMMONEDCHARACTEREXPIREREQUESTED_OFFSET UNITYSDK_OFFSET(0x114ECA0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_REMOVE_SUMMONEDCHARACTEREXPIREREQUESTED_OFFSET UNITYSDK_OFFSET(0x114ED40)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_ONSUMMONEDCHARACTEREXPIREREQUESTED_OFFSET UNITYSDK_OFFSET(0x114EDE0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMONER_OFFSET UNITYSDK_OFFSET(0x114EE10)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SUMMONER_OFFSET UNITYSDK_OFFSET(0x114EE20)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x114EE40)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x114EE50)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SKILLSPECIFICATIONSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x114EE70)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SKILLSPECIFICATIONSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x114EE80)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_INDEXSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x114EEA0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_INDEXSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x114EEB0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_LINKEDFORMATIONBEACON_OFFSET UNITYSDK_OFFSET(0x114EEC0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_LINKEDFORMATIONBEACON_OFFSET UNITYSDK_OFFSET(0x114EED0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMONDURATIONREMAINED_OFFSET UNITYSDK_OFFSET(0x114EEF0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SUMMONDURATIONREMAINED_OFFSET UNITYSDK_OFFSET(0x114EF00)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMONDURATIONMAX_OFFSET UNITYSDK_OFFSET(0x114EF10)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SUMMONDURATIONMAX_OFFSET UNITYSDK_OFFSET(0x114EF20)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_IGNORECRASHBYTSSOBSTACLECHECK_OFFSET UNITYSDK_OFFSET(0x114EF30)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_IGNORECRASHBYTSSOBSTACLECHECK_OFFSET UNITYSDK_OFFSET(0x114EF40)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x114EF50)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x114F010)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x114F230)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x114F2E0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SETSUMMONERINFO_OFFSET UNITYSDK_OFFSET(0x114F550)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SETLINKEDFORMATION_OFFSET UNITYSDK_OFFSET(0x114F990)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_EXPIRESUMMONEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x114FB70)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x114FBA0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_PROCESSCHECKDISTANCETOALLY_OFFSET UNITYSDK_OFFSET(0x114FD10)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_PROCESSSUMMONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x11504D0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMARYDETAIL_OFFSET UNITYSDK_OFFSET(0x1150590)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SummonedCharacter_TypeDefinitionIndex = 13135;

	class SummonedCharacter : public Il2CppObject
	{
	public:
		::System::EventHandler* SummonedCharacterExpireRequested; // 0x488
		::MX::Logic::BattleEntities::BattleEntity* _Summoner_k__BackingField; // 0x490
		::MX::Logic::BattleEntities::BattleEntity* _Origin_k__BackingField; // 0x498
		::MX::Logic::Skills::SkillSpecification* _SkillSpecificationSummonedBy_k__BackingField; // 0x4A0
		::System::Int32 _IndexSummonedBy_k__BackingField; // 0x4A8
		::MX::Logic::Battles::GroundFormationBeacon* _LinkedFormationBeacon_k__BackingField; // 0x4B0
		::System::Single teleportDistance; // 0x4B8
		::System::Int64 _SummonDurationRemained_k__BackingField; // 0x4C0
		::System::Int64 _SummonDurationMax_k__BackingField; // 0x4C8
		::System::Boolean isPlayableCharacter; // 0x4D0
		::System::Boolean _IgnoreCrashByTSSObstacleCheck_k__BackingField; // 0x4D1

		::System::Void add_SummonedCharacterExpireRequested(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_ADD_SUMMONEDCHARACTEREXPIREREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SummonedCharacterExpireRequested(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_REMOVE_SUMMONEDCHARACTEREXPIREREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSummonedCharacterExpireRequested()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_ONSUMMONEDCHARACTEREXPIREREQUESTED_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Summoner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMONER_OFFSET))(nullptr);
		}

		::System::Void set_Summoner(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SUMMONER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Origin()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_ORIGIN_OFFSET))(nullptr);
		}

		::System::Void set_Origin(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_ORIGIN_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecificationSummonedBy()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SKILLSPECIFICATIONSUMMONEDBY_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecificationSummonedBy(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SKILLSPECIFICATIONSUMMONEDBY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IndexSummonedBy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_INDEXSUMMONEDBY_OFFSET))(nullptr);
		}

		::System::Void set_IndexSummonedBy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_INDEXSUMMONEDBY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundFormationBeacon* get_LinkedFormationBeacon()
		{
			return ((::MX::Logic::Battles::GroundFormationBeacon*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_LINKEDFORMATIONBEACON_OFFSET))(nullptr);
		}

		::System::Void set_LinkedFormationBeacon(::MX::Logic::Battles::GroundFormationBeacon* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundFormationBeacon*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_LINKEDFORMATIONBEACON_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SummonDurationRemained()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMONDURATIONREMAINED_OFFSET))(nullptr);
		}

		::System::Void set_SummonDurationRemained(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SUMMONDURATIONREMAINED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SummonDurationMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMONDURATIONMAX_OFFSET))(nullptr);
		}

		::System::Void set_SummonDurationMax(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_SUMMONDURATIONMAX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreCrashByTSSObstacleCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_IGNORECRASHBYTSSOBSTACLECHECK_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreCrashByTSSObstacleCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SET_IGNORECRASHBYTSSOBSTACLECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Data::Excel::CharacterExcel* arg2, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::System::Int32 arg6, ::MX::Logic::Data::WeaponSetting* arg7, ::MX::Logic::Data::GearSetting* arg8, ::MX::Logic::Data::CostumeSetting* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int32, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void SetSummonerInfo(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::MX::Logic::BattleEntities::AreaSpawner* arg5, ::MX::Logic::BattleEntities::SkillEntityTimelineSpawner* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Boolean, ::MX::Logic::BattleEntities::AreaSpawner*, ::MX::Logic::BattleEntities::SkillEntityTimelineSpawner*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SETSUMMONERINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetLinkedFormation(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2, ::MX::Logic::Data::CharacterEntityValue* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::Data::CharacterEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_SETLINKEDFORMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ExpireSummonedCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_EXPIRESUMMONEDCHARACTER_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCheckDistanceToAlly(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_PROCESSCHECKDISTANCETOALLY_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSummonTimeOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_PROCESSSUMMONTIMEOUT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* get_SummaryDetail()
		{
			return ((::MX::Logic::BattleEntities::HeroSummaryDetailFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDCHARACTER_GET_SUMMARYDETAIL_OFFSET))(nullptr);
		}

	};
}

