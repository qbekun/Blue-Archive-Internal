#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_LINEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x99AC480)
#define SYSTEM_XML_LINEINFO_SET_OFFSET UNITYSDK_OFFSET(0x99AC490)

namespace System::Xml
{
	inline static constexpr unsigned int LineInfo_TypeDefinitionIndex = 27794;

	class LineInfo : public Il2CppObject
	{
	public:
		::System::Int32 lineNo; // 0x10
		::System::Int32 linePos; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINEINFO_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

