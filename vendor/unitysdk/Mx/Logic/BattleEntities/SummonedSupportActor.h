#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1159910)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_PROCESSSUMMONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x11599F0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_SETSUMMONERINFO_OFFSET UNITYSDK_OFFSET(0x115A430)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_GET_SUMMONDURATIONREMAINED_OFFSET UNITYSDK_OFFSET(0x115A560)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x115A570)
#define MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_SET_SUMMONDURATIONREMAINED_OFFSET UNITYSDK_OFFSET(0x115A5F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SummonedSupportActor_TypeDefinitionIndex = 13139;

	class SummonedSupportActor : public Il2CppObject
	{
	public:
		::System::Int64 _SummonDurationRemained_k__BackingField; // 0x260

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Battles::CharacterGroup* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterExcel* arg5, ::MX::Data::Excel::CharacterAIExcel* arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::System::Int32 arg9, ::MX::Logic::Data::WeaponSetting* arg10, ::MX::Logic::Data::GearSetting* arg11, ::MX::Logic::Data::CostumeSetting* arg12)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterExcel*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int64, ::System::Int64, ::System::Int32, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void ProcessSummonTimeOut(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_PROCESSSUMMONTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetSummonerInfo(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_SETSUMMONERINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 get_SummonDurationRemained()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_GET_SUMMONDURATIONREMAINED_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SummonDurationRemained(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONEDSUPPORTACTOR_SET_SUMMONDURATIONREMAINED_OFFSET))(arg, nullptr);
		}

	};
}

