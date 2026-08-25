#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24A30)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B24B40)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B24B50)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B24B90)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CancelEventHandler_TypeDefinitionIndex = 29357;

	class CancelEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::CancelEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::CancelEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

