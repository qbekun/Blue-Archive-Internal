#pragma once
#include "unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe { class JobRanges&; }

#define JOBPARALLELFORBATCHPRODUCER`1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define JOBPARALLELFORBATCHPRODUCER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define JOBPARALLELFORBATCHPRODUCER`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int JobParallelForBatchProducer`1_TypeDefinitionIndex = 36981;

	class JobParallelForBatchProducer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* jobReflectionData; // 0x0

		::System::Void Execute(Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::System::Int32, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + JOBPARALLELFORBATCHPRODUCER`1_EXECUTE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBPARALLELFORBATCHPRODUCER`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBPARALLELFORBATCHPRODUCER`1_INITIALIZE_OFFSET))(nullptr);
		}

	};

