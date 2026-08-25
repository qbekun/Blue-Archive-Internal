#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace Animancer { class ClipTransition; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDAF00)
#define MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_GET_ONANIMATIONEND_OFFSET UNITYSDK_OFFSET(0xEDAF60)
#define MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0xEDAF70)
#define MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xEDAF80)
#define MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xEDB010)
#define MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEDB020)
#define MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xEDB030)

namespace MXField::Core::State
{
	inline static constexpr unsigned int AniInterchangeState_TypeDefinitionIndex = 10972;

	class AniInterchangeState : public Il2CppObject
	{
	public:
		::MXField::Core::State::IEntityState* _NextState_k__BackingField; // 0x10
		::Animancer::ClipTransition* _Clip_k__BackingField; // 0x18
		Il2CppObject* _OnAnimationEnd_k__BackingField; // 0x20

		::System::Void .ctor(::Animancer::ClipTransition* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::Animancer::ClipTransition*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_OnAnimationEnd()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_GET_ONANIMATIONEND_OFFSET))(nullptr);
		}

		::MXField::Core::State::IEntityState* get_NextState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void Enter(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Exit(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::Animancer::ClipTransition* get_Clip()
		{
			return ((::Animancer::ClipTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIINTERCHANGESTATE_GET_CLIP_OFFSET))(nullptr);
		}

	};
}

