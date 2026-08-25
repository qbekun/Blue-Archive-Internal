#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21300)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B21410)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B21420)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B21460)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AddingNewEventHandler_TypeDefinitionIndex = 29342;

	class AddingNewEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::AddingNewEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::AddingNewEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::AddingNewEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::AddingNewEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

