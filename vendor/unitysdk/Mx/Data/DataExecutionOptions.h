#pragma once
#include "../../unitysdk.h"

#define MX_DATA_DATAEXECUTIONOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x17FD360)
#define MX_DATA_DATAEXECUTIONOPTIONS_GET_CANCELLATIONTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x17FD440)
#define MX_DATA_DATAEXECUTIONOPTIONS_GET_THREADBATCHSIZE_OFFSET UNITYSDK_OFFSET(0x17FD450)
#define MX_DATA_DATAEXECUTIONOPTIONS_GET_ISINTOOL_OFFSET UNITYSDK_OFFSET(0x17FD460)
#define MX_DATA_DATAEXECUTIONOPTIONS_GET_SQLITECACHEALL_OFFSET UNITYSDK_OFFSET(0x17FD470)
#define MX_DATA_DATAEXECUTIONOPTIONS_GET_SEMAPHORE_OFFSET UNITYSDK_OFFSET(0x17FD480)

namespace MX::Data
{
	inline static constexpr unsigned int DataExecutionOptions_TypeDefinitionIndex = 15676;

	class DataExecutionOptions : public Il2CppObject
	{
	public:
		::System::Threading::CancellationTokenSource* _CancellationTokenSource_k__BackingField; // 0x10
		::System::Boolean _IsInTool_k__BackingField; // 0x18
		::System::Boolean _SqliteCacheAll_k__BackingField; // 0x19
		::System::Int32 _ThreadBatchSize_k__BackingField; // 0x1C
		::System::Threading::SemaphoreSlim* _Semaphore_k__BackingField; // 0x20

		::System::Void .ctor(::System::Threading::CancellationTokenSource* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAEXECUTIONOPTIONS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::CancellationTokenSource* get_CancellationTokenSource()
		{
			return (return (::System::Threading::CancellationTokenSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAEXECUTIONOPTIONS_GET_CANCELLATIONTOKENSOURCE_OFFSET))(nullptr);
		}

		::System::Int32 get_ThreadBatchSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAEXECUTIONOPTIONS_GET_THREADBATCHSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInTool()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAEXECUTIONOPTIONS_GET_ISINTOOL_OFFSET))(nullptr);
		}

		::System::Boolean get_SqliteCacheAll()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAEXECUTIONOPTIONS_GET_SQLITECACHEALL_OFFSET))(nullptr);
		}

		::System::Threading::SemaphoreSlim* get_Semaphore()
		{
			return (return (::System::Threading::SemaphoreSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAEXECUTIONOPTIONS_GET_SEMAPHORE_OFFSET))(nullptr);
		}

	};
}

