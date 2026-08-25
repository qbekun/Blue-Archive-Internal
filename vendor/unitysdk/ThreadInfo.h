#pragma once
#include "unitysdk.h"

#define THREADINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BAD230)

	inline static constexpr unsigned int ThreadInfo_TypeDefinitionIndex = 25404;

	class ThreadInfo : public Il2CppObject
	{
	public:
		::System::UInt32 ThreadId; // 0x10
		::System::UInt32 OwnerProcessId; // 0x14
		::System::Int32 BasePriority; // 0x18
		::System::Int32 Priority; // 0x1C
		::System::String* Name; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THREADINFO_.CTOR_OFFSET))(nullptr);
		}

	};

