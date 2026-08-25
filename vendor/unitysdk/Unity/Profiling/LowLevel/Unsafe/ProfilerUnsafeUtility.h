#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerCategoryDescription; }
namespace Unity::Profiling::LowLevel { class MarkerFlags; }
namespace Unity::Profiling::LowLevel::Unsafe { class ProfilerCategoryDescription&; }

#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_GETCATEGORYDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA1DFB30)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0xA1DFD30)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0xA1DFED0)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0xA1DFF90)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_UTF8TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1DFB90)
#define UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_GETCATEGORYDESCRIPTION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E0B10)

namespace Unity::Profiling::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProfilerUnsafeUtility_TypeDefinitionIndex = 30864;

	class ProfilerUnsafeUtility : public Il2CppObject
	{
	public:
		::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription* GetCategoryDescription(::System::UInt16 arg)
		{
			return (return (::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription*(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_GETCATEGORYDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 CreateMarker(::System::String* str, ::System::UInt16 arg, ::Unity::Profiling::LowLevel::MarkerFlags* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::UInt16, ::Unity::Profiling::LowLevel::MarkerFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_CREATEMARKER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void BeginSample(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_BEGINSAMPLE_OFFSET))(arg, nullptr);
		}

		::System::Void EndSample(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_ENDSAMPLE_OFFSET))(arg, nullptr);
		}

		::System::String* Utf8ToString(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_UTF8TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetCategoryDescription_Injected(::System::UInt16 arg, ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription&* arg)
		{
			((::System::Void(*)(::System::UInt16, ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_LOWLEVEL_UNSAFE_PROFILERUNSAFEUTILITY_GETCATEGORYDESCRIPTION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

