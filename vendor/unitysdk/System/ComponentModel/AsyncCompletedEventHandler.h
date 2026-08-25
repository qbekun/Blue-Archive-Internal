#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4AF10)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B4B020)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B4B030)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B4B070)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncCompletedEventHandler_TypeDefinitionIndex = 29486;

	class AsyncCompletedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::AsyncCompletedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::AsyncCompletedEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

