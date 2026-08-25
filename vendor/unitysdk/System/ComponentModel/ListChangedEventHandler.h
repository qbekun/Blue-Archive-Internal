#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35810)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B35920)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B35930)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B35970)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedEventHandler_TypeDefinitionIndex = 29427;

	class ListChangedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::ListChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::ListChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::ListChangedEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::ListChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

