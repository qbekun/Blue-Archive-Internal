#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_WAITHANDLECANNOTBEOPENEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7B60)
#define SYSTEM_THREADING_WAITHANDLECANNOTBEOPENEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7BB0)
#define SYSTEM_THREADING_WAITHANDLECANNOTBEOPENEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7BD0)

namespace System::Threading
{
	inline static constexpr unsigned int WaitHandleCannotBeOpenedException_TypeDefinitionIndex = 24050;

	class WaitHandleCannotBeOpenedException : public ::System::Net::Http::Headers::TryParseDelegate`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLECANNOTBEOPENEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLECANNOTBEOPENEDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLECANNOTBEOPENEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

