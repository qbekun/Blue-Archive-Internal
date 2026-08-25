#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_DIAGNOSTICS_SECTIONPROFILER_.CTOR_OFFSET UNITYSDK_OFFSET(0x107C520)
#define MX_CORE_DIAGNOSTICS_SECTIONPROFILER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x107C5B0)
#define MX_CORE_DIAGNOSTICS_SECTIONPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x107C680)
#define MX_CORE_DIAGNOSTICS_SECTIONPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x107C6E0)
#define MX_CORE_DIAGNOSTICS_SECTIONPROFILER_SHOWDEBUGMESSAGE_OFFSET UNITYSDK_OFFSET(0x107C740)
#define MX_CORE_DIAGNOSTICS_SECTIONPROFILER_BUILDRESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x107C750)

namespace MX::Core::Diagnostics
{
	inline static constexpr unsigned int SectionProfiler_TypeDefinitionIndex = 12900;

	class SectionProfiler : public Il2CppObject
	{
	public:
		::System::Boolean disposed; // 0x10
		::System::String* _sectionName; // 0x18
		::System::Diagnostics::Stopwatch* _watch; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_SECTIONPROFILER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_SECTIONPROFILER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_SECTIONPROFILER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_SECTIONPROFILER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowDebugMessage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_SECTIONPROFILER_SHOWDEBUGMESSAGE_OFFSET))(nullptr);
		}

		::System::String* BuildResultMessage(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_SECTIONPROFILER_BUILDRESULTMESSAGE_OFFSET))(str, nullptr);
		}

	};
}

