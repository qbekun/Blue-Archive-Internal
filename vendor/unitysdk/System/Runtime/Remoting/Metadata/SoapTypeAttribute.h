#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E7B10)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_USEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x91E7B20)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x91E7B30)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x91E7B40)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAME_OFFSET UNITYSDK_OFFSET(0x91E7B50)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x91E7B60)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x91E7B70)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLTYPE_OFFSET UNITYSDK_OFFSET(0x91E7B80)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x91E7B90)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapTypeAttribute_TypeDefinitionIndex = 24517;

	class SoapTypeAttribute : public Il2CppObject
	{
	public:
		::System::Boolean _useAttribute; // 0x28
		::System::String* _xmlElementName; // 0x30
		::System::String* _xmlNamespace; // 0x38
		::System::String* _xmlTypeName; // 0x40
		::System::String* _xmlTypeNamespace; // 0x48
		::System::Boolean _isType; // 0x50
		::System::Boolean _isElement; // 0x51

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_UseAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_USEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::String* get_XmlElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLELEMENTNAME_OFFSET))(nullptr);
		}

		::System::String* get_XmlNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLNAMESPACE_OFFSET))(nullptr);
		}

		::System::String* get_XmlTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_XmlTypeNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAMESPACE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInteropXmlElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInteropXmlType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLTYPE_OFFSET))(nullptr);
		}

		::System::Void SetReflectionObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

