#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B47430)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B47540)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B47550)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B47580)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshEventHandler_TypeDefinitionIndex = 29453;

	class RefreshEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::ComponentModel::RefreshEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::RefreshEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::ComponentModel::RefreshEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::ComponentModel::RefreshEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

