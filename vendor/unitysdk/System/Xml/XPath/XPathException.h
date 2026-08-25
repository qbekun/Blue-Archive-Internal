#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CB900)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x99CBCE0)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CBDB0)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CBE00)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x99CBF90)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x99CC0A0)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x99CC1C0)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x99CC320)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CC030)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CBF10)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x99CBBB0)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x99CC440)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathException_TypeDefinitionIndex = 27845;

	class XPathException : public Il2CppObject
	{
	public:
		::System::String* res; // 0x90
		::Il2CppArray<::System::Object*>* args; // 0x98
		::System::String* message; // 0xA0

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Xml::XPath::XPathException* Create(::System::String* str)
		{
			return (return (::System::Xml::XPath::XPathException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET))(str, nullptr);
		}

		::System::Xml::XPath::XPathException* Create(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::XPath::XPathException*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET))(str, str, nullptr);
		}

		::System::Xml::XPath::XPathException* Create(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::XPath::XPathException*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET))(str, str, str, nullptr);
		}

		::System::Xml::XPath::XPathException* Create(::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::System::Xml::XPath::XPathException*(*)(::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* CreateMessage(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATEMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

