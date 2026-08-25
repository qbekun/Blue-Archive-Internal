#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C71A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C71F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7220)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x92C7250)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x92C7320)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x92C7330)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x92C7340)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92C7350)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92C73B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C73C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C7490)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C7520)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C7630)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C77A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C7860)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C7980)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C7480)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x92C7A80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET UNITYSDK_OFFSET(0x92C7BA0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_TypeDefinitionIndex = 25041;

	class EventSource : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Guid* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Boolean IsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET))(nullptr);
		}

		::System::Boolean IsEnabled(::System::Diagnostics::Tracing::EventLevel* arg, ::System::Diagnostics::Tracing::EventKeywords* arg)
		{
			return (return (::System::Boolean(*)(::System::Diagnostics::Tracing::EventLevel*, ::System::Diagnostics::Tracing::EventKeywords*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Void WriteEventCore(::System::Int32 arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

