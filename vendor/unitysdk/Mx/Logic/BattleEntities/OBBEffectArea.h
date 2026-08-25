#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class OBB; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class ObbAreaEntityValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_GET_TOTALOBB_OFFSET UNITYSDK_OFFSET(0x11AF5F0)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_GET_COLLISIONCOUNT_OFFSET UNITYSDK_OFFSET(0x11AF710)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_SET_COLLISIONCOUNT_OFFSET UNITYSDK_OFFSET(0x11AF720)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_GET_PERCOLLISIONHEIGHT_OFFSET UNITYSDK_OFFSET(0x11AF730)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_SET_PERCOLLISIONHEIGHT_OFFSET UNITYSDK_OFFSET(0x11AF740)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11AF750)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11AFC40)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET UNITYSDK_OFFSET(0x11AF9A0)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_CALCINCREMENTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x11AFF00)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_CALCDECREMENTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x11B0010)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11B0120)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_MOVINGCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11B0130)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA__.CTOR_B__14_0_OFFSET UNITYSDK_OFFSET(0x11B0280)
#define MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA__.CTOR_B__15_0_OFFSET UNITYSDK_OFFSET(0x11B02A0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int OBBEffectArea_TypeDefinitionIndex = 13323;

	class OBBEffectArea : public Il2CppObject
	{
	public:
		::System::Single width; // 0xB8
		::System::Single height; // 0xBC
		::MX::Core::Physics2D::Shapes::OBB* _totalOBBCache; // 0xC0
		Il2CppObject* collisionShapeLocalCenters; // 0xC8
		::System::Int32 _collisionCount_k__BackingField; // 0xD0
		::System::Single _perCollisionHeight_k__BackingField; // 0xD4

		::MX::Core::Physics2D::Shapes::OBB* get_TotalOBB()
		{
			return ((::MX::Core::Physics2D::Shapes::OBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_GET_TOTALOBB_OFFSET))(nullptr);
		}

		::System::Int32 get_collisionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_GET_COLLISIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_collisionCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_SET_COLLISIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_perCollisionHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_GET_PERCOLLISIONHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_perCollisionHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_SET_PERCOLLISIONHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::ObbAreaEntityValue* arg6, ::UnityEngine::Vector2* arg7, ::UnityEngine::Vector2* arg8, ::UnityEngine::Vector2* arg9, ::MX::Logic::BattleEntities::BattleEntity* arg10)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::ObbAreaEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::ObbAreaEntityValue* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::ObbAreaEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void InitCollisionShapeFunc(::MX::Logic::Data::ObbAreaEntityValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ObbAreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET))(arg, nullptr);
		}

		::System::Void CalcIncrementPositions(::MX::Logic::Data::ObbAreaEntityValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ObbAreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_CALCINCREMENTPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CalcDecrementPositions(::MX::Logic::Data::ObbAreaEntityValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ObbAreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_CALCDECREMENTPOSITIONS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* FixedCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* MovingCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA_MOVINGCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__14_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA__.CTOR_B__14_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__15_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBBEFFECTAREA__.CTOR_B__15_0_OFFSET))(nullptr);
		}

	};
}

