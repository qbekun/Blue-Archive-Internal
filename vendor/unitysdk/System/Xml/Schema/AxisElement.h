#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_AXISELEMENT_GET_CURNODE_OFFSET UNITYSDK_OFFSET(0x9A05290)
#define SYSTEM_XML_SCHEMA_AXISELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A052A0)
#define SYSTEM_XML_SCHEMA_AXISELEMENT_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x9A052E0)
#define SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOPARENT_OFFSET UNITYSDK_OFFSET(0x9A052F0)
#define SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOCHILD_OFFSET UNITYSDK_OFFSET(0x9A05400)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AxisElement_TypeDefinitionIndex = 27948;

	class AxisElement : public Il2CppObject
	{
	public:
		::System::Xml::Schema::DoubleLinkAxis* curNode; // 0x10
		::System::Int32 rootDepth; // 0x18
		::System::Int32 curDepth; // 0x1C
		::System::Boolean isMatch; // 0x20

		::System::Xml::Schema::DoubleLinkAxis* get_CurNode()
		{
			return (return (::System::Xml::Schema::DoubleLinkAxis*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_GET_CURNODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::DoubleLinkAxis* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::DoubleLinkAxis*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_SETDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToParent(::System::Int32 arg, ::System::Xml::Schema::ForwardAxis* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Xml::Schema::ForwardAxis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOPARENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveToChild(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Xml::Schema::ForwardAxis* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Xml::Schema::ForwardAxis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOCHILD_OFFSET))(str, str, arg, arg, nullptr);
		}

	};
}

