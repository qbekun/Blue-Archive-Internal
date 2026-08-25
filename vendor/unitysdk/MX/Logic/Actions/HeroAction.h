#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Actions { class ActionProgress; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Core::Math { class TransitionType; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Actions { class HeroAction; }

#define MX_LOGIC_ACTIONS_HEROACTION_ADD_STARTED_OFFSET UNITYSDK_OFFSET(0x10EC5A0)
#define MX_LOGIC_ACTIONS_HEROACTION_REMOVE_STARTED_OFFSET UNITYSDK_OFFSET(0x10EC640)
#define MX_LOGIC_ACTIONS_HEROACTION_ONSTARTED_OFFSET UNITYSDK_OFFSET(0x10EACE0)
#define MX_LOGIC_ACTIONS_HEROACTION_ONSTARTED_OFFSET UNITYSDK_OFFSET(0x10EB0B0)
#define MX_LOGIC_ACTIONS_HEROACTION_ADD_FINISHED_OFFSET UNITYSDK_OFFSET(0x10EC6E0)
#define MX_LOGIC_ACTIONS_HEROACTION_REMOVE_FINISHED_OFFSET UNITYSDK_OFFSET(0x10EC780)
#define MX_LOGIC_ACTIONS_HEROACTION_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x10EC820)
#define MX_LOGIC_ACTIONS_HEROACTION_ADD_INTERRUPTED_OFFSET UNITYSDK_OFFSET(0x10EC840)
#define MX_LOGIC_ACTIONS_HEROACTION_REMOVE_INTERRUPTED_OFFSET UNITYSDK_OFFSET(0x10EC8E0)
#define MX_LOGIC_ACTIONS_HEROACTION_ONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x10EC980)
#define MX_LOGIC_ACTIONS_HEROACTION_ADD_ACTIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10EC9A0)
#define MX_LOGIC_ACTIONS_HEROACTION_REMOVE_ACTIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10ECA40)
#define MX_LOGIC_ACTIONS_HEROACTION_ONACTIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10ECAE0)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_BEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x10ECB00)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x10ECB10)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_EXECUTERID_OFFSET UNITYSDK_OFFSET(0x10ECB20)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_ISLOCKING_OFFSET UNITYSDK_OFFSET(0x10ECBD0)
#define MX_LOGIC_ACTIONS_HEROACTION_SET_ISLOCKING_OFFSET UNITYSDK_OFFSET(0x10ECBE0)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x10ECBF0)
#define MX_LOGIC_ACTIONS_HEROACTION_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x10EAD00)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x10ECC00)
#define MX_LOGIC_ACTIONS_HEROACTION_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x10EA770)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x10ECC10)
#define MX_LOGIC_ACTIONS_HEROACTION_SET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x10EB5C0)
#define MX_LOGIC_ACTIONS_HEROACTION_GET_ACTIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x10EAC10)
#define MX_LOGIC_ACTIONS_HEROACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EA8C0)
#define MX_LOGIC_ACTIONS_HEROACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EA790)
#define MX_LOGIC_ACTIONS_HEROACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EC4C0)
#define MX_LOGIC_ACTIONS_HEROACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EB2A0)
#define MX_LOGIC_ACTIONS_HEROACTION_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x10ECC20)
#define MX_LOGIC_ACTIONS_HEROACTION_FINISHUPDATE_OFFSET UNITYSDK_OFFSET(0x10EB0D0)
#define MX_LOGIC_ACTIONS_HEROACTION_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x10ECC70)
#define MX_LOGIC_ACTIONS_HEROACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x10ED0A0)
#define MX_LOGIC_ACTIONS_HEROACTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10ED220)
#define MX_LOGIC_ACTIONS_HEROACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10ED3D0)
#define MX_LOGIC_ACTIONS_HEROACTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x10ED640)
#define MX_LOGIC_ACTIONS_HEROACTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x10ED120)
#define MX_LOGIC_ACTIONS_HEROACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x10ED160)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int HeroAction_TypeDefinitionIndex = 13013;

	class HeroAction : public Il2CppObject
	{
	public:
		Il2CppObject* Started; // 0x10
		Il2CppObject* Finished; // 0x18
		Il2CppObject* Interrupted; // 0x20
		Il2CppObject* ActionStateChanged; // 0x28
		::MX::Logic::BattleEntities::BehaviorType* _BehaviorType_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* _Executer_k__BackingField; // 0x38
		::System::Boolean _IsLocking_k__BackingField; // 0x40
		::System::Int32 elapsed; // 0x44
		::System::Int32 duration; // 0x48
		::MX::Logic::Actions::ActionState* actionState; // 0x4C

		::System::Void add_Started(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ADD_STARTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Started(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_REMOVE_STARTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ONSTARTED_OFFSET))(nullptr);
		}

		::System::Void OnStarted(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ONSTARTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Finished(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ADD_FINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Finished(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_REMOVE_FINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinished(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Interrupted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ADD_INTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Interrupted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_REMOVE_INTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnInterrupted(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ONINTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ActionStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ADD_ACTIONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ActionStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_REMOVE_ACTIONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnActionStateChanged(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ONACTIONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_BehaviorType()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_BEHAVIORTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_EXECUTER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ExecuterId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_EXECUTERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_ISLOCKING_OFFSET))(nullptr);
		}

		::System::Void set_IsLocking(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_SET_ISLOCKING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_ACTIONSTATE_OFFSET))(nullptr);
		}

		::System::Void set_ActionState(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_SET_ACTIONSTATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionProgress* get_ActionProgress()
		{
			return ((::MX::Logic::Actions::ActionProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GET_ACTIONPROGRESS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_INTERRUPT_OFFSET))(nullptr);
		}

		::System::Void FinishUpdate(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_FINISHUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePosition(::MX::Logic::Battles::Battle* arg, ::MX::Core::Math::TransitionType* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Core::Math::TransitionType*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_UPDATEPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Actions::HeroAction* arg, ::MX::Logic::Actions::HeroAction* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Actions::HeroAction*, ::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Actions::HeroAction* arg, ::MX::Logic::Actions::HeroAction* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Actions::HeroAction*, ::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Actions::HeroAction* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_HEROACTION_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

