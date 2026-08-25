#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDE35C0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDE35D0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE3610)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xDE3720)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyCollectionChangedEventHandler_TypeDefinitionIndex = 10148;

	class NotifyCollectionChangedEventHandler : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::NotifyCollectionChangedEventArgs* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::NotifyCollectionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

