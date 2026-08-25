#pragma once
#include "unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe { class JobRanges&; }

#define JOBSTRUCT`1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define JOBSTRUCT`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int JobStruct`1_TypeDefinitionIndex = 30867;

	class JobStruct`1 : public Il2CppObject
	{
	public:
		::System::Int32 jobReflectionData; // 0x0

		::System::Void Execute(Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::System::Int32, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + JOBSTRUCT`1_EXECUTE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBSTRUCT`1_.CCTOR_OFFSET))(nullptr);
		}

	};

