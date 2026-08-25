#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Fan; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class FanAreaEntityValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_GET_TOTALFAN_OFFSET UNITYSDK_OFFSET(0x11A70F0)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A7210)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A7740)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET UNITYSDK_OFFSET(0x11A7470)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A79E0)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A79F0)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A7B90)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_CLOCKWISECOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A7D70)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_COUNTERCLOCKWISECOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A7F40)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_GETROUNDSTEP_OFFSET UNITYSDK_OFFSET(0x11A80F0)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_CLOCKWISEROUNDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A8120)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_COUNTERCLOCKWISEROUNDCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A8350)
#define MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA__.CTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x11A8560)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int FanEffectArea_TypeDefinitionIndex = 13312;

	class FanEffectArea : public Il2CppObject
	{
	public:
		::System::Single radius; // 0xB8
		::System::Single angleInRadian; // 0xBC
		::MX::Core::Physics2D::Shapes::Fan* _totalFanCache; // 0xC0

		::MX::Core::Physics2D::Shapes::Fan* get_TotalFan()
		{
			return ((::MX::Core::Physics2D::Shapes::Fan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_GET_TOTALFAN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::FanAreaEntityValue* arg6, ::UnityEngine::Vector2* arg7, ::UnityEngine::Vector2* arg8, ::UnityEngine::Vector2* arg9, ::MX::Logic::BattleEntities::BattleEntity* arg10)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::FanAreaEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::FanAreaEntityValue* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::FanAreaEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void InitCollisionShapeFunc(::MX::Logic::Data::AreaEntityValue* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::AreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_INITCOLLISIONSHAPEFUNC_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* FixedCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_FIXEDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* IncrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_INCREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* DecrementCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_DECREMENTCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* ClockWiseCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_CLOCKWISECOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CounterClockWiseCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_COUNTERCLOCKWISECOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRoundStep(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_GETROUNDSTEP_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* ClockwiseRoundCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_CLOCKWISEROUNDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CounterClockwiseRoundCollisionShape(::System::Int32 arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA_COUNTERCLOCKWISEROUNDCOLLISIONSHAPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__6_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FANEFFECTAREA__.CTOR_B__6_0_OFFSET))(nullptr);
		}

	};
}

