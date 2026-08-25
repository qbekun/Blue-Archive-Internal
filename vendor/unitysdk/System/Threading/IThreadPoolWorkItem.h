#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int IThreadPoolWorkItem_TypeDefinitionIndex = 24103;

	class IThreadPoolWorkItem : public Il2CppObject
	{
	public:
		::System::Void ExecuteWorkItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(nullptr);
		}

		::System::Void MarkAborted(::System::Threading::ThreadAbortException* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadAbortException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(arg, nullptr);
		}

	};
}

