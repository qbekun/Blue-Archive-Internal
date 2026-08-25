#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1DDB0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ASYNCOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9B1DEA0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_CANCELLATIONPENDING_OFFSET UNITYSDK_OFFSET(0x9B1DF30)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_CANCELASYNC_OFFSET UNITYSDK_OFFSET(0x9B1DF40)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_DOWORK_OFFSET UNITYSDK_OFFSET(0x9B1DFB0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_DOWORK_OFFSET UNITYSDK_OFFSET(0x9B1E050)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_ISBUSY_OFFSET UNITYSDK_OFFSET(0x9B1E0F0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONDOWORK_OFFSET UNITYSDK_OFFSET(0x9B1E100)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONRUNWORKERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9B1E120)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9B1E140)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_PROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9B1E160)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_PROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9B1E200)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_PROGRESSREPORTER_OFFSET UNITYSDK_OFFSET(0x9B1E2A0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B1E330)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B1E340)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_OFFSET UNITYSDK_OFFSET(0x9B1E430)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_OFFSET UNITYSDK_OFFSET(0x9B1E440)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_RUNWORKERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9B1E6C0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_RUNWORKERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9B1E760)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERREPORTSPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B1E800)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERREPORTSPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B1E810)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERSUPPORTSCANCELLATION_OFFSET UNITYSDK_OFFSET(0x9B1E820)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERSUPPORTSCANCELLATION_OFFSET UNITYSDK_OFFSET(0x9B1E830)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTART_OFFSET UNITYSDK_OFFSET(0x9B1E840)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B1E9E0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER__RUNWORKERASYNC_B__27_0_OFFSET UNITYSDK_OFFSET(0x9B1E9F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BackgroundWorker_TypeDefinitionIndex = 29320;

	class BackgroundWorker : public Il2CppObject
	{
	public:
		::System::Boolean _canCancelWorker; // 0x28
		::System::Boolean _workerReportsProgress; // 0x29
		::System::Boolean _cancellationPending; // 0x2A
		::System::Boolean _isRunning; // 0x2B
		::System::ComponentModel::AsyncOperation* _asyncOperation; // 0x30
		::System::Threading::SendOrPostCallback* _operationCompleted; // 0x38
		::System::Threading::SendOrPostCallback* _progressReporter; // 0x40
		::System::ComponentModel::DoWorkEventHandler* DoWork; // 0x48
		::System::ComponentModel::ProgressChangedEventHandler* ProgressChanged; // 0x50
		::System::ComponentModel::RunWorkerCompletedEventHandler* RunWorkerCompleted; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AsyncOperationCompleted(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ASYNCOPERATIONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CancellationPending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_CANCELLATIONPENDING_OFFSET))(nullptr);
		}

		::System::Void CancelAsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_CANCELASYNC_OFFSET))(nullptr);
		}

		::System::Void add_DoWork(::System::ComponentModel::DoWorkEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::DoWorkEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_DOWORK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_DoWork(::System::ComponentModel::DoWorkEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::DoWorkEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_DOWORK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBusy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_ISBUSY_OFFSET))(nullptr);
		}

		::System::Void OnDoWork(::System::ComponentModel::DoWorkEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::DoWorkEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONDOWORK_OFFSET))(arg, nullptr);
		}

		::System::Void OnRunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::RunWorkerCompletedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONRUNWORKERCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void OnProgressChanged(::System::ComponentModel::ProgressChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ProgressChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ONPROGRESSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ProgressChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_PROGRESSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ProgressChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_PROGRESSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ProgressReporter(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_PROGRESSREPORTER_OFFSET))(arg, nullptr);
		}

		::System::Void ReportProgress(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void ReportProgress(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REPORTPROGRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RunWorkerAsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_OFFSET))(nullptr);
		}

		::System::Void RunWorkerAsync(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_RUNWORKERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void add_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::RunWorkerCompletedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_ADD_RUNWORKERCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::RunWorkerCompletedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_REMOVE_RUNWORKERCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WorkerReportsProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERREPORTSPROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_WorkerReportsProgress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERREPORTSPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WorkerSupportsCancellation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_GET_WORKERSUPPORTSCANCELLATION_OFFSET))(nullptr);
		}

		::System::Void set_WorkerSupportsCancellation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_SET_WORKERSUPPORTSCANCELLATION_OFFSET))(arg, nullptr);
		}

		::System::Void WorkerThreadStart(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTART_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void _RunWorkerAsync_b__27_0(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER__RUNWORKERASYNC_B__27_0_OFFSET))(arg, nullptr);
		}

	};
}

