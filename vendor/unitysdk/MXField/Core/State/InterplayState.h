#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_INTERPLAYSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xEDB7F0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC9CB0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_SET_ISAGENTENABLED_OFFSET UNITYSDK_OFFSET(0xEDB8B0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_GET_ISAGENTENABLED_OFFSET UNITYSDK_OFFSET(0xEDB8C0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_SET_ISOBSTACLEENABLED_OFFSET UNITYSDK_OFFSET(0xEDB8D0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xEDB8E0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDB9D0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEDB9E0)
#define MXFIELD_CORE_STATE_INTERPLAYSTATE_GET_ISOBSTACLEENABLED_OFFSET UNITYSDK_OFFSET(0xEDB9F0)

namespace MXField::Core::State
{
	inline static constexpr unsigned int InterplayState_TypeDefinitionIndex = 10978;

	class InterplayState : public Il2CppObject
	{
	public:
		::MXField::Core::State::IEntityState* _NextState_k__BackingField; // 0x10
		::System::Boolean _IsAgentEnabled_k__BackingField; // 0x18
		::System::Boolean _IsObstacleEnabled_k__BackingField; // 0x19

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsAgentEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_SET_ISAGENTENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAgentEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_GET_ISAGENTENABLED_OFFSET))(nullptr);
		}

		::System::Void set_IsObstacleEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_SET_ISOBSTACLEENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_ENTER_OFFSET))(arg, nullptr);
		}

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsObstacleEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INTERPLAYSTATE_GET_ISOBSTACLEENABLED_OFFSET))(nullptr);
		}

	};
}

