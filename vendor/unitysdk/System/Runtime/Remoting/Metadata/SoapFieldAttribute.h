#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E77C0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_GET_XMLELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x91E77D0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_ISINTEROPXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x91E77E0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x91E77F0)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapFieldAttribute_TypeDefinitionIndex = 24514;

	class SoapFieldAttribute : public Il2CppObject
	{
	public:
		::System::String* _elementName; // 0x28
		::System::Boolean _isElement; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_XmlElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_GET_XMLELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Boolean IsInteropXmlElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_ISINTEROPXMLELEMENT_OFFSET))(nullptr);
		}

		::System::Void SetReflectionObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

