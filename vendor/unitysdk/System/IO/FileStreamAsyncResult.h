#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_FILESTREAMASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9322D60)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_CBWRAPPER_OFFSET UNITYSDK_OFFSET(0x93241A0)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x9324230)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x9324240)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x9324250)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9324260)

namespace System::IO
{
	inline static constexpr unsigned int FileStreamAsyncResult_TypeDefinitionIndex = 25297;

	class FileStreamAsyncResult : public Il2CppObject
	{
	public:
		::System::Object* state; // 0x10
		::System::Boolean completed; // 0x18
		::System::Threading::ManualResetEvent* wh; // 0x20
		::System::AsyncCallback* cb; // 0x28
		::System::Boolean completedSynch; // 0x30
		::System::Int32 Count; // 0x34
		::System::Int32 OriginalCount; // 0x38
		::System::Int32 BytesRead; // 0x3C
		::System::AsyncCallback* realcb; // 0x40

		::System::Void .ctor(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CBWrapper(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_CBWRAPPER_OFFSET))(arg, nullptr);
		}

		::System::Object* get_AsyncState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(nullptr);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return (return (::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

	};
}

