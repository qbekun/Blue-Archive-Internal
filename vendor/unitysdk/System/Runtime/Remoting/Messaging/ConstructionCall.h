#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D7020)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EDC70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITDICTIONARY_OFFSET UNITYSDK_OFFSET(0x91EDD20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x91EDEF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x91EDF00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x91EDF10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x91EDFD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x91EDFE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x91EDFF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x91EE000)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SETACTIVATIONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x91EE010)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CONTEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x91EE020)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x91EE090)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91EE8B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91EEEA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_SOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x91EEF20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_SOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x91EEF30)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionCall_TypeDefinitionIndex = 24535;

	class ConstructionCall : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* _activator; // 0x68
		::Il2CppArray<::System::Object*>* _activationAttributes; // 0x70
		::System::Collections::IList* _contextProperties; // 0x78
		::System::Type* _activationType; // 0x80
		::System::String* _activationTypeName; // 0x88
		::System::Boolean _isContextOk; // 0x90
		::System::Runtime::Remoting::Proxies::RemotingProxy* _sourceProxy; // 0x98

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITDICTIONARY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContextOk()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ISCONTEXTOK_OFFSET))(nullptr);
		}

		::System::Void set_IsContextOk(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ISCONTEXTOK_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ActivationType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ActivationTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPENAME_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_Activator()
		{
			return (return (::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATOR_OFFSET))(nullptr);
		}

		::System::Void set_Activator(::System::Runtime::Remoting::Activation::IActivator* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Activation::IActivator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ACTIVATOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CallSiteActivationAttributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Void SetActivationAttributes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SETACTIVATIONATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_ContextProperties()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CONTEXTPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void InitMethodProperty(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITMETHODPROPERTY_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy()
		{
			return (return (::System::Runtime::Remoting::Proxies::RemotingProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_SOURCEPROXY_OFFSET))(nullptr);
		}

		::System::Void set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Proxies::RemotingProxy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_SOURCEPROXY_OFFSET))(arg, nullptr);
		}

	};
}

