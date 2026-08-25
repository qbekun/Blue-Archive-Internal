#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Condition { class ICondition; }
namespace MXField::Core { class IFieldInteractable; }
namespace MXField::Actions { class CoFieldAction; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEB2330)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0xEB2340)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB2490)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEB2560)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xEB2720)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEB2750)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEB2760)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xEB2770)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEB2570)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_ACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0xEB2870)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_SET_ACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0xEB2880)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xEB2890)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_BEGINPLAY_OFFSET UNITYSDK_OFFSET(0xEB23D0)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_PLAY_OFFSET UNITYSDK_OFFSET(0xEB29A0)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xEB2E90)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_HANDLEACTIONTRIGGERDISPATCH_OFFSET UNITYSDK_OFFSET(0xEB30C0)
#define MXFIELD_TRIGGER_FIELDACTIONTRIGGER_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEB32C0)

namespace MXField::Trigger
{
	inline static constexpr unsigned int FieldActionTrigger_TypeDefinitionIndex = 10804;

	class FieldActionTrigger : public Il2CppObject
	{
	public:
		::System::Boolean _Block_k__BackingField; // 0x38
		::System::Boolean acceptPlayerInput; // 0x39
		::System::Int64 triggerId; // 0x40
		::System::Boolean retriggable; // 0x48
		::MXField::Shared::Condition::ICondition* Condition; // 0x50
		Il2CppObject* PhaseInfos; // 0x58
		::System::Int32 phaseIndex; // 0x60
		::System::Boolean _IsPlaying_k__BackingField; // 0x64
		::System::Action* _ActionFinished_k__BackingField; // 0x68

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void Unsubscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_UNSUBSCRIBE_OFFSET))(nullptr);
		}

		::System::Action* get_ActionFinished()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_ACTIONFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_ActionFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_SET_ACTIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Void BeginPlay(::MXField::Actions::CoFieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::CoFieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_BEGINPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::MXField::Actions::CoFieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::CoFieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleActionTriggerDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_HANDLEACTIONTRIGGERDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void set_Block(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDACTIONTRIGGER_SET_BLOCK_OFFSET))(arg, nullptr);
		}

	};
}

