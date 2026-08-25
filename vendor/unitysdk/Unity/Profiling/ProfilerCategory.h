#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerCategory; }

#define UNITY_PROFILING_PROFILERCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DFAC0)
#define UNITY_PROFILING_PROFILERCATEGORY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA1DFAD0)
#define UNITY_PROFILING_PROFILERCATEGORY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1DFC60)
#define UNITY_PROFILING_PROFILERCATEGORY_GET_SCRIPTS_OFFSET UNITYSDK_OFFSET(0xA1DFCC0)
#define UNITY_PROFILING_PROFILERCATEGORY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1DFCD0)

namespace Unity::Profiling
{
	inline static constexpr unsigned int ProfilerCategory_TypeDefinitionIndex = 30849;

	class ProfilerCategory : public Il2CppObject
	{
	public:
		::System::UInt16 m_CategoryId; // 0x10

		::System::Void .ctor(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERCATEGORY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERCATEGORY_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERCATEGORY_TOSTRING_OFFSET))(nullptr);
		}

		::Unity::Profiling::ProfilerCategory* get_Scripts()
		{
			return (return (::Unity::Profiling::ProfilerCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERCATEGORY_GET_SCRIPTS_OFFSET))(nullptr);
		}

		::System::UInt16 op_Implicit(::Unity::Profiling::ProfilerCategory* arg)
		{
			return (return (::System::UInt16(*)(::Unity::Profiling::ProfilerCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_PROFILING_PROFILERCATEGORY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

