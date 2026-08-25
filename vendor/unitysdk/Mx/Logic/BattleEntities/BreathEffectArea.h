#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Fan; }
namespace MX::Logic::Data { class BreathAreaEntityValue; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Logic::BattleEntities { class HitCheckCoupling; }
namespace MX::Logic::Data { class SkillEntityValue; }

#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GET_TOTALFAN_OFFSET UNITYSDK_OFFSET(0x119F040)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GET_BLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0x119F190)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_SET_BLOCKDISTANCE_OFFSET UNITYSDK_OFFSET(0x119F1A0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x119F1B0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x119FA70)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET UNITYSDK_OFFSET(0x119F770)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETBLOCKCHECKBATTLEENTITY_OFFSET UNITYSDK_OFFSET(0x119FD50)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A00A0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETBLOCKEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x11A0F30)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_UPDATEBLOCK_OFFSET UNITYSDK_OFFSET(0x11A00D0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A1DD0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A1DE0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A1FF0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_CLOCKWISECOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A21F0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_COUNTERCLOCKWISECOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A23D0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETROUNDSTEP_OFFSET UNITYSDK_OFFSET(0x11A2590)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_CLOCKWISEROUNDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A25C0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_COUNTERCLOCKWISEROUNDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A27F0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETHITCHECKCOUPLING_OFFSET UNITYSDK_OFFSET(0x11A2A00)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x11A2BD0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x11A2BE0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x11A2C90)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11A2D40)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11A2D50)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11A2D60)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETSKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x11A2DD0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x11A2E80)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETPROCEDURETRIGGEREDTARGET_OFFSET UNITYSDK_OFFSET(0x11A2F30)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETPROCEDURETRIGGEREDPOSITION_OFFSET UNITYSDK_OFFSET(0x11A2F40)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA__.CTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x11A2F80)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA__.CTOR_B__14_0_OFFSET UNITYSDK_OFFSET(0x11A2FA0)
#define MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA__UPDATEBLOCK_B__19_0_OFFSET UNITYSDK_OFFSET(0x11A2FC0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BreathEffectArea_TypeDefinitionIndex = 13306;

	class BreathEffectArea : public Il2CppObject
	{
	public:
		::System::Single radius; // 0xB8
		::System::Single angleInRadian; // 0xBC
		::MX::Core::Physics2D::Shapes::Fan* _totalFanCache; // 0xC0
		::System::Int64 BreathDegree; // 0xC8
		::MX::Logic::Data::BreathAreaEntityValue* breathData; // 0xD0
		::MX::Logic::Skills::IEntitySpawnable* spawnable; // 0xD8
		::System::Single _BlockDistance_k__BackingField; // 0xE0
		Il2CppObject* couplingTable; // 0xE8

		::MX::Core::Physics2D::Shapes::Fan* get_TotalFan()
		{
			return ((::MX::Core::Physics2D::Shapes::Fan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GET_TOTALFAN_OFFSET))(nullptr);
		}

		::System::Single get_BlockDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GET_BLOCKDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_BlockDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_SET_BLOCKDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::MX::Logic::Skills::SkillSpecification* arg5, ::System::Int32 arg6, ::MX::Logic::Data::BreathAreaEntityValue* arg7, ::UnityEngine::Vector2* arg8, ::UnityEngine::Vector2* arg9, ::UnityEngine::Vector2* arg10, ::MX::Logic::BattleEntities::BattleEntity* arg11)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::BreathAreaEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::BreathAreaEntityValue* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::BreathAreaEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void InitCollisionShapeFunc(::MX::Logic::Data::AreaEntityValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::AreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetBlockCheckBattleEntity(::UnityEngine::Vector2* arg, ::System::Int64 arg2, ::System::Int64 arg3, Il2CppObject&* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETBLOCKCHECKBATTLEENTITY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Single GetBlockedDistance(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			return ((::System::Single(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETBLOCKEDDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateBlock(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_UPDATEBLOCK_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* FixedCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* IncrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* DecrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* ClockWiseCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_CLOCKWISECOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CounterClockWiseCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_COUNTERCLOCKWISECOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRoundStep(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETROUNDSTEP_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* ClockwiseRoundCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_CLOCKWISEROUNDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CounterClockwiseRoundCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_COUNTERCLOCKWISEROUNDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::HitCheckCoupling* GetHitCheckCoupling(::System::Int32 arg, ::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::HitCheckCoupling*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETHITCHECKCOUPLING_OFFSET))(arg, str, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GET_EXECUTER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSkillCommandSelectedTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETSKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkillCommandSelectedPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetProcedureTriggeredTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETPROCEDURETRIGGEREDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetProcedureTriggeredPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA_GETPROCEDURETRIGGEREDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__13_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA__.CTOR_B__13_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__14_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA__.CTOR_B__14_0_OFFSET))(nullptr);
		}

		::System::Single _UpdateBlock_b__19_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Single(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BREATHEFFECTAREA__UPDATEBLOCK_B__19_0_OFFSET))(arg, nullptr);
		}

	};
}

