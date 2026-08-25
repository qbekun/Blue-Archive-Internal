#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class ITokenSource; }
namespace Antlr::Runtime::Collections { class HashList; }
namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_COMMONTOKENSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CE120)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CE1A0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_LT_OFFSET UNITYSDK_OFFSET(0x4CE240)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4CE4F0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_CONSUME_OFFSET UNITYSDK_OFFSET(0x4CE7D0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_LA_OFFSET UNITYSDK_OFFSET(0x4CE8A0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_MARK_OFFSET UNITYSDK_OFFSET(0x4CE960)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_INDEX_OFFSET UNITYSDK_OFFSET(0x4CE9A0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_REWIND_OFFSET UNITYSDK_OFFSET(0x4CE9B0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x4CE9D0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_SIZE_OFFSET UNITYSDK_OFFSET(0x4CE9E0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_FILLBUFFER_OFFSET UNITYSDK_OFFSET(0x4CEA80)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_SKIPOFFTOKENCHANNELS_OFFSET UNITYSDK_OFFSET(0x4CEFE0)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_SKIPOFFTOKENCHANNELSREVERSE_OFFSET UNITYSDK_OFFSET(0x4CF200)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_LB_OFFSET UNITYSDK_OFFSET(0x4CF390)
#define ANTLR_RUNTIME_COMMONTOKENSTREAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4CF4F0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int CommonTokenStream_TypeDefinitionIndex = 37413;

	class CommonTokenStream : public Il2CppObject
	{
	public:
		::Antlr::Runtime::ITokenSource* tokenSource; // 0x10
		::System::Collections::IList* tokens; // 0x18
		::System::Collections::IDictionary* channelOverrideMap; // 0x20
		::Antlr::Runtime::Collections::HashList* discardSet; // 0x28
		::System::Int32 channel; // 0x30
		::System::Boolean discardOffChannelTokens; // 0x34
		::System::Int32 lastMarker; // 0x38
		::System::Int32 p; // 0x3C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::ITokenSource* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ITokenSource*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::Antlr::Runtime::IToken* LT(::System::Int32 arg)
		{
			return (return (::Antlr::Runtime::IToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_LT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Consume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_CONSUME_OFFSET))(nullptr);
		}

		::System::Int32 LA(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_LA_OFFSET))(arg, nullptr);
		}

		::System::Int32 Mark()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_MARK_OFFSET))(nullptr);
		}

		::System::Int32 Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_INDEX_OFFSET))(nullptr);
		}

		::System::Void Rewind(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_REWIND_OFFSET))(arg, nullptr);
		}

		::System::Void Seek(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_SEEK_OFFSET))(arg, nullptr);
		}

		::System::Int32 Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_SIZE_OFFSET))(nullptr);
		}

		::System::Void FillBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_FILLBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 SkipOffTokenChannels(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_SKIPOFFTOKENCHANNELS_OFFSET))(arg, nullptr);
		}

		::System::Int32 SkipOffTokenChannelsReverse(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_SKIPOFFTOKENCHANNELSREVERSE_OFFSET))(arg, nullptr);
		}

		::Antlr::Runtime::IToken* LB(::System::Int32 arg)
		{
			return (return (::Antlr::Runtime::IToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_LB_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKENSTREAM_TOSTRING_OFFSET))(nullptr);
		}

	};
}

