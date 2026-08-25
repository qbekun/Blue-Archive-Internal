#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_CREATEOPERATION_OFFSET UNITYSDK_OFFSET(0x9B1DD10)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B1DD30)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_SET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B1DDA0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncOperationManager_TypeDefinitionIndex = 29319;

	class AsyncOperationManager : public Il2CppObject
	{
	public:
		::System::ComponentModel::AsyncOperation* CreateOperation(::System::Object* arg)
		{
			return (return (::System::ComponentModel::AsyncOperation*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_CREATEOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContext()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_GET_SYNCHRONIZATIONCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_SynchronizationContext(::System::Threading::SynchronizationContext* arg)
		{
			((::System::Void(*)(::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_SET_SYNCHRONIZATIONCONTEXT_OFFSET))(arg, nullptr);
		}

	};
}

