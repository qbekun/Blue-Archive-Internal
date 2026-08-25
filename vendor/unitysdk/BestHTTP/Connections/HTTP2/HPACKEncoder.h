#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsManager; }
namespace BestHTTP::Connections::HTTP2 { class HeaderTable; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Handler; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Stream; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CC30)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x90CD10)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x90D640)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READINDEXEDHEADER_OFFSET UNITYSDK_OFFSET(0x90EC80)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHINCREMENTALINDEXING_INDEXEDNAME_OFFSET UNITYSDK_OFFSET(0x90ED70)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHINCREMENTALINDEXING_NEWNAME_OFFSET UNITYSDK_OFFSET(0x90ED00)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHOUTINDEXING_INDEXEDNAME_OFFSET UNITYSDK_OFFSET(0x90EEB0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHOUTINDEXING_NEWNAME_OFFSET UNITYSDK_OFFSET(0x90EE40)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDNEVERINDEXED_INDEXEDNAME_OFFSET UNITYSDK_OFFSET(0x90EFF0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDNEVERINDEXED_NEWNAME_OFFSET UNITYSDK_OFFSET(0x90EF80)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x90F140)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_CREATEHEADERFRAMES_OFFSET UNITYSDK_OFFSET(0x90D360)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x90D230)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITEINDEXEDHEADERFIELD_OFFSET UNITYSDK_OFFSET(0x90FAC0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHINCREMENTALINDEXING_INDEXEDNAME_OFFSET UNITYSDK_OFFSET(0x90F9A0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHINCREMENTALINDEXING_NEWNAME_OFFSET UNITYSDK_OFFSET(0x90F8B0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHOUTINDEXING_INDEXEDNAME_OFFSET UNITYSDK_OFFSET(0x90FEA0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHOUTINDEXING_NEWNAME_OFFSET UNITYSDK_OFFSET(0x90FFC0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDNEVERINDEXED_INDEXEDNAME_OFFSET UNITYSDK_OFFSET(0x9100B0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDNEVERINDEXED_NEWNAME_OFFSET UNITYSDK_OFFSET(0x9101D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITEDYNAMICTABLESIZEUPDATE_OFFSET UNITYSDK_OFFSET(0x9102C0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODESTRING_OFFSET UNITYSDK_OFFSET(0x90FCD0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x90FDC0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODESTRINGWITHHUFFMAN_OFFSET UNITYSDK_OFFSET(0x910450)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODESTRINGWITHHUFFMAN_OFFSET UNITYSDK_OFFSET(0x910880)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ADDCODEPOINTTOBUFFER_OFFSET UNITYSDK_OFFSET(0x910C20)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODERAWSTRING_OFFSET UNITYSDK_OFFSET(0x9103F0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODERAWSTRINGTO_OFFSET UNITYSDK_OFFSET(0x910640)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODEINTEGER_OFFSET UNITYSDK_OFFSET(0x90FBE0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODEINTEGER_OFFSET UNITYSDK_OFFSET(0x90FC20)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODEINTEGER_OFFSET UNITYSDK_OFFSET(0x910DE0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODEINTEGER_OFFSET UNITYSDK_OFFSET(0x90F0C0)
#define BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x910E80)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HPACKEncoder_TypeDefinitionIndex = 23437;

	class HPACKEncoder : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2SettingsManager* settingsRegistry; // 0x10
		::BestHTTP::Connections::HTTP2::HeaderTable* requestTable; // 0x18
		::BestHTTP::Connections::HTTP2::HeaderTable* responseTable; // 0x20
		::BestHTTP::Connections::HTTP2::HTTP2Handler* parent; // 0x28

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2Handler* arg, ::BestHTTP::Connections::HTTP2::HTTP2SettingsManager* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2Handler*, ::BestHTTP::Connections::HTTP2::HTTP2SettingsManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Encode(::BestHTTP::Connections::HTTP2::HTTP2Stream* arg, ::BestHTTP::HTTPRequest* arg, Il2CppObject* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2Stream*, ::BestHTTP::HTTPRequest*, Il2CppObject*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Decode(::BestHTTP::Connections::HTTP2::HTTP2Stream* arg, ::System::IO::Stream* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2Stream*, ::System::IO::Stream*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadIndexedHeader(::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (Il2CppObject*(*)(::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READINDEXEDHEADER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadLiteralHeaderFieldWithIncrementalIndexing_IndexedName(::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (Il2CppObject*(*)(::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHINCREMENTALINDEXING_INDEXEDNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadLiteralHeaderFieldWithIncrementalIndexing_NewName(::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (Il2CppObject*(*)(::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHINCREMENTALINDEXING_NEWNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadLiteralHeaderFieldwithoutIndexing_IndexedName(::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (Il2CppObject*(*)(::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHOUTINDEXING_INDEXEDNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadLiteralHeaderFieldwithoutIndexing_NewName(::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (Il2CppObject*(*)(::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDWITHOUTINDEXING_NEWNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadLiteralHeaderFieldNeverIndexed_IndexedName(::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (Il2CppObject*(*)(::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDNEVERINDEXED_INDEXEDNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadLiteralHeaderFieldNeverIndexed_NewName(::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (Il2CppObject*(*)(::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_READLITERALHEADERFIELDNEVERINDEXED_NEWNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::String* DecodeString(::System::IO::Stream* arg)
		{
			return (return (::System::String*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODESTRING_OFFSET))(arg, nullptr);
		}

		::System::Void CreateHeaderFrames(Il2CppObject* arg, ::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_CREATEHEADERFRAMES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteHeader(::System::IO::Stream* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITEHEADER_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void WriteIndexedHeaderField(::System::IO::Stream* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITEINDEXEDHEADERFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteLiteralHeaderFieldWithIncrementalIndexing_IndexedName(::System::IO::Stream* arg, ::System::UInt32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHINCREMENTALINDEXING_INDEXEDNAME_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void WriteLiteralHeaderFieldWithIncrementalIndexing_NewName(::System::IO::Stream* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHINCREMENTALINDEXING_NEWNAME_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void WriteLiteralHeaderFieldWithoutIndexing_IndexedName(::System::IO::Stream* arg, ::System::UInt32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHOUTINDEXING_INDEXEDNAME_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void WriteLiteralHeaderFieldWithoutIndexing_NewName(::System::IO::Stream* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDWITHOUTINDEXING_NEWNAME_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void WriteLiteralHeaderFieldNeverIndexed_IndexedName(::System::IO::Stream* arg, ::System::UInt32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDNEVERINDEXED_INDEXEDNAME_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void WriteLiteralHeaderFieldNeverIndexed_NewName(::System::IO::Stream* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITELITERALHEADERFIELDNEVERINDEXED_NEWNAME_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void WriteDynamicTableSizeUpdate(::System::IO::Stream* arg, ::System::UInt16 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_WRITEDYNAMICTABLESIZEUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 RequiredBytesToEncodeString(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODESTRING_OFFSET))(str, nullptr);
		}

		::System::Void EncodeString(::System::String* str, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODESTRING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::UInt32 RequiredBytesToEncodeStringWithHuffman(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODESTRINGWITHHUFFMAN_OFFSET))(str, nullptr);
		}

		::System::Void EncodeStringWithHuffman(::System::String* str, ::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::UInt32, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODESTRINGWITHHUFFMAN_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void AddCodePointToBuffer(TableEntry* arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg, uint8_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(TableEntry*, ::Il2CppArray<::System::Object*>*, uint32_t&*, uint8_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ADDCODEPOINTTOBUFFER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 RequiredBytesToEncodeRawString(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODERAWSTRING_OFFSET))(str, nullptr);
		}

		::System::Void EncodeRawStringTo(::System::String* str, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODERAWSTRINGTO_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Byte RequiredBytesToEncodeInteger(::System::UInt32 arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_REQUIREDBYTESTOENCODEINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EncodeInteger(::System::UInt32 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Byte, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_ENCODEINTEGER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 DecodeInteger(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODEINTEGER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 DecodeInteger(::System::Byte arg, ::System::Byte arg, ::System::IO::Stream* arg)
		{
			return (return (::System::UInt32(*)(::System::Byte, ::System::Byte, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_DECODEINTEGER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HPACKENCODER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

