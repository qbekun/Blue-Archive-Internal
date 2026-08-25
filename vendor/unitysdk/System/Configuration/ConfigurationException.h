#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0C00)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0C30)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0C60)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0C90)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0CC0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0CF0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0D20)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0D50)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_BAREMESSAGE_OFFSET UNITYSDK_OFFSET(0x9AB0D80)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x9AB0DB0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_LINE_OFFSET UNITYSDK_OFFSET(0x9AB0DE0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODEFILENAME_OFFSET UNITYSDK_OFFSET(0x9AB0E10)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODELINENUMBER_OFFSET UNITYSDK_OFFSET(0x9AB0E40)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationException_TypeDefinitionIndex = 29959;

	class ConfigurationException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_BareMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_BAREMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_Filename()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_LINE_OFFSET))(nullptr);
		}

		::System::String* GetXmlNodeFilename(::System::Xml::XmlNode* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODEFILENAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetXmlNodeLineNumber(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODELINENUMBER_OFFSET))(arg, nullptr);
		}

	};
}

