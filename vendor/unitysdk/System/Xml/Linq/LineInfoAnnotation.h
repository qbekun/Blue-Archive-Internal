#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_LINEINFOANNOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9851FB0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int LineInfoAnnotation_TypeDefinitionIndex = 37285;

	class LineInfoAnnotation : public Il2CppObject
	{
	public:
		::System::Int32 lineNumber; // 0x10
		::System::Int32 linePosition; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_LINEINFOANNOTATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

