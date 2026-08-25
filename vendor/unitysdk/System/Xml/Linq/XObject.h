#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98520F0)
#define SYSTEM_XML_LINQ_XOBJECT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x9857F40)
#define SYSTEM_XML_LINQ_XOBJECT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_LINQ_XOBJECT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x985CB10)
#define SYSTEM_XML_LINQ_XOBJECT_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x985A5F0)
#define SYSTEM_XML_LINQ_XOBJECT_ANNOTATIONFORSEALEDTYPE_OFFSET UNITYSDK_OFFSET(0x985CB80)
#define SYSTEM_XML_LINQ_XOBJECT_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM.XML.IXMLLINEINFO.HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x985CCA0)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM.XML.IXMLLINEINFO.GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x985CCF0)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM.XML.IXMLLINEINFO.GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x985CD40)
#define SYSTEM_XML_LINQ_XOBJECT_GET_HASBASEURI_OFFSET UNITYSDK_OFFSET(0x9857EF0)
#define SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGED_OFFSET UNITYSDK_OFFSET(0x9852B40)
#define SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGING_OFFSET UNITYSDK_OFFSET(0x9852AA0)
#define SYSTEM_XML_LINQ_XOBJECT_SETBASEURI_OFFSET UNITYSDK_OFFSET(0x9857D90)
#define SYSTEM_XML_LINQ_XOBJECT_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x9857E10)
#define SYSTEM_XML_LINQ_XOBJECT_SKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x9854250)
#define SYSTEM_XML_LINQ_XOBJECT_GETSAVEOPTIONSFROMANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x985C5F0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObject_TypeDefinitionIndex = 37312;

	class XObject : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XContainer* parent; // 0x10
		::System::Object* annotations; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_BaseUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XElement* get_Parent()
		{
			return (return (::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void AddAnnotation(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_ADDANNOTATION_OFFSET))(arg, nullptr);
		}

		::System::Object* AnnotationForSealedType(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_ANNOTATIONFORSEALEDTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Annotation()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_ANNOTATION_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IXmlLineInfo.HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM.XML.IXMLLINEINFO.HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IXmlLineInfo.get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM.XML.IXMLLINEINFO.GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IXmlLineInfo.get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM.XML.IXMLLINEINFO.GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_HasBaseUri()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_HASBASEURI_OFFSET))(nullptr);
		}

		::System::Boolean NotifyChanged(::System::Object* arg, ::System::Xml::Linq::XObjectChangeEventArgs* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean NotifyChanging(::System::Object* arg, ::System::Xml::Linq::XObjectChangeEventArgs* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetBaseUri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SETBASEURI_OFFSET))(str, nullptr);
		}

		::System::Void SetLineInfo(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SETLINEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SkipNotify()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SKIPNOTIFY_OFFSET))(nullptr);
		}

		::System::Xml::Linq::SaveOptions* GetSaveOptionsFromAnnotations()
		{
			return (return (::System::Xml::Linq::SaveOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GETSAVEOPTIONSFROMANNOTATIONS_OFFSET))(nullptr);
		}

	};
}

