#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerCategory; }

#define UNITY_PROFILING_PROFILERMARKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DFCE0)
#define UNITY_PROFILING_PROFILERMARKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DFD80)
#define UNITY_PROFILING_PROFILERMARKER_AUTO_OFFSET UNITYSDK_OFFSET(0xA1DFDD0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerMarker_TypeDefinitionIndex = 30851;

	class ProfilerMarker : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Unity::Profiling::ProfilerCategory* arg, ::System::String* str)
		{
			((::System::Void(*)(::Unity::Profiling::ProfilerCategory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		AutoScope* Auto()
		{
			return (return (AutoScope*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERMARKER_AUTO_OFFSET))(nullptr);
		}

	};
}

