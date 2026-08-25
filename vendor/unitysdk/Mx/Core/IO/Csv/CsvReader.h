#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::IO::Csv { class ValueTrimmingOptions; }
namespace MX::Core::IO::Csv { class ParseErrorAction; }
namespace MX::Core::IO::Csv { class MissingFieldAction; }
namespace MX::Core::IO::Csv { class ParseErrorEventArgs; }
namespace MX::Core::IO::Csv { class MalformedCsvException; }
class DataReaderValidations;
class RecordEnumerator;

#define MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1039500)
#define MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1039540)
#define MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1039580)
#define MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10395C0)
#define MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1039600)
#define MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1035AE0)
#define MX_CORE_IO_CSV_CSVREADER_ADD_PARSEERROR_OFFSET UNITYSDK_OFFSET(0x1039650)
#define MX_CORE_IO_CSV_CSVREADER_REMOVE_PARSEERROR_OFFSET UNITYSDK_OFFSET(0x10396F0)
#define MX_CORE_IO_CSV_CSVREADER_ONPARSEERROR_OFFSET UNITYSDK_OFFSET(0x1039790)
#define MX_CORE_IO_CSV_CSVREADER_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x10397C0)
#define MX_CORE_IO_CSV_CSVREADER_GET_ESCAPE_OFFSET UNITYSDK_OFFSET(0x10397D0)
#define MX_CORE_IO_CSV_CSVREADER_GET_DELIMITER_OFFSET UNITYSDK_OFFSET(0x10397E0)
#define MX_CORE_IO_CSV_CSVREADER_GET_QUOTE_OFFSET UNITYSDK_OFFSET(0x10397F0)
#define MX_CORE_IO_CSV_CSVREADER_GET_HASHEADERS_OFFSET UNITYSDK_OFFSET(0x1039800)
#define MX_CORE_IO_CSV_CSVREADER_GET_TRIMMINGOPTION_OFFSET UNITYSDK_OFFSET(0x1039810)
#define MX_CORE_IO_CSV_CSVREADER_GET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1039820)
#define MX_CORE_IO_CSV_CSVREADER_GET_DEFAULTPARSEERRORACTION_OFFSET UNITYSDK_OFFSET(0x1039830)
#define MX_CORE_IO_CSV_CSVREADER_SET_DEFAULTPARSEERRORACTION_OFFSET UNITYSDK_OFFSET(0x1039840)
#define MX_CORE_IO_CSV_CSVREADER_GET_MISSINGFIELDACTION_OFFSET UNITYSDK_OFFSET(0x1039850)
#define MX_CORE_IO_CSV_CSVREADER_SET_MISSINGFIELDACTION_OFFSET UNITYSDK_OFFSET(0x1039860)
#define MX_CORE_IO_CSV_CSVREADER_GET_SUPPORTSMULTILINE_OFFSET UNITYSDK_OFFSET(0x1039870)
#define MX_CORE_IO_CSV_CSVREADER_SET_SUPPORTSMULTILINE_OFFSET UNITYSDK_OFFSET(0x1039880)
#define MX_CORE_IO_CSV_CSVREADER_GET_SKIPEMPTYLINES_OFFSET UNITYSDK_OFFSET(0x1039890)
#define MX_CORE_IO_CSV_CSVREADER_SET_SKIPEMPTYLINES_OFFSET UNITYSDK_OFFSET(0x10398A0)
#define MX_CORE_IO_CSV_CSVREADER_GET_DEFAULTHEADERNAME_OFFSET UNITYSDK_OFFSET(0x10398B0)
#define MX_CORE_IO_CSV_CSVREADER_SET_DEFAULTHEADERNAME_OFFSET UNITYSDK_OFFSET(0x10398C0)
#define MX_CORE_IO_CSV_CSVREADER_GET_FIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1036020)
#define MX_CORE_IO_CSV_CSVREADER_GET_ENDOFSTREAM_OFFSET UNITYSDK_OFFSET(0x1039900)
#define MX_CORE_IO_CSV_CSVREADER_GETFIELDHEADERS_OFFSET UNITYSDK_OFFSET(0x1039910)
#define MX_CORE_IO_CSV_CSVREADER_GET_CURRENTRECORDINDEX_OFFSET UNITYSDK_OFFSET(0x1039A40)
#define MX_CORE_IO_CSV_CSVREADER_GET_MISSINGFIELDFLAG_OFFSET UNITYSDK_OFFSET(0x1039A50)
#define MX_CORE_IO_CSV_CSVREADER_GET_PARSEERRORFLAG_OFFSET UNITYSDK_OFFSET(0x1039A60)
#define MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1039A70)
#define MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1036F40)
#define MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1039B50)
#define MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1036000)
#define MX_CORE_IO_CSV_CSVREADER_ENSUREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x10398E0)
#define MX_CORE_IO_CSV_CSVREADER_GETFIELDINDEX_OFFSET UNITYSDK_OFFSET(0x1039D40)
#define MX_CORE_IO_CSV_CSVREADER_COPYCURRENTRECORDTO_OFFSET UNITYSDK_OFFSET(0x10368D0)
#define MX_CORE_IO_CSV_CSVREADER_COPYCURRENTRECORDTO_OFFSET UNITYSDK_OFFSET(0x103ACF0)
#define MX_CORE_IO_CSV_CSVREADER_GETCURRENTRAWDATA_OFFSET UNITYSDK_OFFSET(0x103AF70)
#define MX_CORE_IO_CSV_CSVREADER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x103AFE0)
#define MX_CORE_IO_CSV_CSVREADER_MOVETO_OFFSET UNITYSDK_OFFSET(0x1036970)
#define MX_CORE_IO_CSV_CSVREADER_PARSENEWLINE_OFFSET UNITYSDK_OFFSET(0x103B030)
#define MX_CORE_IO_CSV_CSVREADER_ISNEWLINE_OFFSET UNITYSDK_OFFSET(0x103B2F0)
#define MX_CORE_IO_CSV_CSVREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x103B270)
#define MX_CORE_IO_CSV_CSVREADER_READFIELD_OFFSET UNITYSDK_OFFSET(0x1039DE0)
#define MX_CORE_IO_CSV_CSVREADER_READNEXTRECORD_OFFSET UNITYSDK_OFFSET(0x10360A0)
#define MX_CORE_IO_CSV_CSVREADER_READNEXTRECORD_OFFSET UNITYSDK_OFFSET(0x1036370)
#define MX_CORE_IO_CSV_CSVREADER_SKIPEMPTYANDCOMMENTEDLINES_OFFSET UNITYSDK_OFFSET(0x103BC30)
#define MX_CORE_IO_CSV_CSVREADER_DOSKIPEMPTYANDCOMMENTEDLINES_OFFSET UNITYSDK_OFFSET(0x103BE60)
#define MX_CORE_IO_CSV_CSVREADER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x103B730)
#define MX_CORE_IO_CSV_CSVREADER_SKIPTONEXTLINE_OFFSET UNITYSDK_OFFSET(0x103BDB0)
#define MX_CORE_IO_CSV_CSVREADER_HANDLEPARSEERROR_OFFSET UNITYSDK_OFFSET(0x103B870)
#define MX_CORE_IO_CSV_CSVREADER_HANDLEMISSINGFIELD_OFFSET UNITYSDK_OFFSET(0x103B3D0)
#define MX_CORE_IO_CSV_CSVREADER_VALIDATEDATAREADER_OFFSET UNITYSDK_OFFSET(0x103BF70)
#define MX_CORE_IO_CSV_CSVREADER_COPYFIELDTOARRAY_OFFSET UNITYSDK_OFFSET(0x103C010)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GET_RECORDSAFFECTED_OFFSET UNITYSDK_OFFSET(0x103C3A0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x103C3B0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.NEXTRESULT_OFFSET UNITYSDK_OFFSET(0x103C3C0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.CLOSE_OFFSET UNITYSDK_OFFSET(0x103C430)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.READ_OFFSET UNITYSDK_OFFSET(0x103C510)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x103C590)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GETSCHEMATABLE_OFFSET UNITYSDK_OFFSET(0x103C600)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETINT32_OFFSET UNITYSDK_OFFSET(0x103DDB0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x103DE60)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x103DE90)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETVALUE_OFFSET UNITYSDK_OFFSET(0x103DED0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.ISDBNULL_OFFSET UNITYSDK_OFFSET(0x103DFC0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETBYTES_OFFSET UNITYSDK_OFFSET(0x103E000)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETBYTE_OFFSET UNITYSDK_OFFSET(0x103E060)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETFIELDTYPE_OFFSET UNITYSDK_OFFSET(0x103E0E0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDECIMAL_OFFSET UNITYSDK_OFFSET(0x103E260)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETVALUES_OFFSET UNITYSDK_OFFSET(0x103E310)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETNAME_OFFSET UNITYSDK_OFFSET(0x103E490)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETINT64_OFFSET UNITYSDK_OFFSET(0x103E6D0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x103E750)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x103E7D0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETGUID_OFFSET UNITYSDK_OFFSET(0x103E870)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDATETIME_OFFSET UNITYSDK_OFFSET(0x103E8D0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETORDINAL_OFFSET UNITYSDK_OFFSET(0x103E970)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDATATYPENAME_OFFSET UNITYSDK_OFFSET(0x103EB00)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETFLOAT_OFFSET UNITYSDK_OFFSET(0x103EB90)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDATA_OFFSET UNITYSDK_OFFSET(0x103EC10)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETCHARS_OFFSET UNITYSDK_OFFSET(0x103EC40)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETSTRING_OFFSET UNITYSDK_OFFSET(0x103ECA0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETCHAR_OFFSET UNITYSDK_OFFSET(0x103ECE0)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETINT16_OFFSET UNITYSDK_OFFSET(0x103ED60)
#define MX_CORE_IO_CSV_CSVREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1037800)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING[]_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x103EE70)
#define MX_CORE_IO_CSV_CSVREADER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x103EEE0)
#define MX_CORE_IO_CSV_CSVREADER_ADD_DISPOSED_OFFSET UNITYSDK_OFFSET(0x103EF50)
#define MX_CORE_IO_CSV_CSVREADER_REMOVE_DISPOSED_OFFSET UNITYSDK_OFFSET(0x103EFF0)
#define MX_CORE_IO_CSV_CSVREADER_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x103F090)
#define MX_CORE_IO_CSV_CSVREADER_ONDISPOSED_OFFSET UNITYSDK_OFFSET(0x103F0A0)
#define MX_CORE_IO_CSV_CSVREADER_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x103B340)
#define MX_CORE_IO_CSV_CSVREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103C4A0)
#define MX_CORE_IO_CSV_CSVREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103F0D0)
#define MX_CORE_IO_CSV_CSVREADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x103F2F0)
#define MX_CORE_IO_CSV_CSVREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x103F3C0)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int CsvReader_TypeDefinitionIndex = 12847;

	class CsvReader : public Il2CppObject
	{
	public:
		::System::Int32 DefaultBufferSize; // 0x0
		::System::Char DefaultDelimiter; // 0x0
		::System::Char DefaultQuote; // 0x0
		::System::Char DefaultEscape; // 0x0
		::System::Char DefaultComment; // 0x0
		::System::StringComparer* _fieldHeaderComparer; // 0x0
		::System::IO::TextReader* _reader; // 0x10
		::System::Int32 _bufferSize; // 0x18
		::System::Char _comment; // 0x1C
		::System::Char _escape; // 0x1E
		::System::Char _delimiter; // 0x20
		::System::Char _quote; // 0x22
		::MX::Core::IO::Csv::ValueTrimmingOptions* _trimmingOptions; // 0x24
		::System::Boolean _hasHeaders; // 0x28
		::MX::Core::IO::Csv::ParseErrorAction* _defaultParseErrorAction; // 0x2C
		::MX::Core::IO::Csv::MissingFieldAction* _missingFieldAction; // 0x30
		::System::Boolean _supportsMultiline; // 0x34
		::System::Boolean _skipEmptyLines; // 0x35
		::System::Boolean _initialized; // 0x36
		::Il2CppArray<::System::Object*>* _fieldHeaders; // 0x38
		Il2CppObject* _fieldHeaderIndexes; // 0x40
		::System::Int64 _currentRecordIndex; // 0x48
		::System::Int32 _nextFieldStart; // 0x50
		::System::Int32 _nextFieldIndex; // 0x54
		::Il2CppArray<::System::Object*>* _fields; // 0x58
		::System::Int32 _fieldCount; // 0x60
		::Il2CppArray<::System::Object*>* _buffer; // 0x68
		::System::Int32 _bufferLength; // 0x70
		::System::Boolean _eof; // 0x74
		::System::Boolean _eol; // 0x75
		::System::Boolean _firstRecordInCache; // 0x76
		::System::Boolean _missingFieldFlag; // 0x77
		::System::Boolean _parseErrorFlag; // 0x78
		Il2CppObject* ParseError; // 0x80
		::System::String* _DefaultHeaderName_k__BackingField; // 0x88
		::System::Boolean _isDisposed; // 0x90
		::System::Object* _lock; // 0x98
		::System::EventHandler* Disposed; // 0xA0

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3, ::System::Char arg4, ::System::Char arg5, ::System::Char arg6, ::MX::Core::IO::Csv::ValueTrimmingOptions* arg7)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::System::Char, ::System::Char, ::System::Char, ::MX::Core::IO::Csv::ValueTrimmingOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3, ::System::Char arg4, ::System::Char arg5, ::System::Char arg6, ::MX::Core::IO::Csv::ValueTrimmingOptions* arg7, ::System::Int32 arg8)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::System::Char, ::System::Char, ::System::Char, ::MX::Core::IO::Csv::ValueTrimmingOptions*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void add_ParseError(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_ADD_PARSEERROR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ParseError(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_REMOVE_PARSEERROR_OFFSET))(arg, nullptr);
		}

		::System::Void OnParseError(::MX::Core::IO::Csv::ParseErrorEventArgs* arg)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::ParseErrorEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_ONPARSEERROR_OFFSET))(arg, nullptr);
		}

		::System::Char get_Comment()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Char get_Escape()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_ESCAPE_OFFSET))(nullptr);
		}

		::System::Char get_Delimiter()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_DELIMITER_OFFSET))(nullptr);
		}

		::System::Char get_Quote()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_QUOTE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasHeaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_HASHEADERS_OFFSET))(nullptr);
		}

		::MX::Core::IO::Csv::ValueTrimmingOptions* get_TrimmingOption()
		{
			return ((::MX::Core::IO::Csv::ValueTrimmingOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_TRIMMINGOPTION_OFFSET))(nullptr);
		}

		::System::Int32 get_BufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_BUFFERSIZE_OFFSET))(nullptr);
		}

		::MX::Core::IO::Csv::ParseErrorAction* get_DefaultParseErrorAction()
		{
			return ((::MX::Core::IO::Csv::ParseErrorAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_DEFAULTPARSEERRORACTION_OFFSET))(nullptr);
		}

		::System::Void set_DefaultParseErrorAction(::MX::Core::IO::Csv::ParseErrorAction* arg)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::ParseErrorAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SET_DEFAULTPARSEERRORACTION_OFFSET))(arg, nullptr);
		}

		::MX::Core::IO::Csv::MissingFieldAction* get_MissingFieldAction()
		{
			return ((::MX::Core::IO::Csv::MissingFieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_MISSINGFIELDACTION_OFFSET))(nullptr);
		}

		::System::Void set_MissingFieldAction(::MX::Core::IO::Csv::MissingFieldAction* arg)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::MissingFieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SET_MISSINGFIELDACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SupportsMultiline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_SUPPORTSMULTILINE_OFFSET))(nullptr);
		}

		::System::Void set_SupportsMultiline(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SET_SUPPORTSMULTILINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SkipEmptyLines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_SKIPEMPTYLINES_OFFSET))(nullptr);
		}

		::System::Void set_SkipEmptyLines(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SET_SKIPEMPTYLINES_OFFSET))(arg, nullptr);
		}

		::System::String* get_DefaultHeaderName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_DEFAULTHEADERNAME_OFFSET))(nullptr);
		}

		::System::Void set_DefaultHeaderName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SET_DEFAULTHEADERNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_FieldCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_FIELDCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_EndOfStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_ENDOFSTREAM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFieldHeaders()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GETFIELDHEADERS_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentRecordIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_CURRENTRECORDINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_MissingFieldFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_MISSINGFIELDFLAG_OFFSET))(nullptr);
		}

		::System::Boolean get_ParseErrorFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_PARSEERRORFLAG_OFFSET))(nullptr);
		}

		::System::String* get_Item(::System::Int32 arg, ::System::String* str)
		{
			return ((::System::String*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_Item(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_Item(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::String* get_Item(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_ENSUREINITIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetFieldIndex(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GETFIELDINDEX_OFFSET))(str, nullptr);
		}

		::System::Void CopyCurrentRecordTo(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_COPYCURRENTRECORDTO_OFFSET))(arg, nullptr);
		}

		::System::Void CopyCurrentRecordTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_COPYCURRENTRECORDTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetCurrentRawData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GETCURRENTRAWDATA_OFFSET))(nullptr);
		}

		::System::Boolean IsWhiteSpace(::System::Char arg)
		{
			return ((::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_ISWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveTo(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_MOVETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseNewLine(int32_t&* arg)
		{
			return ((::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_PARSENEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNewLine(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_ISNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReadBuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_READBUFFER_OFFSET))(nullptr);
		}

		::System::String* ReadField(::System::Int32 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_READFIELD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ReadNextRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_READNEXTRECORD_OFFSET))(nullptr);
		}

		::System::Boolean ReadNextRecord(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_READNEXTRECORD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SkipEmptyAndCommentedLines(int32_t&* arg)
		{
			return ((::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SKIPEMPTYANDCOMMENTEDLINES_OFFSET))(arg, nullptr);
		}

		::System::Void DoSkipEmptyAndCommentedLines(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_DOSKIPEMPTYANDCOMMENTEDLINES_OFFSET))(arg, nullptr);
		}

		::System::Boolean SkipWhiteSpaces(int32_t&* arg)
		{
			return ((::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SKIPWHITESPACES_OFFSET))(arg, nullptr);
		}

		::System::Boolean SkipToNextLine(int32_t&* arg)
		{
			return ((::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SKIPTONEXTLINE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleParseError(::MX::Core::IO::Csv::MalformedCsvException* arg, int32_t&* arg2)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::MalformedCsvException*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_HANDLEPARSEERROR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* HandleMissingField(::System::String* str, ::System::Int32 arg, int32_t&* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_HANDLEMISSINGFIELD_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void ValidateDataReader(DataReaderValidations* arg)
		{
			((::System::Void(*)(DataReaderValidations*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_VALIDATEDATAREADER_OFFSET))(arg, nullptr);
		}

		::System::Int64 CopyFieldToArray(::System::Int32 arg, ::System::Int64 arg2, ::System::Array* arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int64, ::System::Array*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_COPYFIELDTOARRAY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int32 System.Data.IDataReader.get_RecordsAffected()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GET_RECORDSAFFECTED_OFFSET))(nullptr);
		}

		::System::Boolean System.Data.IDataReader.get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GET_ISCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean System.Data.IDataReader.NextResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.NEXTRESULT_OFFSET))(nullptr);
		}

		::System::Void System.Data.IDataReader.Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean System.Data.IDataReader.Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.READ_OFFSET))(nullptr);
		}

		::System::Int32 System.Data.IDataReader.get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Data::DataTable* System.Data.IDataReader.GetSchemaTable()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATAREADER.GETSCHEMATABLE_OFFSET))(nullptr);
		}

		::System::Int32 System.Data.IDataRecord.GetInt32(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETINT32_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Data.IDataRecord.get_Item(::System::String* str)
		{
			return ((::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Object* System.Data.IDataRecord.get_Item(::System::Int32 arg)
		{
			return ((::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Data.IDataRecord.GetValue(::System::Int32 arg)
		{
			return ((::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Data.IDataRecord.IsDBNull(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.ISDBNULL_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.Data.IDataRecord.GetBytes(::System::Int32 arg, ::System::Int64 arg2, ::Il2CppArray<::System::Object*>* arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETBYTES_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Byte System.Data.IDataRecord.GetByte(::System::Int32 arg)
		{
			return ((::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETBYTE_OFFSET))(arg, nullptr);
		}

		::System::Type* System.Data.IDataRecord.GetFieldType(::System::Int32 arg)
		{
			return ((::System::Type*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETFIELDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.Data.IDataRecord.GetDecimal(::System::Int32 arg)
		{
			return ((::System::Decimal*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Data.IDataRecord.GetValues(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETVALUES_OFFSET))(arg, nullptr);
		}

		::System::String* System.Data.IDataRecord.GetName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.Data.IDataRecord.GetInt64(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETINT64_OFFSET))(arg, nullptr);
		}

		::System::Double System.Data.IDataRecord.GetDouble(::System::Int32 arg)
		{
			return ((::System::Double(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Data.IDataRecord.GetBoolean(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Guid* System.Data.IDataRecord.GetGuid(::System::Int32 arg)
		{
			return ((::System::Guid*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETGUID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.Data.IDataRecord.GetDateTime(::System::Int32 arg)
		{
			return ((::System::DateTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Data.IDataRecord.GetOrdinal(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETORDINAL_OFFSET))(str, nullptr);
		}

		::System::String* System.Data.IDataRecord.GetDataTypeName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDATATYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Single System.Data.IDataRecord.GetFloat(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Data::IDataReader* System.Data.IDataRecord.GetData(::System::Int32 arg)
		{
			return ((::System::Data::IDataReader*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.Data.IDataRecord.GetChars(::System::Int32 arg, ::System::Int64 arg2, ::Il2CppArray<::System::Object*>* arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETCHARS_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::String* System.Data.IDataRecord.GetString(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETSTRING_OFFSET))(arg, nullptr);
		}

		::System::Char System.Data.IDataRecord.GetChar(::System::Int32 arg)
		{
			return ((::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.Data.IDataRecord.GetInt16(::System::Int32 arg)
		{
			return ((::System::Int16(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.DATA.IDATARECORD.GETINT16_OFFSET))(arg, nullptr);
		}

		RecordEnumerator* GetEnumerator()
		{
			return ((RecordEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.String[]_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING[]_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void add_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_ADD_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_REMOVE_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_GET_ISDISPOSED_OFFSET))(nullptr);
		}

		::System::Void OnDisposed(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_ONDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void CheckDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_CHECKDISPOSED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVREADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

