#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B85A10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B85B20)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventHandler_TypeDefinitionIndex = 29574;

	class NotifyCollectionChangedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

