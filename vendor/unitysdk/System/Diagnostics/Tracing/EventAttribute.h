#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7110)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x92C7130)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x92C7140)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x92C7150)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_OPCODE_OFFSET UNITYSDK_OFFSET(0x92C7160)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x92C7170)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x92C7180)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x92C7190)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventAttribute_TypeDefinitionIndex = 25039;

	class EventAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _EventId_k__BackingField; // 0x10
		::System::Diagnostics::Tracing::EventLevel* _Level_k__BackingField; // 0x14
		::System::Diagnostics::Tracing::EventKeywords* _Keywords_k__BackingField; // 0x18
		::System::Diagnostics::Tracing::EventOpcode* _Opcode_k__BackingField; // 0x20
		::System::String* _Message_k__BackingField; // 0x28
		::System::Diagnostics::Tracing::EventTask* _Task_k__BackingField; // 0x30
		::System::Byte _Version_k__BackingField; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_EVENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Level(::System::Diagnostics::Tracing::EventLevel* arg)
		{
			((::System::Void(*)(::System::Diagnostics::Tracing::EventLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_Keywords(::System::Diagnostics::Tracing::EventKeywords* arg)
		{
			((::System::Void(*)(::System::Diagnostics::Tracing::EventKeywords*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_KEYWORDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Opcode(::System::Diagnostics::Tracing::EventOpcode* arg)
		{
			((::System::Void(*)(::System::Diagnostics::Tracing::EventOpcode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_OPCODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_Task(::System::Diagnostics::Tracing::EventTask* arg)
		{
			((::System::Void(*)(::System::Diagnostics::Tracing::EventTask*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_TASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_Version(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTATTRIBUTE_SET_VERSION_OFFSET))(arg, nullptr);
		}

	};
}

