#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_ITRACEWRITER_GET_LEVELFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_ITRACEWRITER_TRACE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ITraceWriter_TypeDefinitionIndex = 31930;

	class ITraceWriter : public Il2CppObject
	{
	public:
		::System::Diagnostics::TraceLevel* get_LevelFilter()
		{
			return (return (::System::Diagnostics::TraceLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ITRACEWRITER_GET_LEVELFILTER_OFFSET))(nullptr);
		}

		::System::Void Trace(::System::Diagnostics::TraceLevel* arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Diagnostics::TraceLevel*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ITRACEWRITER_TRACE_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

