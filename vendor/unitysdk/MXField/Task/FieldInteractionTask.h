#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }
namespace FlatData { class FieldInteractionType; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_TASK_FIELDINTERACTIONTASK_GET_ID_OFFSET UNITYSDK_OFFSET(0xEB5CC0)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_GET_ISSTAGERESULTVICTORY_OFFSET UNITYSDK_OFFSET(0xEB5CE0)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_SET_ISSTAGERESULTVICTORY_OFFSET UNITYSDK_OFFSET(0xEB5CF0)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_GET_ISENTERINTERACTION_OFFSET UNITYSDK_OFFSET(0xEB5D00)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_SET_ISENTERINTERACTION_OFFSET UNITYSDK_OFFSET(0xEB5D10)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEB5D20)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0xEB5E50)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_ONFIELDINTERACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0xEB6030)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEB61E0)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEB3550)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_CUEINTERACTIONACTIONS_OFFSET UNITYSDK_OFFSET(0xEB62B0)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_FORCEBREAKANDLOADSCENE_OFFSET UNITYSDK_OFFSET(0xEB48B0)
#define MXFIELD_TASK_FIELDINTERACTIONTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB6D30)

namespace MXField::Task
{
	inline static constexpr unsigned int FieldInteractionTask_TypeDefinitionIndex = 10814;

	class FieldInteractionTask : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldInteractionInfo* interactionInfoCache; // 0x10
		Il2CppObject* interactionQueue; // 0x18
		::FlatData::FieldInteractionType* stageTypeCache; // 0x20
		::System::Boolean _IsStageResultVictory_k__BackingField; // 0x24
		::System::Boolean _IsEnterInteraction_k__BackingField; // 0x25

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStageResultVictory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_GET_ISSTAGERESULTVICTORY_OFFSET))(nullptr);
		}

		::System::Void set_IsStageResultVictory(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_SET_ISSTAGERESULTVICTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEnterInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_GET_ISENTERINTERACTION_OFFSET))(nullptr);
		}

		::System::Void set_IsEnterInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_SET_ISENTERINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean OnFieldInteractionFinished(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_ONFIELDINTERACTIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::MXField::Shared::Data::FieldInteractionInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void CueInteractionActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_CUEINTERACTIONACTIONS_OFFSET))(nullptr);
		}

		::System::Void ForceBreakAndLoadScene(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_FORCEBREAKANDLOADSCENE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDINTERACTIONTASK_.CTOR_OFFSET))(nullptr);
		}

	};
}

