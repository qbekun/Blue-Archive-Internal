#pragma once
#include "unitysdk.h"

#define PARSINGSTATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x996A850)
#define PARSINGSTATE_CLOSE_OFFSET UNITYSDK_OFFSET(0x996A940)
#define PARSINGSTATE_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x996A980)
#define PARSINGSTATE_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x996A990)

	inline static constexpr unsigned int ParsingState_TypeDefinitionIndex = 27692;

	class ParsingState : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* chars; // 0x10
		::System::Int32 charPos; // 0x18
		::System::Int32 charsUsed; // 0x1C
		::System::Text::Encoding* encoding; // 0x20
		::System::Boolean appendMode; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Text::Decoder* decoder; // 0x38
		::Il2CppArray<::System::Object*>* bytes; // 0x40
		::System::Int32 bytePos; // 0x48
		::System::Int32 bytesUsed; // 0x4C
		::System::IO::TextReader* textReader; // 0x50
		::System::Int32 lineNo; // 0x58
		::System::Int32 lineStartPos; // 0x5C
		::System::String* baseUriStr; // 0x60
		::System::Uri* baseUri; // 0x68
		::System::Boolean isEof; // 0x70
		::System::Boolean isStreamEof; // 0x71
		::System::Xml::IDtdEntityInfo* entity; // 0x78
		::System::Int32 entityId; // 0x80
		::System::Boolean eolNormalized; // 0x84
		::System::Boolean entityResolvedManually; // 0x85

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSINGSTATE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARSINGSTATE_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LineNo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSINGSTATE_GET_LINENO_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePos()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSINGSTATE_GET_LINEPOS_OFFSET))(nullptr);
		}

	};

