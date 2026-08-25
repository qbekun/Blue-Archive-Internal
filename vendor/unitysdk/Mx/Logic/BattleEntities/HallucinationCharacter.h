#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class AreaSpawner; }
namespace MX::Logic::BattleEntities { class SkillEntityTimelineSpawner; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::BattleEntities { class SkillCommandInfo; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11392C0)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1139380)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1139510)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1139540)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_BUILDDEFAULTBEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x1139600)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_PROCESSCOPYCAT_OFFSET UNITYSDK_OFFSET(0x11398B0)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_SETSUMMONERINFO_OFFSET UNITYSDK_OFFSET(0x1139900)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x1139AC0)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_SUMMONERCHARACTER_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1139F20)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_SETSKILLCOMMAND_OFFSET UNITYSDK_OFFSET(0x113A890)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x113A8A0)
#define MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER__SUMMONERCHARACTER_ACTIONCHANGED_G__SETTARGET|9_0_OFFSET UNITYSDK_OFFSET(0x113A1B0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int HallucinationCharacter_TypeDefinitionIndex = 13092;

	class HallucinationCharacter : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* SummonerCharacter; // 0x4D8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Data::Excel::CharacterExcel* arg2, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::System::Int32 arg6, ::MX::Logic::Data::WeaponSetting* arg7, ::MX::Logic::Data::GearSetting* arg8, ::MX::Logic::Data::CostumeSetting* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int32, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void BuildDefaultBehaviorTree()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_BUILDDEFAULTBEHAVIORTREE_OFFSET))(nullptr);
		}

		::System::Boolean ProcessCopyCat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_PROCESSCOPYCAT_OFFSET))(nullptr);
		}

		::System::Void SetSummonerInfo(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::MX::Logic::BattleEntities::AreaSpawner* arg5, ::MX::Logic::BattleEntities::SkillEntityTimelineSpawner* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Boolean, ::MX::Logic::BattleEntities::AreaSpawner*, ::MX::Logic::BattleEntities::SkillEntityTimelineSpawner*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_SETSUMMONERINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SummonerCharacter_ActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_SUMMONERCHARACTER_ACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSkillCommand(::MX::Logic::BattleEntities::SkillCommandInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillCommandInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_SETSKILLCOMMAND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void _SummonerCharacter_ActionChanged_g__SetTarget|9_0(::MX::Logic::BattleEntities::BehaviorType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HALLUCINATIONCHARACTER__SUMMONERCHARACTER_ACTIONCHANGED_G__SETTARGET|9_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

