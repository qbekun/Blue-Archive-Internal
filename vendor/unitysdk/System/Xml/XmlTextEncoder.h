#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLTEXTENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9968680)
#define SYSTEM_XML_XMLTEXTENCODER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x99686D0)
#define SYSTEM_XML_XMLTEXTENCODER_STARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99686E0)
#define SYSTEM_XML_XMLTEXTENCODER_ENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9968780)
#define SYSTEM_XML_XMLTEXTENCODER_GET_ATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x99687C0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x9968830)
#define SYSTEM_XML_XMLTEXTENCODER_WRITE_OFFSET UNITYSDK_OFFSET(0x99688E0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9968F20)
#define SYSTEM_XML_XMLTEXTENCODER_WRITE_OFFSET UNITYSDK_OFFSET(0x9969090)
#define SYSTEM_XML_XMLTEXTENCODER_WRITERAWWITHSURROGATECHECKING_OFFSET UNITYSDK_OFFSET(0x9969730)
#define SYSTEM_XML_XMLTEXTENCODER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9969930)
#define SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9969A70)
#define SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x9969C40)
#define SYSTEM_XML_XMLTEXTENCODER_WRITESTRINGFRAGMENT_OFFSET UNITYSDK_OFFSET(0x9969680)
#define SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_OFFSET UNITYSDK_OFFSET(0x9968E40)
#define SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_OFFSET UNITYSDK_OFFSET(0x9969BA0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREFIMPL_OFFSET UNITYSDK_OFFSET(0x9968EA0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextEncoder_TypeDefinitionIndex = 27683;

	class XmlTextEncoder : public Il2CppObject
	{
	public:
		::System::IO::TextWriter* textWriter; // 0x10
		::System::Boolean inAttribute; // 0x18
		::System::Char quoteChar; // 0x1A
		::System::Text::StringBuilder* attrValue; // 0x20
		::System::Boolean cacheAttrValue; // 0x28
		::System::Xml::XmlCharType* xmlCharType; // 0x30

		::System::Void .ctor(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_QuoteChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_SET_QUOTECHAR_OFFSET))(arg, nullptr);
		}

		::System::Void StartAttribute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_STARTATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void EndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_ENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::String* get_AttributeValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_GET_ATTRIBUTEVALUE_OFFSET))(nullptr);
		}

		::System::Void WriteSurrogateChar(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void WriteRawWithSurrogateChecking(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITERAWWITHSURROGATECHECKING_OFFSET))(str, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteStringFragment(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITESTRINGFRAGMENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void WriteCharEntityImpl(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void WriteCharEntityImpl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_OFFSET))(str, nullptr);
		}

		::System::Void WriteEntityRefImpl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREFIMPL_OFFSET))(str, nullptr);
		}

	};
}

