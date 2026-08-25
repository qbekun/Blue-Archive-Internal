#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class PassiveSkillSpawner; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FF700)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x13FF720)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x13FF730)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x13FFA00)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FFA10)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_ISTRIGGERSOURCENOTMOVING_OFFSET UNITYSDK_OFFSET(0x13FF960)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_GET_WAITELAPSEDFRAME_OFFSET UNITYSDK_OFFSET(0x13FFA70)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FFA80)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_GET_WAITFRAME_OFFSET UNITYSDK_OFFSET(0x13FFCB0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_SET_WAITELAPSEDFRAME_OFFSET UNITYSDK_OFFSET(0x13FFCC0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityStateNotMovingExecution_TypeDefinitionIndex = 14657;

	class BattleEntityStateNotMovingExecution : public Il2CppObject
	{
	public:
		::System::Int32 _waitFrame_k__BackingField; // 0x50
		::System::Int32 _waitElapsedFrame_k__BackingField; // 0x54
		::System::Boolean _isRunning_k__BackingField; // 0x58
		::MX::Logic::BattleEntities::PassiveSkillSpawner* currentSpawner; // 0x60
		::UnityEngine::Vector2* previousPosition; // 0x68

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isRunning(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_SET_ISRUNNING_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_GET_ISRUNNING_OFFSET))(nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTriggerSourceNotMoving(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_ISTRIGGERSOURCENOTMOVING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_waitElapsedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_GET_WAITELAPSEDFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_waitFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_GET_WAITFRAME_OFFSET))(nullptr);
		}

		::System::Void set_waitElapsedFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATENOTMOVINGEXECUTION_SET_WAITELAPSEDFRAME_OFFSET))(arg, nullptr);
		}

	};
}

