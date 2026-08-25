#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ROOTNODE_OFFSET UNITYSDK_OFFSET(0x9A06460)
#define SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_TOPNODE_OFFSET UNITYSDK_OFFSET(0x9A06470)
#define SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ISATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9A06480)
#define SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ISDSS_OFFSET UNITYSDK_OFFSET(0x9A06490)
#define SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ISSELFAXIS_OFFSET UNITYSDK_OFFSET(0x9A064A0)
#define SYSTEM_XML_SCHEMA_FORWARDAXIS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A064B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ForwardAxis_TypeDefinitionIndex = 27952;

	class ForwardAxis : public Il2CppObject
	{
	public:
		::System::Xml::Schema::DoubleLinkAxis* _topNode; // 0x10
		::System::Xml::Schema::DoubleLinkAxis* _rootNode; // 0x18
		::System::Boolean _isAttribute; // 0x20
		::System::Boolean _isDss; // 0x21
		::System::Boolean _isSelfAxis; // 0x22

		::System::Xml::Schema::DoubleLinkAxis* get_RootNode()
		{
			return (return (::System::Xml::Schema::DoubleLinkAxis*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ROOTNODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::DoubleLinkAxis* get_TopNode()
		{
			return (return (::System::Xml::Schema::DoubleLinkAxis*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_TOPNODE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ISATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDss()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ISDSS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelfAxis()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FORWARDAXIS_GET_ISSELFAXIS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::DoubleLinkAxis* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::DoubleLinkAxis*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FORWARDAXIS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

