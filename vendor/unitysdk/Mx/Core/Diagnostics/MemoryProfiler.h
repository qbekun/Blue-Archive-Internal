#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_DIAGNOSTICS_MEMORYPROFILER_.CTOR_OFFSET UNITYSDK_OFFSET(0x107C300)
#define MX_CORE_DIAGNOSTICS_MEMORYPROFILER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x107C370)
#define MX_CORE_DIAGNOSTICS_MEMORYPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x107C440)
#define MX_CORE_DIAGNOSTICS_MEMORYPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x107C4A0)

namespace MX::Core::Diagnostics
{
	inline static constexpr unsigned int MemoryProfiler_TypeDefinitionIndex = 12899;

	class MemoryProfiler : public Il2CppObject
	{
	public:
		::System::Int64 startMemory; // 0x10
		::System::Int64 finishMemory; // 0x18
		::System::String* sectionName; // 0x20
		::System::Boolean disposed; // 0x28

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_MEMORYPROFILER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_MEMORYPROFILER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_MEMORYPROFILER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_MEMORYPROFILER_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

