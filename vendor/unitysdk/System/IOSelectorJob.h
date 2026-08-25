#pragma once
#include "../unitysdk.h"

#define SYSTEM_IOSELECTORJOB_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD7E70)
#define SYSTEM_IOSELECTORJOB_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x9AD7EC0)
#define SYSTEM_IOSELECTORJOB_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET UNITYSDK_OFFSET(0x9AD7EF0)
#define SYSTEM_IOSELECTORJOB_MARKDISPOSED_OFFSET UNITYSDK_OFFSET(0x9AD7F00)

namespace System
{
	inline static constexpr unsigned int IOSelectorJob_TypeDefinitionIndex = 29195;

	class IOSelectorJob : public Il2CppObject
	{
	public:
		::System::IOOperation* operation; // 0x10
		::System::IOAsyncCallback* callback; // 0x18
		::System::IOAsyncResult* state; // 0x20

		::System::Void .ctor(::System::IOOperation* arg, ::System::IOAsyncCallback* arg, ::System::IOAsyncResult* arg)
		{
			((::System::Void(*)(::System::IOOperation*, ::System::IOAsyncCallback*, ::System::IOAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET))(nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.MarkAborted(::System::Threading::ThreadAbortException* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadAbortException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET))(arg, nullptr);
		}

		::System::Void MarkDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTORJOB_MARKDISPOSED_OFFSET))(nullptr);
		}

	};
}

