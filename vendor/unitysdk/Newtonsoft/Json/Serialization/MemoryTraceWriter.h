#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_GET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x94E4F30)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_SET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x94E4F40)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E4F50)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TRACE_OFFSET UNITYSDK_OFFSET(0x94E5010)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_GETTRACEMESSAGES_OFFSET UNITYSDK_OFFSET(0x94E52D0)
#define NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94E52E0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int MemoryTraceWriter_TypeDefinitionIndex = 31965;

	class MemoryTraceWriter : public Il2CppObject
	{
	public:
		Il2CppObject* _traceMessages; // 0x10
		::System::Object* _lock; // 0x18
		::System::Diagnostics::TraceLevel* _LevelFilter_k__BackingField; // 0x20

		::System::Diagnostics::TraceLevel* get_LevelFilter()
		{
			return (return (::System::Diagnostics::TraceLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_GET_LEVELFILTER_OFFSET))(nullptr);
		}

		::System::Void set_LevelFilter(::System::Diagnostics::TraceLevel* arg)
		{
			((::System::Void(*)(::System::Diagnostics::TraceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_SET_LEVELFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Trace(::System::Diagnostics::TraceLevel* arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Diagnostics::TraceLevel*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TRACE_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* GetTraceMessages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_GETTRACEMESSAGES_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_MEMORYTRACEWRITER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

