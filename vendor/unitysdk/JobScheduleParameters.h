#pragma once
#include "unitysdk.h"

namespace Unity::Jobs { class JobHandle; }
namespace Unity::Jobs::LowLevel::Unsafe { class ScheduleMode; }

#define JOBSCHEDULEPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1350)

	inline static constexpr unsigned int JobScheduleParameters_TypeDefinitionIndex = 30881;

	class JobScheduleParameters : public Il2CppObject
	{
	public:
		::Unity::Jobs::JobHandle* Dependency; // 0x10
		::System::Int32 ScheduleMode; // 0x20
		::System::Int32 ReflectionData; // 0x28
		::System::Int32 JobDataPtr; // 0x30

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg, ::Unity::Jobs::JobHandle* arg, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::Unity::Jobs::JobHandle*, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode*, ::PVOID))((::PBYTE)hIl2Cpp + JOBSCHEDULEPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

