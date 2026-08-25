#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B323F0)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B32500)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B32510)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B32550)

namespace System::ComponentModel
{
	inline static constexpr unsigned int HandledEventHandler_TypeDefinitionIndex = 29395;

	class HandledEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::HandledEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::HandledEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::HandledEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::HandledEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

