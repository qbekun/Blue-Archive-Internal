#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E7780)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_USEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x91E7790)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_XMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x91E77A0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x91E77B0)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapAttribute_TypeDefinitionIndex = 24513;

	class SoapAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _useAttribute; // 0x10
		::System::String* ProtXmlNamespace; // 0x18
		::System::Object* ReflectInfo; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_UseAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_USEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::String* get_XmlNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_XMLNAMESPACE_OFFSET))(nullptr);
		}

		::System::Void SetReflectionObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

