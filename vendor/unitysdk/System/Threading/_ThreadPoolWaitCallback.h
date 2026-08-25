#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING__THREADPOOLWAITCALLBACK_PERFORMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0x93E7FD0)

namespace System::Threading
{
	inline static constexpr unsigned int _ThreadPoolWaitCallback_TypeDefinitionIndex = 24112;

	class _ThreadPoolWaitCallback : public Il2CppObject
	{
	public:
		::System::Boolean PerformWaitCallback()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING__THREADPOOLWAITCALLBACK_PERFORMWAITCALLBACK_OFFSET))(nullptr);
		}

	};
}

