#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x985CD90)
#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x985CDE0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObjectChangeEventArgs_TypeDefinitionIndex = 37314;

	class XObjectChangeEventArgs : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XObjectChange* _objectChange; // 0x10
		::System::Xml::Linq::XObjectChangeEventArgs* Add; // 0x0
		::System::Xml::Linq::XObjectChangeEventArgs* Remove; // 0x8
		::System::Xml::Linq::XObjectChangeEventArgs* Name; // 0x10
		::System::Xml::Linq::XObjectChangeEventArgs* Value; // 0x18

		::System::Void .ctor(::System::Xml::Linq::XObjectChange* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XObjectChange*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

