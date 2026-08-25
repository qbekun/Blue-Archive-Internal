#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLECACHE`1_ISCACHEDINVALIDHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeHandleCache`1_TypeDefinitionIndex = 23648;

	class SafeHandleCache`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_invalidHandle; // 0x0

		::System::Boolean IsCachedInvalidHandle(::System::Runtime::InteropServices::SafeHandle* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLECACHE`1_ISCACHEDINVALIDHANDLE_OFFSET))(arg, nullptr);
		}

	};
}

