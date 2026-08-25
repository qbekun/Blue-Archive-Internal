#pragma once
#include "../unitysdk.h"

#define SYSTEM_IASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IAsyncResult_TypeDefinitionIndex = 23766;

	class IAsyncResult : public Il2CppObject
	{
	public:
		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IASYNCRESULT_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return (return (::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(nullptr);
		}

		::System::Object* get_AsyncState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IASYNCRESULT_GET_ASYNCSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(nullptr);
		}

	};
}

