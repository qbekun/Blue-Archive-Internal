#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A8F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B4AA00)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B4AA10)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B4AA50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangedEventHandler_TypeDefinitionIndex = 29481;

	class PropertyChangedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::PropertyChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::PropertyChangedEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

