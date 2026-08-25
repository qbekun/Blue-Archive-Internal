#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_GET_HASPROPERTIES_OFFSET UNITYSDK_OFFSET(0x91DC8F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_REGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x91DCCC0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_UNREGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x91DD060)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_NOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x91DD3A0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_FINDPROPERTY_OFFSET UNITYSDK_OFFSET(0x91DF9A0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DD210)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int DynamicPropertyCollection_TypeDefinitionIndex = 24475;

	class DynamicPropertyCollection : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _properties; // 0x10

		::System::Boolean get_HasProperties()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_GET_HASPROPERTIES_OFFSET))(nullptr);
		}

		::System::Boolean RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_REGISTERDYNAMICPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean UnregisterDynamicProperty(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_UNREGISTERDYNAMICPROPERTY_OFFSET))(str, nullptr);
		}

		::System::Void NotifyMessage(::System::Boolean arg, ::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_NOTIFYMESSAGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindProperty(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_FINDPROPERTY_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

