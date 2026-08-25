#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1D40)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_GET_LINE_OFFSET UNITYSDK_OFFSET(0x4C1D90)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x4C1DA0)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_CONSUME_OFFSET UNITYSDK_OFFSET(0x4C1DB0)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_LA_OFFSET UNITYSDK_OFFSET(0x4C1E00)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_INDEX_OFFSET UNITYSDK_OFFSET(0x4C1E80)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_SIZE_OFFSET UNITYSDK_OFFSET(0x4C1E90)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_MARK_OFFSET UNITYSDK_OFFSET(0x4C1EA0)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_REWIND_OFFSET UNITYSDK_OFFSET(0x4C21B0)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_RELEASE_OFFSET UNITYSDK_OFFSET(0x4C22E0)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x4C22F0)
#define ANTLR_RUNTIME_ANTLRSTRINGSTREAM_SUBSTRING_OFFSET UNITYSDK_OFFSET(0x4C2330)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int ANTLRStringStream_TypeDefinitionIndex = 37375;

	class ANTLRStringStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* data; // 0x10
		::System::Int32 n; // 0x18
		::System::Int32 p; // 0x1C
		::System::Int32 line; // 0x20
		::System::Int32 charPositionInLine; // 0x24
		::System::Int32 markDepth; // 0x28
		::System::Collections::IList* markers; // 0x30
		::System::Int32 lastMarker; // 0x38

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_GET_LINE_OFFSET))(nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::System::Void Consume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_CONSUME_OFFSET))(nullptr);
		}

		::System::Int32 LA(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_LA_OFFSET))(arg, nullptr);
		}

		::System::Int32 Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_INDEX_OFFSET))(nullptr);
		}

		::System::Int32 Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_SIZE_OFFSET))(nullptr);
		}

		::System::Int32 Mark()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_MARK_OFFSET))(nullptr);
		}

		::System::Void Rewind(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_REWIND_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Seek(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_SEEK_OFFSET))(arg, nullptr);
		}

		::System::String* Substring(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ANTLRSTRINGSTREAM_SUBSTRING_OFFSET))(arg, arg, nullptr);
		}

	};
}

