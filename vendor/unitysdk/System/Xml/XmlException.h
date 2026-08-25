#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C7A10)
#define SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x99C8140)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8280)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C82B0)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8300)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C82E0)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8330)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99BA100)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99B9EA0)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8640)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8770)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C89F0)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8830)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C2FE0)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8A10)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C32C0)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8B50)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8C00)
#define SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8580)
#define SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET UNITYSDK_OFFSET(0x99C8490)
#define SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x99C7E70)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET UNITYSDK_OFFSET(0x99BA0B0)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET UNITYSDK_OFFSET(0x99C8CB0)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET UNITYSDK_OFFSET(0x99BA590)
#define SYSTEM_XML_XMLEXCEPTION_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x99C8D10)
#define SYSTEM_XML_XMLEXCEPTION_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x99C8D20)
#define SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x99C8D30)
#define SYSTEM_XML_XMLEXCEPTION_GET_RESSTRING_OFFSET UNITYSDK_OFFSET(0x99C8D50)

namespace System::Xml
{
	inline static constexpr unsigned int XmlException_TypeDefinitionIndex = 27829;

	class XmlException : public Il2CppObject
	{
	public:
		::System::String* res; // 0x90
		::Il2CppArray<::System::Object*>* args; // 0x98
		::System::Int32 lineNumber; // 0xA0
		::System::Int32 linePosition; // 0xA4
		::System::String* sourceUri; // 0xA8
		::System::String* message; // 0xB0

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Xml::IXmlLineInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::IXmlLineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::IXmlLineInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Xml::IXmlLineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::IXmlLineInfo* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Xml::IXmlLineInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, str, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Exception* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Exception*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Exception* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, arg, str, nullptr);
		}

		::System::String* FormatUserMessage(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* CreateMessage(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildCharExceptionArgs(::System::String* str, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildCharExceptionArgs(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildCharExceptionArgs(::System::Char arg, ::System::Char arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_ResString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_RESSTRING_OFFSET))(nullptr);
		}

	};
}

