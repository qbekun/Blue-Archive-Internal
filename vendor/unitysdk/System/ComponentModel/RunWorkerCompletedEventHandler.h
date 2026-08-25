#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B641A0)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B642B0)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B642C0)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B64300)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RunWorkerCompletedEventHandler_TypeDefinitionIndex = 29509;

	class RunWorkerCompletedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::RunWorkerCompletedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::RunWorkerCompletedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::RunWorkerCompletedEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::RunWorkerCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

