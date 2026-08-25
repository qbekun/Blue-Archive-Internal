#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4AAD0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B4ABE0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B4ABF0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B4AC30)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventHandler_TypeDefinitionIndex = 29483;

	class PropertyChangingEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::PropertyChangingEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::PropertyChangingEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::PropertyChangingEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::PropertyChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

