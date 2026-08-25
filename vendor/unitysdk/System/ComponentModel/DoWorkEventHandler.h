#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B502F0)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B50400)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B50410)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B50450)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DoWorkEventHandler_TypeDefinitionIndex = 29497;

	class DoWorkEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::DoWorkEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::DoWorkEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::DoWorkEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::DoWorkEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

