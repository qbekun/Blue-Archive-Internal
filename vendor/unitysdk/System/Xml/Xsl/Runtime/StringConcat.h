#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A04E50)
#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9A04E70)
#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9A04E80)
#define SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CONCATNODELIMITER_OFFSET UNITYSDK_OFFSET(0x9A04F70)

namespace System::Xml::Xsl::Runtime
{
	inline static constexpr unsigned int StringConcat_TypeDefinitionIndex = 27947;

	class StringConcat : public Il2CppObject
	{
	public:
		::System::String* s1; // 0x10
		::System::String* s2; // 0x18
		::System::String* s3; // 0x20
		::System::String* s4; // 0x28
		::System::String* delimiter; // 0x30
		Il2CppObject* strList; // 0x38
		::System::Int32 idxStr; // 0x40

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GET_COUNT_OFFSET))(nullptr);
		}

		::System::String* GetResult()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void ConcatNoDelimiter(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_RUNTIME_STRINGCONCAT_CONCATNODELIMITER_OFFSET))(str, nullptr);
		}

	};
}

