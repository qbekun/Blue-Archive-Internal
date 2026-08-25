#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_THREADPOOLGLOBALS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E5930)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolGlobals_TypeDefinitionIndex = 24106;

	class ThreadPoolGlobals : public Il2CppObject
	{
	public:
		::System::Int32 processorCount; // 0x0
		::System::Boolean vmTpInitialized; // 0x4
		::System::Boolean enableWorkerTracking; // 0x5
		::System::Threading::ThreadPoolWorkQueue* workQueue; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLGLOBALS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

