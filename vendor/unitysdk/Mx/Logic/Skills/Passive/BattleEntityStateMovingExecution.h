#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class PassiveSkillSpawner; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x13FF100)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_SET_WAITELAPSEDFRAME_OFFSET UNITYSDK_OFFSET(0x13FF400)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_GET_WAITELAPSEDFRAME_OFFSET UNITYSDK_OFFSET(0x13FF410)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FF420)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_ISTRIGGERSOURCEMOVING_OFFSET UNITYSDK_OFFSET(0x13FF340)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x13FF440)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x13FF450)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_GET_WAITFRAME_OFFSET UNITYSDK_OFFSET(0x13FF460)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FF470)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FF4D0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityStateMovingExecution_TypeDefinitionIndex = 14656;

	class BattleEntityStateMovingExecution : public Il2CppObject
	{
	public:
		::System::Int32 _waitFrame_k__BackingField; // 0x50
		::System::Int32 _waitElapsedFrame_k__BackingField; // 0x54
		::System::Boolean _isRunning_k__BackingField; // 0x58
		::MX::Logic::BattleEntities::PassiveSkillSpawner* currentSpawner; // 0x60
		::UnityEngine::Vector2* previousPosition; // 0x68

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_waitElapsedFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_SET_WAITELAPSEDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_waitElapsedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_GET_WAITELAPSEDFRAME_OFFSET))(nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTriggerSourceMoving(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_ISTRIGGERSOURCEMOVING_OFFSET))(arg, nullptr);
		}

		::System::Void set_isRunning(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_SET_ISRUNNING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_GET_ISRUNNING_OFFSET))(nullptr);
		}

		::System::Int32 get_waitFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_GET_WAITFRAME_OFFSET))(nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEMOVINGEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

