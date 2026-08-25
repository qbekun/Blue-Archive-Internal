#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x9652BD0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET UNITYSDK_OFFSET(0x9652C00)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x9652C30)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x9652C40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DebugInfoExpression_TypeDefinitionIndex = 33031;

	class DebugInfoExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::SymbolDocumentInfo* _Document_k__BackingField; // 0x10

		::System::Int32 get_StartLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET))(nullptr);
		}

		::System::Int32 get_EndLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::SymbolDocumentInfo* get_Document()
		{
			return (return (::System::Linq::Expressions::SymbolDocumentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET))(nullptr);
		}

	};
}

