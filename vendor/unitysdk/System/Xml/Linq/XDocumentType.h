#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9857CE0)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9858D00)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x9858DC0)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9858DD0)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9858DE0)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x9858DF0)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x9858E00)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x9858E10)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x9858EB0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDocumentType_TypeDefinitionIndex = 37295;

	class XDocumentType : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x28
		::System::String* _publicId; // 0x30
		::System::String* _systemId; // 0x38
		::System::String* _internalSubset; // 0x40

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_.CTOR_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XDocumentType* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XDocumentType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InternalSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_PublicId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_PUBLICID_OFFSET))(nullptr);
		}

		::System::String* get_SystemId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_SYSTEMID_OFFSET))(nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_CLONENODE_OFFSET))(nullptr);
		}

	};
}

