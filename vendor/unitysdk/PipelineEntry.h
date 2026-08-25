#pragma once
#include "unitysdk.h"

#define PIPELINEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B96050)
#define PIPELINEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B96080)
#define PIPELINEENTRY_HASFLAG_OFFSET UNITYSDK_OFFSET(0x9B94770)

	inline static constexpr unsigned int PipelineEntry_TypeDefinitionIndex = 29651;

	class PipelineEntry : public Il2CppObject
	{
	public:
		::System::String* Command; // 0x10
		PipelineEntryFlags* Flags; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PIPELINEENTRY_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, PipelineEntryFlags* arg)
		{
			((::System::Void(*)(::System::String*, PipelineEntryFlags*, ::PVOID))((::PBYTE)hIl2Cpp + PIPELINEENTRY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasFlag(PipelineEntryFlags* arg)
		{
			return (return (::System::Boolean(*)(PipelineEntryFlags*, ::PVOID))((::PBYTE)hIl2Cpp + PIPELINEENTRY_HASFLAG_OFFSET))(arg, nullptr);
		}

	};

