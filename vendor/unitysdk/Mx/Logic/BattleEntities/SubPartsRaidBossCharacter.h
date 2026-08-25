#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Battles { class DamageAppliedResult; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSEXTERNALBEHAVIORUSESELECTSKILL_OFFSET UNITYSDK_OFFSET(0x114D7D0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_PARTSMAXHPS_OFFSET UNITYSDK_OFFSET(0x114DA70)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_PARTSMAXHPS_OFFSET UNITYSDK_OFFSET(0x114DA80)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SETSUBPARTSMAXHP_OFFSET UNITYSDK_OFFSET(0x114DAA0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_EXSKILLSPARTSTABLE_OFFSET UNITYSDK_OFFSET(0x114DAC0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_CURRENTACTIVEPARTINDEX_OFFSET UNITYSDK_OFFSET(0x114DAE0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_EXSKILLSPARTSTABLE_OFFSET UNITYSDK_OFFSET(0x114DAF0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSACTIVATEPART_OFFSET UNITYSDK_OFFSET(0x114DB00)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_INITHITPOINTS_OFFSET UNITYSDK_OFFSET(0x114DBB0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_CANUSEAUTOTARGETINGSKILL_OFFSET UNITYSDK_OFFSET(0x114DD40)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x114DFE0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_CHECKANDSETSKILLCOMMANDTOCURTARGETINFO_OFFSET UNITYSDK_OFFSET(0x114E260)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_APPLYDAMAGE_OFFSET UNITYSDK_OFFSET(0x114E500)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_PARTSHPS_OFFSET UNITYSDK_OFFSET(0x114E740)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_PARTSHPS_OFFSET UNITYSDK_OFFSET(0x114E750)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSALIVEPARTSUSEEXSKILL_OFFSET UNITYSDK_OFFSET(0x114E770)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSCONNECTEXSKILLTOPARTS_OFFSET UNITYSDK_OFFSET(0x114E920)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SETSUBPARTSHP_OFFSET UNITYSDK_OFFSET(0x114DC60)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_CANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x114E9D0)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_CURRENTACTIVEPARTINDEX_OFFSET UNITYSDK_OFFSET(0x114EC90)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SubPartsRaidBossCharacter_TypeDefinitionIndex = 13131;

	class SubPartsRaidBossCharacter : public Il2CppObject
	{
	public:
		::System::Int32 _CurrentActivePartIndex_k__BackingField; // 0x488
		Il2CppObject* _PartsHPs_k__BackingField; // 0x490
		Il2CppObject* _PartsMaxHPs_k__BackingField; // 0x498
		Il2CppObject* _ExSkillsPartsTable_k__BackingField; // 0x4A0
		::System::Boolean setSubPartsHPsFromServer; // 0x4A8

		::System::Boolean ProcessExternalBehaviorUseSelectSkill(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSEXTERNALBEHAVIORUSESELECTSKILL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PartsMaxHPs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_PARTSMAXHPS_OFFSET))(nullptr);
		}

		::System::Void set_PartsMaxHPs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_PARTSMAXHPS_OFFSET))(arg, nullptr);
		}

		::System::Void SetSubPartsMaxHP(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SETSUBPARTSMAXHP_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExSkillsPartsTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_EXSKILLSPARTSTABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentActivePartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_CURRENTACTIVEPARTINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExSkillsPartsTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_EXSKILLSPARTSTABLE_OFFSET))(nullptr);
		}

		::System::Boolean ProcessActivatePart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSACTIVATEPART_OFFSET))(nullptr);
		}

		::System::Void InitHitPoints(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_INITHITPOINTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanUseAutoTargetingSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_CANUSEAUTOTARGETINGSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckAndSetSkillCommandToCurTargetInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_CHECKANDSETSKILLCOMMANDTOCURTARGETINFO_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::DamageAppliedResult* ApplyDamage(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Battles::DamageResult* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			return ((::MX::Logic::Battles::DamageAppliedResult*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Battles::DamageResult*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_APPLYDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_PartsHPs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_GET_PARTSHPS_OFFSET))(nullptr);
		}

		::System::Void set_PartsHPs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_PARTSHPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessAlivePartsUseExSkill(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSALIVEPARTSUSEEXSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessConnectExSkillToParts(::System::Int32 arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_PROCESSCONNECTEXSKILLTOPARTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSubPartsHP(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SETSUBPARTSHP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanUseAutoSkill(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_CANUSEAUTOSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentActivePartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTSRAIDBOSSCHARACTER_SET_CURRENTACTIVEPARTINDEX_OFFSET))(arg, nullptr);
		}

	};
}

