#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_STREAMHELPERS_VALIDATECOPYTOARGS_OFFSET UNITYSDK_OFFSET(0x92F0240)

namespace System::IO
{
	inline static constexpr unsigned int StreamHelpers_TypeDefinitionIndex = 25237;

	class StreamHelpers : public Il2CppObject
	{
	public:
		::System::Void ValidateCopyToArgs(::System::IO::Stream* arg, ::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMHELPERS_VALIDATECOPYTOARGS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

