#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class StringBuffer; }
namespace Newtonsoft::Json::Utilities { class StringReference; }
namespace Newtonsoft::Json { class JsonNameTable; }
namespace Newtonsoft::Json { class ReadType; }
namespace Newtonsoft::Json { class JsonToken; }
namespace Newtonsoft::Json { class JsonReaderException; }

#define NEWTONSOFT_JSON_JSONTEXTREADER_READASYNC_OFFSET UNITYSDK_OFFSET(0x945D360)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASYNC_OFFSET UNITYSDK_OFFSET(0x945D370)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASYNC_OFFSET UNITYSDK_OFFSET(0x945D980)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x945D850)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READFROMFINISHEDASYNC_OFFSET UNITYSDK_OFFSET(0x945DAB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATAASYNC_OFFSET UNITYSDK_OFFSET(0x945DBD0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATAASYNC_OFFSET UNITYSDK_OFFSET(0x945DBF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x945D600)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x945DD20)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURNASYNC_OFFSET UNITYSDK_OFFSET(0x945DE40)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURNASYNC_OFFSET UNITYSDK_OFFSET(0x945E130)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODEASYNC_OFFSET UNITYSDK_OFFSET(0x945E220)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARSASYNC_OFFSET UNITYSDK_OFFSET(0x945E010)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READCHARSASYNC_OFFSET UNITYSDK_OFFSET(0x945E330)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x945D730)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENTASYNC_OFFSET UNITYSDK_OFFSET(0x945E460)
#define NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACEASYNC_OFFSET UNITYSDK_OFFSET(0x945E580)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x945E670)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x945E780)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATORASYNC_OFFSET UNITYSDK_OFFSET(0x945E8B0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHANDSETASYNC_OFFSET UNITYSDK_OFFSET(0x945E9E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUEASYNC_OFFSET UNITYSDK_OFFSET(0x945EB30)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSEASYNC_OFFSET UNITYSDK_OFFSET(0x945EBD0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULLASYNC_OFFSET UNITYSDK_OFFSET(0x945EC70)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTORASYNC_OFFSET UNITYSDK_OFFSET(0x945ECE0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNANASYNC_OFFSET UNITYSDK_OFFSET(0x945EDF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITYASYNC_OFFSET UNITYSDK_OFFSET(0x945EF10)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITYASYNC_OFFSET UNITYSDK_OFFSET(0x945F030)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERASYNC_OFFSET UNITYSDK_OFFSET(0x945F150)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINEDASYNC_OFFSET UNITYSDK_OFFSET(0x945F250)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTYASYNC_OFFSET UNITYSDK_OFFSET(0x945F2C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x945F3E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTYASYNC_OFFSET UNITYSDK_OFFSET(0x945F4E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHARASYNC_OFFSET UNITYSDK_OFFSET(0x945F5E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULLASYNC_OFFSET UNITYSDK_OFFSET(0x945F6F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHEDASYNC_OFFSET UNITYSDK_OFFSET(0x945F7E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x945F8D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x945FA00)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEANASYNC_OFFSET UNITYSDK_OFFSET(0x945FB40)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASBOOLEANASYNC_OFFSET UNITYSDK_OFFSET(0x945FB50)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTESASYNC_OFFSET UNITYSDK_OFFSET(0x945FC80)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASBYTESASYNC_OFFSET UNITYSDK_OFFSET(0x945FC90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READINTOWRAPPEDTYPEOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x945FDC0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEASYNC_OFFSET UNITYSDK_OFFSET(0x945FEB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDATETIMEASYNC_OFFSET UNITYSDK_OFFSET(0x945FEC0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSETASYNC_OFFSET UNITYSDK_OFFSET(0x945FFD0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDATETIMEOFFSETASYNC_OFFSET UNITYSDK_OFFSET(0x945FFE0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMALASYNC_OFFSET UNITYSDK_OFFSET(0x94600F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDECIMALASYNC_OFFSET UNITYSDK_OFFSET(0x9460100)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLEASYNC_OFFSET UNITYSDK_OFFSET(0x9460210)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDOUBLEASYNC_OFFSET UNITYSDK_OFFSET(0x94602B0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32ASYNC_OFFSET UNITYSDK_OFFSET(0x94603C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASINT32ASYNC_OFFSET UNITYSDK_OFFSET(0x94603D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x94604E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x94604F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x944E380)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_PROPERTYNAMETABLE_OFFSET UNITYSDK_OFFSET(0x9460600)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SET_PROPERTYNAMETABLE_OFFSET UNITYSDK_OFFSET(0x9460610)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x9460630)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x9460640)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFERNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x94606C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SETNEWLINE_OFFSET UNITYSDK_OFFSET(0x945E0D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ONNEWLINE_OFFSET UNITYSDK_OFFSET(0x9460720)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x9460730)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEREADSTRING_OFFSET UNITYSDK_OFFSET(0x9460F90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_BLOCKCOPYCHARS_OFFSET UNITYSDK_OFFSET(0x9461490)
#define NEWTONSOFT_JSON_JSONTEXTREADER_SHIFTBUFFERIFNEEDED_OFFSET UNITYSDK_OFFSET(0x9460770)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET UNITYSDK_OFFSET(0x94614C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PREPAREBUFFERFORREADDATA_OFFSET UNITYSDK_OFFSET(0x9461580)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET UNITYSDK_OFFSET(0x94614D0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARS_OFFSET UNITYSDK_OFFSET(0x9461770)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READCHARS_OFFSET UNITYSDK_OFFSET(0x94617E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x9461850)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32_OFFSET UNITYSDK_OFFSET(0x9462BB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIME_OFFSET UNITYSDK_OFFSET(0x9463190)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0x9463890)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTES_OFFSET UNITYSDK_OFFSET(0x94638F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9463240)
#define NEWTONSOFT_JSON_JSONTEXTREADER_FINISHREADQUOTEDSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9464490)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x9464120)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9464A60)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSVALUECOMMA_OFFSET UNITYSDK_OFFSET(0x94640C0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x9462C50)
#define NEWTONSOFT_JSON_JSONTEXTREADER_FINISHREADQUOTEDNUMBER_OFFSET UNITYSDK_OFFSET(0x9465130)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x9465280)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMAL_OFFSET UNITYSDK_OFFSET(0x9465330)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLE_OFFSET UNITYSDK_OFFSET(0x94653E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULL_OFFSET UNITYSDK_OFFSET(0x9463FC0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHED_OFFSET UNITYSDK_OFFSET(0x9464300)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHAR_OFFSET UNITYSDK_OFFSET(0x9463F70)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x945D590)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9460850)
#define NEWTONSOFT_JSON_JSONTEXTREADER_FINISHREADSTRINGINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9465680)
#define NEWTONSOFT_JSON_JSONTEXTREADER_WRITECHARTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9465610)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CONVERTUNICODE_OFFSET UNITYSDK_OFFSET(0x9465790)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODE_OFFSET UNITYSDK_OFFSET(0x9465590)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x94658E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERCHARINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9465960)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CLEARRECENTSTRING_OFFSET UNITYSDK_OFFSET(0x9465AB0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUE_OFFSET UNITYSDK_OFFSET(0x9462330)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9462190)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9465AD0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_VALIDIDENTIFIERCHAR_OFFSET UNITYSDK_OFFSET(0x9465DF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x9465E50)
#define NEWTONSOFT_JSON_JSONTEXTREADER_READUNQUOTEDPROPERTYREPORTIFDONE_OFFSET UNITYSDK_OFFSET(0x9465F60)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9461B10)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSLINEFEED_OFFSET UNITYSDK_OFFSET(0x94642E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURN_OFFSET UNITYSDK_OFFSET(0x9464220)
#define NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9462690)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9466390)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x9464760)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEREADNUMBER_OFFSET UNITYSDK_OFFSET(0x94667F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_THROWREADERERROR_OFFSET UNITYSDK_OFFSET(0x94678E0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_BIGINTEGERPARSE_OFFSET UNITYSDK_OFFSET(0x94679B0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x94627A0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x9467A30)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET UNITYSDK_OFFSET(0x9467AA0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET UNITYSDK_OFFSET(0x9467B20)
#define NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATOR_OFFSET UNITYSDK_OFFSET(0x9464830)
#define NEWTONSOFT_JSON_JSONTEXTREADER_ISSEPARATOR_OFFSET UNITYSDK_OFFSET(0x9467BF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUE_OFFSET UNITYSDK_OFFSET(0x9466100)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULL_OFFSET UNITYSDK_OFFSET(0x9465490)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x94666F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSE_OFFSET UNITYSDK_OFFSET(0x9466240)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x94646F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x9467D90)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x9464980)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x9467FF0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET UNITYSDK_OFFSET(0x94649F0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET UNITYSDK_OFFSET(0x9468250)
#define NEWTONSOFT_JSON_JSONTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x94684B0)
#define NEWTONSOFT_JSON_JSONTEXTREADER_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x9468560)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9468570)
#define NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x94685C0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonTextReader_TypeDefinitionIndex = 31749;

	class JsonTextReader : public Il2CppObject
	{
	public:
		::System::Boolean _safeAsync; // 0x78
		::System::Char UnicodeReplacementChar; // 0x0
		::System::Int32 MaximumJavascriptIntegerCharacterLength; // 0x0
		::System::Int32 LargeBufferLength; // 0x0
		::System::IO::TextReader* _reader; // 0x80
		::Il2CppArray<::System::Object*>* _chars; // 0x88
		::System::Int32 _charsUsed; // 0x90
		::System::Int32 _charPos; // 0x94
		::System::Int32 _lineStartPos; // 0x98
		::System::Int32 _lineNumber; // 0x9C
		::System::Boolean _isEndOfFile; // 0xA0
		::Newtonsoft::Json::Utilities::StringBuffer* _stringBuffer; // 0xA8
		::Newtonsoft::Json::Utilities::StringReference* _stringReference; // 0xB8
		Il2CppObject* _arrayPool; // 0xC8
		::Newtonsoft::Json::JsonNameTable* _PropertyNameTable_k__BackingField; // 0xD0

		Il2CppObject* ReadAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ParsePostValueAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadFromFinishedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READFROMFINISHEDASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadDataAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATAASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadDataAsync(::System::Boolean arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATAASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ParseValueAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ReadStringIntoBufferAsync(::System::Char arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFERASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ProcessCarriageReturnAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURNASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ProcessCarriageReturnAsync(Il2CppObject* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURNASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ParseUnicodeAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnsureCharsAsync(::System::Int32 arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadCharsAsync(::System::Int32 arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READCHARSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ParseObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseCommentAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENTASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* EatWhitespaceAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseStringAsync(::System::Char arg, ::Newtonsoft::Json::ReadType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::Newtonsoft::Json::ReadType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRINGASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* MatchValueAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEASYNC_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* MatchValueWithTrailingSeparatorAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATORASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* MatchAndSetAsync(::System::String* str, ::Newtonsoft::Json::JsonToken* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::Newtonsoft::Json::JsonToken*, ::System::Object*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHANDSETASYNC_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseTrueAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseFalseAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseNullAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULLASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseConstructorAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTORASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ParseNumberNaNAsync(::Newtonsoft::Json::ReadType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::ReadType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNANASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ParseNumberPositiveInfinityAsync(::Newtonsoft::Json::ReadType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::ReadType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITYASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ParseNumberNegativeInfinityAsync(::Newtonsoft::Json::ReadType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::ReadType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITYASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseNumberAsync(::Newtonsoft::Json::ReadType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::ReadType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseUndefinedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINEDASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ParsePropertyAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ReadNumberIntoBufferAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ParseUnquotedPropertyAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTYASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadNullCharAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHARASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* HandleNullAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULLASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ReadFinishedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHEDASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadStringValueAsync(::Newtonsoft::Json::ReadType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::ReadType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadNumberValueAsync(::Newtonsoft::Json::ReadType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::ReadType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadAsBooleanAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEANASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsBooleanAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASBOOLEANASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsBytesAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTESASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsBytesAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASBYTESASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ReadIntoWrappedTypeObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READINTOWRAPPEDTYPEOBJECTASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDateTimeAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsDateTimeAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDATETIMEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSETASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDATETIMEOFFSETASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDecimalAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMALASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsDecimalAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDECIMALASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDoubleAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsDoubleAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASDOUBLEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsInt32Async(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32ASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsInt32Async(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASINT32ASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsStringAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRINGASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DoReadAsStringAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_DOREADASSTRINGASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonNameTable* get_PropertyNameTable()
		{
			return (return (::Newtonsoft::Json::JsonNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_PROPERTYNAMETABLE_OFFSET))(nullptr);
		}

		::System::Void set_PropertyNameTable(::Newtonsoft::Json::JsonNameTable* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SET_PROPERTYNAMETABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ArrayPool()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_ARRAYPOOL_OFFSET))(nullptr);
		}

		::System::Void set_ArrayPool(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SET_ARRAYPOOL_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureBufferNotEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFERNOTEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetNewLine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SETNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNewLine(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ONNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Void ParseString(::System::Char arg, ::Newtonsoft::Json::ReadType* arg)
		{
			((::System::Void(*)(::System::Char, ::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSESTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ParseReadString(::System::Char arg, ::Newtonsoft::Json::ReadType* arg)
		{
			((::System::Void(*)(::System::Char, ::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEREADSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BlockCopyChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_BLOCKCOPYCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShiftBufferIfNeeded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_SHIFTBUFFERIFNEEDED_OFFSET))(nullptr);
		}

		::System::Int32 ReadData(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareBufferForReadData(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PREPAREBUFFERFORREADDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadData(::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EnsureChars(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSURECHARS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadChars(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READCHARS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READ_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsInt32()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASINT32_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsDateTime()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIME_OFFSET))(nullptr);
		}

		::System::String* ReadAsString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASSTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAsBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBYTES_OFFSET))(nullptr);
		}

		::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* FinishReadQuotedStringValue(::Newtonsoft::Json::ReadType* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_FINISHREADQUOTEDSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(::System::Char arg)
		{
			return (return (::Newtonsoft::Json::JsonReaderException*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsBoolean()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASBOOLEAN_OFFSET))(nullptr);
		}

		::System::Void ProcessValueComma()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSVALUECOMMA_OFFSET))(nullptr);
		}

		::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* FinishReadQuotedNumber(::Newtonsoft::Json::ReadType* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_FINISHREADQUOTEDNUMBER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDateTimeOffset()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDATETIMEOFFSET_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsDecimal()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDECIMAL_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsDouble()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READASDOUBLE_OFFSET))(nullptr);
		}

		::System::Void HandleNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_HANDLENULL_OFFSET))(nullptr);
		}

		::System::Void ReadFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READFINISHED_OFFSET))(nullptr);
		}

		::System::Boolean ReadNullChar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNULLCHAR_OFFSET))(nullptr);
		}

		::System::Void EnsureBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENSUREBUFFER_OFFSET))(nullptr);
		}

		::System::Void ReadStringIntoBuffer(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READSTRINGINTOBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void FinishReadStringIntoBuffer(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_FINISHREADSTRINGINTOBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteCharToBuffer(::System::Char arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Char, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_WRITECHARTOBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char ConvertUnicode(::System::Boolean arg)
		{
			return (return (::System::Char(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CONVERTUNICODE_OFFSET))(arg, nullptr);
		}

		::System::Char ParseUnicode()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNICODE_OFFSET))(nullptr);
		}

		::System::Void ReadNumberIntoBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERINTOBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean ReadNumberCharIntoBuffer(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READNUMBERCHARINTOBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearRecentString()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CLEARRECENTSTRING_OFFSET))(nullptr);
		}

		::System::Boolean ParsePostValue(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPOSTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean ParseProperty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEPROPERTY_OFFSET))(nullptr);
		}

		::System::Boolean ValidIdentifierChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_VALIDIDENTIFIERCHAR_OFFSET))(arg, nullptr);
		}

		::System::Void ParseUnquotedProperty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNQUOTEDPROPERTY_OFFSET))(nullptr);
		}

		::System::Boolean ReadUnquotedPropertyReportIfDone(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_READUNQUOTEDPROPERTYREPORTIFDONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ParseValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEVALUE_OFFSET))(nullptr);
		}

		::System::Void ProcessLineFeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSLINEFEED_OFFSET))(nullptr);
		}

		::System::Void ProcessCarriageReturn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PROCESSCARRIAGERETURN_OFFSET))(arg, nullptr);
		}

		::System::Void EatWhitespace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_EATWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void ParseConstructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void ParseNumber(::Newtonsoft::Json::ReadType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void ParseReadNumber(::Newtonsoft::Json::ReadType* arg, ::System::Char arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReadType*, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEREADNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::JsonReaderException* ThrowReaderError(::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::JsonReaderException*(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_THROWREADERERROR_OFFSET))(str, arg, nullptr);
		}

		::System::Object* BigIntegerParse(::System::String* str, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_BIGINTEGERPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void ParseComment(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSECOMMENT_OFFSET))(arg, nullptr);
		}

		::System::Void EndComment(::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ENDCOMMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchValue(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET))(str, nullptr);
		}

		::System::Boolean MatchValue(::System::Boolean arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean MatchValueWithTrailingSeparator(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_MATCHVALUEWITHTRAILINGSEPARATOR_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSeparator(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_ISSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::Void ParseTrue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSETRUE_OFFSET))(nullptr);
		}

		::System::Void ParseNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENULL_OFFSET))(nullptr);
		}

		::System::Void ParseUndefined()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEUNDEFINED_OFFSET))(nullptr);
		}

		::System::Void ParseFalse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSEFALSE_OFFSET))(nullptr);
		}

		::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNEGATIVEINFINITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERPOSITIVEINFINITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET))(arg, nullptr);
		}

		::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::ReadType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_PARSENUMBERNAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTREADER_GET_LINEPOSITION_OFFSET))(nullptr);
		}

	};
}

