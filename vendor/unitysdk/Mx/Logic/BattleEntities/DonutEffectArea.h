#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Donut; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class DonutAreaEntityValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_GET_TOTALDONUT_OFFSET UNITYSDK_OFFSET(0x11A3AF0)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A3C30)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A4170)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET UNITYSDK_OFFSET(0x11A3EA0)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A4430)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A4440)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A4670)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_CLOCKWISECOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A4930)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_COUNTERCLOCKWISECOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A4B50)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_CLOCKWISEROUNDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A4D50)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_COUNTERCLOCKWISEROUNDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A5010)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA__.CTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x11A52D0)
#define MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA__.CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x11A52F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int DonutEffectArea_TypeDefinitionIndex = 13308;

	class DonutEffectArea : public Il2CppObject
	{
	public:
		::System::Single radius; // 0xB8
		::System::Single excludeRadius; // 0xBC
		::System::Single angleInRadian; // 0xC0
		::MX::Core::Physics2D::Shapes::Donut* _totalDonutCache; // 0xC8

		::MX::Core::Physics2D::Shapes::Donut* get_TotalDonut()
		{
			return ((::MX::Core::Physics2D::Shapes::Donut*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_GET_TOTALDONUT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::DonutAreaEntityValue* arg6, ::UnityEngine::Vector2* arg7, ::UnityEngine::Vector2* arg8, ::UnityEngine::Vector2* arg9, ::MX::Logic::BattleEntities::BattleEntity* arg10)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::DonutAreaEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::DonutAreaEntityValue* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::DonutAreaEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void InitCollisionShapeFunc(::MX::Logic::Data::AreaEntityValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::AreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* FixedCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* IncrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* DecrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* ClockWiseCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_CLOCKWISECOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CounterClockWiseCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_COUNTERCLOCKWISECOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* ClockwiseRoundCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_CLOCKWISEROUNDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CounterClockwiseRoundCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA_COUNTERCLOCKWISEROUNDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__6_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA__.CTOR_B__6_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__7_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DONUTEFFECTAREA__.CTOR_B__7_0_OFFSET))(nullptr);
		}

	};
}

