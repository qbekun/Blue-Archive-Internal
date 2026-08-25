#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E78A0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_USEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x91E78B0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_XMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x91E78C0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x91E78D0)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapMethodAttribute_TypeDefinitionIndex = 24515;

	class SoapMethodAttribute : public Il2CppObject
	{
	public:
		::System::String* _responseElement; // 0x28
		::System::String* _responseNamespace; // 0x30
		::System::String* _returnElement; // 0x38
		::System::String* _soapAction; // 0x40
		::System::Boolean _useAttribute; // 0x48
		::System::String* _namespace; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_UseAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_USEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::String* get_XmlNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_XMLNAMESPACE_OFFSET))(nullptr);
		}

		::System::Void SetReflectionObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

