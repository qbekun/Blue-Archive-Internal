#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xEDB580)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEDB630)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDB640)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_ENTER_IMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xEDB650)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_SET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDB660)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEDB670)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xEDB680)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDB740)
#define MXFIELD_CORE_STATE_INPUTBLOCKSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEDB7E0)

namespace MXField::Core::State
{
	inline static constexpr unsigned int InputBlockState_TypeDefinitionIndex = 10977;

	class InputBlockState : public Il2CppObject
	{
	public:
		::System::String* _InputBlockPredicate_k__BackingField; // 0x10
		::System::Boolean _Block_k__BackingField; // 0x18
		::MXField::Core::State::IEntityState* _NextState_k__BackingField; // 0x20

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Block(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void Enter_Impl(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_ENTER_IMPL_OFFSET))(arg, nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Void set_NextState(::MXField::Core::State::IEntityState* arg)
		{
			((::System::Void(*)(::MXField::Core::State::IEntityState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_SET_NEXTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_INPUTBLOCKSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

