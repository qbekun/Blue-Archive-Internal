#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1D790)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9B1D800)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_USERSUPPLIEDSTATE_OFFSET UNITYSDK_OFFSET(0x9B1D8E0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B1D8F0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POST_OFFSET UNITYSDK_OFFSET(0x9B1D900)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POSTOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9B1D9D0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9B1DAE0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POSTCORE_OFFSET UNITYSDK_OFFSET(0x9B1D920)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETEDCORE_OFFSET UNITYSDK_OFFSET(0x9B1D9F0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYNOTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9B1DB50)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYDELEGATENOTNULL_OFFSET UNITYSDK_OFFSET(0x9B1DBC0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_CREATEOPERATION_OFFSET UNITYSDK_OFFSET(0x9B1DC40)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1DCE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncOperation_TypeDefinitionIndex = 29318;

	class AsyncOperation : public Il2CppObject
	{
	public:
		::System::Threading::SynchronizationContext* _syncContext; // 0x10
		::System::Object* _userSuppliedState; // 0x18
		::System::Boolean _alreadyCompleted; // 0x20

		::System::Void .ctor(::System::Object* arg, ::System::Threading::SynchronizationContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_FINALIZE_OFFSET))(nullptr);
		}

		::System::Object* get_UserSuppliedState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_USERSUPPLIEDSTATE_OFFSET))(nullptr);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContext()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_GET_SYNCHRONIZATIONCONTEXT_OFFSET))(nullptr);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PostOperationCompleted(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POSTOPERATIONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OperationCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void PostCore(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_POSTCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OperationCompletedCore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_OPERATIONCOMPLETEDCORE_OFFSET))(nullptr);
		}

		::System::Void VerifyNotCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYNOTCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void VerifyDelegateNotNull(::System::Threading::SendOrPostCallback* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_VERIFYDELEGATENOTNULL_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::AsyncOperation* CreateOperation(::System::Object* arg, ::System::Threading::SynchronizationContext* arg)
		{
			return (return (::System::ComponentModel::AsyncOperation*(*)(::System::Object*, ::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_CREATEOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

