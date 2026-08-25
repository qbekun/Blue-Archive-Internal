#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x9AFEA30)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x9AFEE70)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9AFFB30)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x9AFFB80)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INITIALIZESETTINGS_OFFSET UNITYSDK_OFFSET(0x9AFF7F0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AFFBE0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceInternal_TypeDefinitionIndex = 29246;

	class TraceInternal : public Il2CppObject
	{
	public:
		::System::String* appName; // 0x0
		::System::Diagnostics::TraceListenerCollection* listeners; // 0x8
		::System::Boolean autoFlush; // 0x10
		::System::Int32 indentLevel;
		::System::Int32 indentSize; // 0x14
		::System::Object* critSec; // 0x18

		::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return (return (::System::Diagnostics::TraceListenerCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_LISTENERS_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoFlush()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_AUTOFLUSH_OFFSET))(nullptr);
		}

		::System::Int32 get_IndentLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_IndentSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTSIZE_OFFSET))(nullptr);
		}

		::System::Void InitializeSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INITIALIZESETTINGS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

