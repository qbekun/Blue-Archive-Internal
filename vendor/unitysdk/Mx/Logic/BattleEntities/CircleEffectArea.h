#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class CircleAreaEntityValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_GET_TOTALCIRCLE_OFFSET UNITYSDK_OFFSET(0x11A3080)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A3180)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A3510)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET UNITYSDK_OFFSET(0x11A33A0)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_FIXEDRADIUSCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A37A0)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A37B0)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A3910)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA__.CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x11A3AB0)
#define MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA__.CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x11A3AD0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int CircleEffectArea_TypeDefinitionIndex = 13307;

	class CircleEffectArea : public Il2CppObject
	{
	public:
		::System::Single radius; // 0xB8
		::MX::Core::Physics2D::Shapes::Circle* _totalCircleCache; // 0xC0

		::MX::Core::Physics2D::Shapes::Circle* get_TotalCircle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_GET_TOTALCIRCLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::CircleAreaEntityValue* arg6, ::UnityEngine::Vector2* arg7, ::UnityEngine::Vector2* arg8, ::UnityEngine::Vector2* arg9, ::MX::Logic::BattleEntities::BattleEntity* arg10)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::CircleAreaEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::CircleAreaEntityValue* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::CircleAreaEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void InitCollisionShapeFunc(::MX::Logic::Data::AreaEntityValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::AreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* FixedRadiusCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_FIXEDRADIUSCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* IncrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* DecrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA__.CTOR_B__4_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__5_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_CIRCLEEFFECTAREA__.CTOR_B__5_0_OFFSET))(nullptr);
		}

	};
}

