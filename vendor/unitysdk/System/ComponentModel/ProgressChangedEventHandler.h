#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B547C0)
#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B548D0)
#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B548E0)
#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B54920)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ProgressChangedEventHandler_TypeDefinitionIndex = 29504;

	class ProgressChangedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::ProgressChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::ProgressChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::ProgressChangedEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::ProgressChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

