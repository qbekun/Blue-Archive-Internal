#pragma once
#include "unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe { class JobRanges&; }

#define EXECUTEJOBFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXECUTEJOBFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ExecuteJobFunction_TypeDefinitionIndex = 36993;

	class ExecuteJobFunction : public Il2CppObject
	{
	public:
		::System::Void Invoke(Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::System::Int32, ::Unity::Jobs::LowLevel::Unsafe::JobRanges&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EXECUTEJOBFUNCTION_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EXECUTEJOBFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

