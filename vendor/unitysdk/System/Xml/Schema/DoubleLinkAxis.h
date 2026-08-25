#pragma once
#include "../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Axis; }

#define SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x9A06280)
#define SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x9A06290)
#define SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A062A0)
#define SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_CONVERTTREE_OFFSET UNITYSDK_OFFSET(0x9A06340)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DoubleLinkAxis_TypeDefinitionIndex = 27951;

	class DoubleLinkAxis : public ::UnityEngine::Gyroscope
	{
	public:
		::MS::Internal::Xml::XPath::Axis* next; // 0x40

		::MS::Internal::Xml::XPath::Axis* get_Next()
		{
			return (return (::MS::Internal::Xml::XPath::Axis*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_GET_NEXT_OFFSET))(nullptr);
		}

		::System::Void set_Next(::MS::Internal::Xml::XPath::Axis* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_SET_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::Axis* arg, ::System::Xml::Schema::DoubleLinkAxis* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Axis*, ::System::Xml::Schema::DoubleLinkAxis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::DoubleLinkAxis* ConvertTree(::MS::Internal::Xml::XPath::Axis* arg)
		{
			return (return (::System::Xml::Schema::DoubleLinkAxis*(*)(::MS::Internal::Xml::XPath::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_CONVERTTREE_OFFSET))(arg, nullptr);
		}

	};
}

