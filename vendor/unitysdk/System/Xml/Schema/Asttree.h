#pragma once
#include "../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Axis; }

#define SYSTEM_XML_SCHEMA_ASTTREE_GET_SUBTREEARRAY_OFFSET UNITYSDK_OFFSET(0x9A06620)
#define SYSTEM_XML_SCHEMA_ASTTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A06630)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISNAMETEST_OFFSET UNITYSDK_OFFSET(0x9A07020)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9A05580)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISDESCENDANTORSELF_OFFSET UNITYSDK_OFFSET(0x9A07050)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISSELF_OFFSET UNITYSDK_OFFSET(0x9A065F0)
#define SYSTEM_XML_SCHEMA_ASTTREE_COMPILEXPATH_OFFSET UNITYSDK_OFFSET(0x9A06690)
#define SYSTEM_XML_SCHEMA_ASTTREE_SETURN_OFFSET UNITYSDK_OFFSET(0x9A07080)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Asttree_TypeDefinitionIndex = 27953;

	class Asttree : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _fAxisArray; // 0x10
		::System::String* _xpathexpr; // 0x18
		::System::Boolean _isField; // 0x20
		::System::Xml::XmlNamespaceManager* _nsmgr; // 0x28

		::System::Collections::ArrayList* get_SubtreeArray()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_GET_SUBTREEARRAY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsNameTest(::MS::Internal::Xml::XPath::Axis* arg)
		{
			return (return (::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISNAMETEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAttribute(::MS::Internal::Xml::XPath::Axis* arg)
		{
			return (return (::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDescendantOrSelf(::MS::Internal::Xml::XPath::Axis* arg)
		{
			return (return (::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISDESCENDANTORSELF_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSelf(::MS::Internal::Xml::XPath::Axis* arg)
		{
			return (return (::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISSELF_OFFSET))(arg, nullptr);
		}

		::System::Void CompileXPath(::System::String* str, ::System::Boolean arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_COMPILEXPATH_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SetURN(::MS::Internal::Xml::XPath::Axis* arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Axis*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_SETURN_OFFSET))(arg, arg, nullptr);
		}

	};
}

