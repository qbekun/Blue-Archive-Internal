#pragma once
#include "unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe { class JobRanges&; }

#define TRANSFORMPARALLELFORLOOPSTRUCT`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRANSFORMPARALLELFORLOOPSTRUCT`1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TransformParallelForLoopStruct`1_TypeDefinitionIndex = 31243;

	class TransformParallelForLoopStruct`1 : public Il2CppObject
	{
	public:
		::System::Int32 jobReflectionData; // 0x0

		::System::Int32 Initialize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPARALLELFORLOOPSTRUCT`1_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Execute(Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::System::Int32, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPARALLELFORLOOPSTRUCT`1_EXECUTE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

