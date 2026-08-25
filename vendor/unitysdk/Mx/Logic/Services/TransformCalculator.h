#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Data { class ProjectileEntityValue; }
namespace MX::GameData::DAO::Battle { class ProjectileEntityDAO; }
namespace MX::Logic::Data { class BeamEntityValue; }
namespace MX::GameData::DAO::Battle { class BeamEntityDAO; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }

#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x10E4330)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x10E4DF0)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEAUTOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x10E4F10)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x10E5090)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x10E5830)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEAUTOSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x10E5910)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCDIRECTIONBYANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x10E59F0)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCDIRECTIONBYANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x10E55D0)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCPROJECTILEDESTINATION_OFFSET UNITYSDK_OFFSET(0x10E5C50)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEPROJECTILEDESTINATION_OFFSET UNITYSDK_OFFSET(0x10E5DA0)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCBEAMDESTINATION_OFFSET UNITYSDK_OFFSET(0x10E5EE0)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEBEAMDESTINATION_OFFSET UNITYSDK_OFFSET(0x10E6030)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_GETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x10E4480)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_GETSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x10E51E0)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCOFFSETPOINTBYOFFSETDIRECTION_OFFSET UNITYSDK_OFFSET(0x10E48B0)
#define MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_ISDIRECTIONINVALID_OFFSET UNITYSDK_OFFSET(0x10E6170)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int TransformCalculator_TypeDefinitionIndex = 12992;

	class TransformCalculator : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* CalcAutoSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::SkillEntityValue* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::BattleEntities::BattleEntity* arg6, ::UnityEngine::Vector2* arg7)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SkillEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::UnityEngine::Vector2* CalcAutoSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::SkillEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SkillEntityValue*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::UnityEngine::Vector2* CalcSkillGuideAutoUsePosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEAUTOUSEPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::UnityEngine::Vector2* CalcAutoSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::SkillEntityValue* arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNDIRECTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* CalcAutoSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::SkillEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SkillEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCAUTOSPAWNDIRECTION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::UnityEngine::Vector2* CalcSkillGuideAutoSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEAUTOSPAWNDIRECTION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::UnityEngine::Vector2* CalcDirectionByAngleOffset(::MX::GameData::DAO::Battle::SkillEntityDAO* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCDIRECTIONBYANGLEOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* CalcDirectionByAngleOffset(::MX::Logic::Data::SkillEntityValue* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCDIRECTIONBYANGLEOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* CalcProjectileDestination(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::ProjectileEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9, ::UnityEngine::Vector2* arg10)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::ProjectileEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCPROJECTILEDESTINATION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::UnityEngine::Vector2* CalcSkillGuideProjectileDestination(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::GameData::DAO::Battle::ProjectileEntityDAO* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9, ::UnityEngine::Vector2* arg10)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::GameData::DAO::Battle::ProjectileEntityDAO*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEPROJECTILEDESTINATION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::UnityEngine::Vector2* CalcBeamDestination(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::BeamEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9, ::UnityEngine::Vector2* arg10)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::BeamEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCBEAMDESTINATION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::UnityEngine::Vector2* CalcSkillGuideBeamDestination(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::GameData::DAO::Battle::BeamEntityDAO* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9, ::UnityEngine::Vector2* arg10)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::GameData::DAO::Battle::BeamEntityDAO*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCSKILLGUIDEBEAMDESTINATION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::UnityEngine::Vector2* GetSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SpawnPositionTypes* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::System::Int32 arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9, ::UnityEngine::Vector2* arg10)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SpawnPositionTypes*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_GETSPAWNPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::UnityEngine::Vector2* GetSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SpawnDirectionTypes* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SpawnDirectionTypes*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_GETSPAWNDIRECTION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::UnityEngine::Vector2* CalcOffsetPointByOffsetDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SpawnDirectionTypes* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::UnityEngine::Vector2* arg7, ::UnityEngine::Vector2* arg8)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SpawnDirectionTypes*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_CALCOFFSETPOINTBYOFFSETDIRECTION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Boolean IsDirectionInvalid(::MX::Logic::Skills::SpawnDirectionTypes* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::SpawnDirectionTypes*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TRANSFORMCALCULATOR_ISDIRECTIONINVALID_OFFSET))(arg, arg2, nullptr);
		}

	};
}

