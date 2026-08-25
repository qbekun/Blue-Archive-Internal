#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E12F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x98E1B70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x98E1C10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x98E1660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x98E1CB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x98E1590)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENTNODE_OFFSET UNITYSDK_OFFSET(0x98E1CC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCollectionEnumerator_TypeDefinitionIndex = 28135;

	class XmlSchemaCollectionEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::IDictionaryEnumerator* enumerator; // 0x10

		::System::Void .ctor(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* get_Current()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaCollectionNode* get_CurrentNode()
		{
			return (return (::System::Xml::Schema::XmlSchemaCollectionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONENUMERATOR_GET_CURRENTNODE_OFFSET))(nullptr);
		}

	};
}

