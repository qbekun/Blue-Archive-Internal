#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x94C7D60)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_SET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x94C7D70)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GETTRACEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x94C7D80)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_TRACE_OFFSET UNITYSDK_OFFSET(0x94C7DF0)
#define NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C8300)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DiagnosticsTraceWriter_TypeDefinitionIndex = 31923;

	class DiagnosticsTraceWriter : public Il2CppObject
	{
	public:
		::System::Diagnostics::TraceLevel* _LevelFilter_k__BackingField; // 0x10

		::System::Diagnostics::TraceLevel* get_LevelFilter()
		{
			return (return (::System::Diagnostics::TraceLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GET_LEVELFILTER_OFFSET))(nullptr);
		}

		::System::Void set_LevelFilter(::System::Diagnostics::TraceLevel* arg)
		{
			((::System::Void(*)(::System::Diagnostics::TraceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_SET_LEVELFILTER_OFFSET))(arg, nullptr);
		}

		::System::Diagnostics::TraceEventType* GetTraceEventType(::System::Diagnostics::TraceLevel* arg)
		{
			return (return (::System::Diagnostics::TraceEventType*(*)(::System::Diagnostics::TraceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_GETTRACEEVENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Trace(::System::Diagnostics::TraceLevel* arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Diagnostics::TraceLevel*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_TRACE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DIAGNOSTICSTRACEWRITER_.CTOR_OFFSET))(nullptr);
		}

	};
}

