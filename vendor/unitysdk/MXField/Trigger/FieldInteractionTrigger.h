#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }
namespace MXField::Core { class IFieldInteractable; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xEB32D0)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_GET_INTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xEB3370)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_SET_INTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xEB3380)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xEB3390)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_SET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xEB33A0)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xEB33B0)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEB34A0)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0xEB38A0)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_HASTRIGGER_OFFSET UNITYSDK_OFFSET(0xEB38D0)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_HASTRIGGER_OFFSET UNITYSDK_OFFSET(0xEB38E0)
#define MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB38F0)

namespace MXField::Trigger
{
	inline static constexpr unsigned int FieldInteractionTrigger_TypeDefinitionIndex = 10805;

	class FieldInteractionTrigger : public Il2CppObject
	{
	public:
		::System::Int64 interactionId; // 0x38
		::MXField::Shared::Data::FieldInteractionInfo* _InteractionInfo_k__BackingField; // 0x40
		::System::Boolean _isTriggered_k__BackingField; // 0x48

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldInteractionInfo* get_InteractionInfo()
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_GET_INTERACTIONINFO_OFFSET))(nullptr);
		}

		::System::Void set_InteractionInfo(::MXField::Shared::Data::FieldInteractionInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_SET_INTERACTIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_GET_ISTRIGGERED_OFFSET))(nullptr);
		}

		::System::Void set_isTriggered(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_SET_ISTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasTrigger(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_HASTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasTrigger(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_HASTRIGGER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TRIGGER_FIELDINTERACTIONTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

