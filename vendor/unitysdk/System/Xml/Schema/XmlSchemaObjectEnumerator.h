#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E7430)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x98E7460)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x98E7500)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x98E75F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x98E7690)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x98E7730)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectEnumerator_TypeDefinitionIndex = 28181;

	class XmlSchemaObjectEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* enumerator; // 0x10

		::System::Void .ctor(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Current()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

