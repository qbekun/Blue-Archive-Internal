#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x999F150)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_GET_SPECIFIED_OFFSET UNITYSDK_OFFSET(0x99AB650)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x99AB660)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x99AB780)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x99AB7A0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTAFTER_OFFSET UNITYSDK_OFFSET(0x99AB7C0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x99AB7E0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x99AB800)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_WRITETO_OFFSET UNITYSDK_OFFSET(0x99AB820)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SETSPECIFIED_OFFSET UNITYSDK_OFFSET(0x99AB830)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUnspecifiedAttribute_TypeDefinitionIndex = 27785;

	class XmlUnspecifiedAttribute : public Il2CppObject
	{
	public:
		::System::Boolean fSpecified; // 0x28

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Boolean get_Specified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_GET_SPECIFIED_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_InnerText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SET_INNERTEXT_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTBEFORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTAFTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_APPENDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpecified(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SETSPECIFIED_OFFSET))(arg, nullptr);
		}

	};
}

