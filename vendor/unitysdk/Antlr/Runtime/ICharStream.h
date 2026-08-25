#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_ICHARSTREAM_GET_LINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ICHARSTREAM_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ICHARSTREAM_SUBSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int ICharStream_TypeDefinitionIndex = 37377;

	class ICharStream : public Il2CppObject
	{
	public:
		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ICHARSTREAM_GET_LINE_OFFSET))(nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ICHARSTREAM_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::System::String* Substring(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ICHARSTREAM_SUBSTRING_OFFSET))(arg, arg, nullptr);
		}

	};
}

