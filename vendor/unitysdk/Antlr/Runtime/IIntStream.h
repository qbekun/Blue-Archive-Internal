#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_IINTSTREAM_CONSUME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_IINTSTREAM_LA_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_IINTSTREAM_MARK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_IINTSTREAM_INDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_IINTSTREAM_REWIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_IINTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_IINTSTREAM_SIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int IIntStream_TypeDefinitionIndex = 37384;

	class IIntStream : public Il2CppObject
	{
	public:
		::System::Void Consume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_IINTSTREAM_CONSUME_OFFSET))(nullptr);
		}

		::System::Int32 LA(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_IINTSTREAM_LA_OFFSET))(arg, nullptr);
		}

		::System::Int32 Mark()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_IINTSTREAM_MARK_OFFSET))(nullptr);
		}

		::System::Int32 Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_IINTSTREAM_INDEX_OFFSET))(nullptr);
		}

		::System::Void Rewind(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_IINTSTREAM_REWIND_OFFSET))(arg, nullptr);
		}

		::System::Void Seek(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_IINTSTREAM_SEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_IINTSTREAM_SIZE_OFFSET))(nullptr);
		}

	};
}

