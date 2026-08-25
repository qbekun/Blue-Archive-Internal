#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLPARSERCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9964A00)
#define SYSTEM_XML_XMLPARSERCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9964AA0)
#define SYSTEM_XML_XMLPARSERCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9964AF0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x9964E70)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMESPACEMANAGER_OFFSET UNITYSDK_OFFSET(0x9964E80)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_DOCTYPENAME_OFFSET UNITYSDK_OFFSET(0x9964E90)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x9964EA0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x9964EB0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x9964EC0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x9964ED0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x9964EE0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x9964EF0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x9964F00)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_HASDTDINFO_OFFSET UNITYSDK_OFFSET(0x9964F10)

namespace System::Xml
{
	inline static constexpr unsigned int XmlParserContext_TypeDefinitionIndex = 27678;

	class XmlParserContext : public Il2CppObject
	{
	public:
		::System::Xml::XmlNameTable* _nt; // 0x10
		::System::Xml::XmlNamespaceManager* _nsMgr; // 0x18
		::System::String* _docTypeName; // 0x20
		::System::String* _pubId; // 0x28
		::System::String* _sysId; // 0x30
		::System::String* _internalSubset; // 0x38
		::System::String* _xmlLang; // 0x40
		::System::Xml::XmlSpace* _xmlSpace; // 0x48
		::System::String* _baseURI; // 0x50
		::System::Text::Encoding* _encoding; // 0x58

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::String* str, ::System::Xml::XmlSpace* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::Xml::XmlSpace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlSpace* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlSpace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_.CTOR_OFFSET))(arg, arg, str, str, str, str, str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlSpace* arg, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlSpace*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_.CTOR_OFFSET))(arg, arg, str, str, str, str, str, str, arg, arg, nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNamespaceManager* get_NamespaceManager()
		{
			return (return (::System::Xml::XmlNamespaceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMESPACEMANAGER_OFFSET))(nullptr);
		}

		::System::String* get_DocTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_DOCTYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_PublicId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_PUBLICID_OFFSET))(nullptr);
		}

		::System::String* get_SystemId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_SYSTEMID_OFFSET))(nullptr);
		}

		::System::String* get_BaseURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::String* get_InternalSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_INTERNALSUBSET_OFFSET))(nullptr);
		}

		::System::String* get_XmlLang()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLLANG_OFFSET))(nullptr);
		}

		::System::Xml::XmlSpace* get_XmlSpace()
		{
			return (return (::System::Xml::XmlSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLSPACE_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasDtdInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_HASDTDINFO_OFFSET))(nullptr);
		}

	};
}

