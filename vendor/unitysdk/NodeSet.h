#pragma once
#include "unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }

#define NODESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9943380)
#define NODESET_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9943450)
#define NODESET_RESET_OFFSET UNITYSDK_OFFSET(0x99434D0)
#define NODESET_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x99434A0)

	inline static constexpr unsigned int NodeSet_TypeDefinitionIndex = 28281;

	class NodeSet : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* _opnd; // 0x10
		::System::Xml::XPath::XPathNavigator* _current; // 0x18

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NODESET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODESET_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODESET_RESET_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODESET_GET_VALUE_OFFSET))(nullptr);
		}

	};

