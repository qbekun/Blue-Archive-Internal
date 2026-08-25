#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x11AE120)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_SET_COLLIDEDPOSITION_OFFSET UNITYSDK_OFFSET(0x11AE130)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x11AE140)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_SET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET UNITYSDK_OFFSET(0x11AE150)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x11AE160)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_COLLIDEDPOSITION_OFFSET UNITYSDK_OFFSET(0x11AE170)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET UNITYSDK_OFFSET(0x11AE180)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x11AE190)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int NormalAttackDelivererEventArgs_TypeDefinitionIndex = 13321;

	class NormalAttackDelivererEventArgs : public Il2CppObject
	{
	public:
		::System::String* _EntityName_k__BackingField; // 0x10
		::UnityEngine::Vector2* _CollidedPosition_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _Target_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::BattleEntity* _OriginalTargetWhenHitObstacle_k__BackingField; // 0x28

		::System::Void set_Target(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_CollidedPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_SET_COLLIDEDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::String* get_EntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_ENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void set_OriginalTargetWhenHitObstacle(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_SET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Target()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_TARGET_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_CollidedPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_COLLIDEDPOSITION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_OriginalTargetWhenHitObstacle()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_GET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Vector2* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVEREREVENTARGS_.CTOR_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

	};
}

