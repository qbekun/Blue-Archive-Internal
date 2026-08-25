#pragma once
#include "../../../../unitysdk.h"

#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_GET_MONOUSEDDIFF_OFFSET UNITYSDK_OFFSET(0xA31320)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_GET_MONOHEAPDIFF_OFFSET UNITYSDK_OFFSET(0xA31330)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_GET_TOTALALLOCATEDDIFF_OFFSET UNITYSDK_OFFSET(0xA31340)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31350)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA313A0)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31470)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA314D0)
#define MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_TAKEMEMORYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA31760)

namespace MX::Client::System::Diagnostics
{
	inline static constexpr unsigned int UnityMemoryProfiler_TypeDefinitionIndex = 37700;

	class UnityMemoryProfiler : public Il2CppObject
	{
	public:
		::System::Int64 _startMonoUsedSize; // 0x10
		::System::Int64 _startMonoHeapSize; // 0x18
		::System::Int64 _startTotalAllocatedMemory; // 0x20
		::System::Int64 _endMonoUsedSize; // 0x28
		::System::Int64 _endMonoHeapSize; // 0x30
		::System::Int64 _endTotalAllocatedMemory; // 0x38
		::System::String* sectionName; // 0x40
		::System::Boolean disposed; // 0x48

		::System::Int64 get_MonoUsedDiff()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_GET_MONOUSEDDIFF_OFFSET))(nullptr);
		}

		::System::Int64 get_MonoHeapDiff()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_GET_MONOHEAPDIFF_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalAllocatedDiff()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_GET_TOTALALLOCATEDDIFF_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void TakeMemorySnapshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_DIAGNOSTICS_UNITYMEMORYPROFILER_TAKEMEMORYSNAPSHOT_OFFSET))(nullptr);
		}

	};
}

