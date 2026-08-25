#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonToken; }
namespace Newtonsoft::Json { class JsonPosition; }
namespace Newtonsoft::Json { class DateTimeZoneHandling; }
namespace Newtonsoft::Json { class DateParseHandling; }
namespace Newtonsoft::Json { class FloatParseHandling; }
namespace Newtonsoft::Json { class JsonContainerType; }
namespace Newtonsoft::Json { class JsonReaderException; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }

#define NEWTONSOFT_JSON_JSONREADER_READASYNC_OFFSET UNITYSDK_OFFSET(0x9450EE0)
#define NEWTONSOFT_JSON_JSONREADER_SKIPASYNC_OFFSET UNITYSDK_OFFSET(0x9450F80)
#define NEWTONSOFT_JSON_JSONREADER_READERREADANDASSERTASYNC_OFFSET UNITYSDK_OFFSET(0x9451080)
#define NEWTONSOFT_JSON_JSONREADER_READASBOOLEANASYNC_OFFSET UNITYSDK_OFFSET(0x9451170)
#define NEWTONSOFT_JSON_JSONREADER_READASBYTESASYNC_OFFSET UNITYSDK_OFFSET(0x9451230)
#define NEWTONSOFT_JSON_JSONREADER_READARRAYINTOBYTEARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x94512F0)
#define NEWTONSOFT_JSON_JSONREADER_READASDATETIMEASYNC_OFFSET UNITYSDK_OFFSET(0x9451410)
#define NEWTONSOFT_JSON_JSONREADER_READASDATETIMEOFFSETASYNC_OFFSET UNITYSDK_OFFSET(0x94514E0)
#define NEWTONSOFT_JSON_JSONREADER_READASDECIMALASYNC_OFFSET UNITYSDK_OFFSET(0x94515B0)
#define NEWTONSOFT_JSON_JSONREADER_READASDOUBLEASYNC_OFFSET UNITYSDK_OFFSET(0x9451680)
#define NEWTONSOFT_JSON_JSONREADER_READASINT32ASYNC_OFFSET UNITYSDK_OFFSET(0x9451700)
#define NEWTONSOFT_JSON_JSONREADER_READASSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x94517C0)
#define NEWTONSOFT_JSON_JSONREADER_READANDMOVETOCONTENTASYNC_OFFSET UNITYSDK_OFFSET(0x9451880)
#define NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENTASYNC_OFFSET UNITYSDK_OFFSET(0x9451990)
#define NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENTFROMNONCONTENTASYNC_OFFSET UNITYSDK_OFFSET(0x9451A20)
#define NEWTONSOFT_JSON_JSONREADER_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x9451B30)
#define NEWTONSOFT_JSON_JSONREADER_GET_CLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x9451B40)
#define NEWTONSOFT_JSON_JSONREADER_SET_CLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x9451B50)
#define NEWTONSOFT_JSON_JSONREADER_GET_SUPPORTMULTIPLECONTENT_OFFSET UNITYSDK_OFFSET(0x9451B60)
#define NEWTONSOFT_JSON_JSONREADER_SET_SUPPORTMULTIPLECONTENT_OFFSET UNITYSDK_OFFSET(0x9451B70)
#define NEWTONSOFT_JSON_JSONREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x9451B80)
#define NEWTONSOFT_JSON_JSONREADER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x9451B90)
#define NEWTONSOFT_JSON_JSONREADER_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x9451BA0)
#define NEWTONSOFT_JSON_JSONREADER_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x9451BB0)
#define NEWTONSOFT_JSON_JSONREADER_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x9451C20)
#define NEWTONSOFT_JSON_JSONREADER_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x9451C30)
#define NEWTONSOFT_JSON_JSONREADER_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x9451CA0)
#define NEWTONSOFT_JSON_JSONREADER_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x9451CB0)
#define NEWTONSOFT_JSON_JSONREADER_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9451D20)
#define NEWTONSOFT_JSON_JSONREADER_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9451D30)
#define NEWTONSOFT_JSON_JSONREADER_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x9451D40)
#define NEWTONSOFT_JSON_JSONREADER_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x9451D50)
#define NEWTONSOFT_JSON_JSONREADER_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x9451E10)
#define NEWTONSOFT_JSON_JSONREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9451E20)
#define NEWTONSOFT_JSON_JSONREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9451E30)
#define NEWTONSOFT_JSON_JSONREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x9451E50)
#define NEWTONSOFT_JSON_JSONREADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9451EC0)
#define NEWTONSOFT_JSON_JSONREADER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x9452000)
#define NEWTONSOFT_JSON_JSONREADER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x9452060)
#define NEWTONSOFT_JSON_JSONREADER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x9452070)
#define NEWTONSOFT_JSON_JSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94520F0)
#define NEWTONSOFT_JSON_JSONREADER_PUSH_OFFSET UNITYSDK_OFFSET(0x9452170)
#define NEWTONSOFT_JSON_JSONREADER_POP_OFFSET UNITYSDK_OFFSET(0x9452580)
#define NEWTONSOFT_JSON_JSONREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x9452690)
#define NEWTONSOFT_JSON_JSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONREADER_READASINT32_OFFSET UNITYSDK_OFFSET(0x94526A0)
#define NEWTONSOFT_JSON_JSONREADER_READINT32STRING_OFFSET UNITYSDK_OFFSET(0x9452D90)
#define NEWTONSOFT_JSON_JSONREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0x9452FB0)
#define NEWTONSOFT_JSON_JSONREADER_READASBYTES_OFFSET UNITYSDK_OFFSET(0x9453300)
#define NEWTONSOFT_JSON_JSONREADER_READARRAYINTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x9453A50)
#define NEWTONSOFT_JSON_JSONREADER_READARRAYELEMENTINTOBYTEARRAYREPORTDONE_OFFSET UNITYSDK_OFFSET(0x9453BC0)
#define NEWTONSOFT_JSON_JSONREADER_READASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9453DC0)
#define NEWTONSOFT_JSON_JSONREADER_READDOUBLESTRING_OFFSET UNITYSDK_OFFSET(0x9454130)
#define NEWTONSOFT_JSON_JSONREADER_READASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9454350)
#define NEWTONSOFT_JSON_JSONREADER_READBOOLEANSTRING_OFFSET UNITYSDK_OFFSET(0x9454700)
#define NEWTONSOFT_JSON_JSONREADER_READASDECIMAL_OFFSET UNITYSDK_OFFSET(0x94548E0)
#define NEWTONSOFT_JSON_JSONREADER_READDECIMALSTRING_OFFSET UNITYSDK_OFFSET(0x9454D90)
#define NEWTONSOFT_JSON_JSONREADER_READASDATETIME_OFFSET UNITYSDK_OFFSET(0x9455080)
#define NEWTONSOFT_JSON_JSONREADER_READDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x94553B0)
#define NEWTONSOFT_JSON_JSONREADER_READASDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x9455700)
#define NEWTONSOFT_JSON_JSONREADER_READDATETIMEOFFSETSTRING_OFFSET UNITYSDK_OFFSET(0x9455A20)
#define NEWTONSOFT_JSON_JSONREADER_READERREADANDASSERT_OFFSET UNITYSDK_OFFSET(0x9453A00)
#define NEWTONSOFT_JSON_JSONREADER_CREATEUNEXPECTEDENDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9455D60)
#define NEWTONSOFT_JSON_JSONREADER_READINTOWRAPPEDTYPEOBJECT_OFFSET UNITYSDK_OFFSET(0x94537A0)
#define NEWTONSOFT_JSON_JSONREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x9455E10)
#define NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x9453BA0)
#define NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x9455EC0)
#define NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x9452C20)
#define NEWTONSOFT_JSON_JSONREADER_SETPOSTVALUESTATE_OFFSET UNITYSDK_OFFSET(0x9455FE0)
#define NEWTONSOFT_JSON_JSONREADER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET UNITYSDK_OFFSET(0x94524F0)
#define NEWTONSOFT_JSON_JSONREADER_VALIDATEEND_OFFSET UNITYSDK_OFFSET(0x9455EE0)
#define NEWTONSOFT_JSON_JSONREADER_SETSTATEBASEDONCURRENT_OFFSET UNITYSDK_OFFSET(0x9456110)
#define NEWTONSOFT_JSON_JSONREADER_SETFINISHED_OFFSET UNITYSDK_OFFSET(0x9456020)
#define NEWTONSOFT_JSON_JSONREADER_GETTYPEFORCLOSETOKEN_OFFSET UNITYSDK_OFFSET(0x9456060)
#define NEWTONSOFT_JSON_JSONREADER_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9456200)
#define NEWTONSOFT_JSON_JSONREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9456260)
#define NEWTONSOFT_JSON_JSONREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9456290)
#define NEWTONSOFT_JSON_JSONREADER_READANDASSERT_OFFSET UNITYSDK_OFFSET(0x94562C0)
#define NEWTONSOFT_JSON_JSONREADER_READFORTYPEANDASSERT_OFFSET UNITYSDK_OFFSET(0x9456320)
#define NEWTONSOFT_JSON_JSONREADER_READFORTYPE_OFFSET UNITYSDK_OFFSET(0x9456370)
#define NEWTONSOFT_JSON_JSONREADER_READANDMOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x9456690)
#define NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x9456700)
#define NEWTONSOFT_JSON_JSONREADER_GETCONTENTTOKEN_OFFSET UNITYSDK_OFFSET(0x9452B10)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonReader_TypeDefinitionIndex = 31704;

	class JsonReader : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::JsonToken* _tokenType; // 0x10
		::System::Object* _value; // 0x18
		::System::Char _quoteChar; // 0x20
		State* _currentState; // 0x24
		::Newtonsoft::Json::JsonPosition* _currentPosition; // 0x28
		::System::Globalization::CultureInfo* _culture; // 0x40
		::Newtonsoft::Json::DateTimeZoneHandling* _dateTimeZoneHandling; // 0x48
		Il2CppObject* _maxDepth; // 0x4C
		::System::Boolean _hasExceededMaxDepth; // 0x54
		::Newtonsoft::Json::DateParseHandling* _dateParseHandling; // 0x58
		::Newtonsoft::Json::FloatParseHandling* _floatParseHandling; // 0x5C
		::System::String* _dateFormatString; // 0x60
		Il2CppObject* _stack; // 0x68
		::System::Boolean _CloseInput_k__BackingField; // 0x70
		::System::Boolean _SupportMultipleContent_k__BackingField; // 0x71

		Il2CppObject* ReadAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* SkipAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SKIPASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ReaderReadAndAssertAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READERREADANDASSERTASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsBooleanAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASBOOLEANASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsBytesAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASBYTESASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadArrayIntoByteArrayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READARRAYINTOBYTEARRAYASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDateTimeAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDATETIMEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDATETIMEOFFSETASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDecimalAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDECIMALASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDoubleAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDOUBLEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsInt32Async(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASINT32ASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsStringAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASSTRINGASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAndMoveToContentAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READANDMOVETOCONTENTASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MoveToContentAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENTASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MoveToContentFromNonContentAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENTFROMNONCONTENTASYNC_OFFSET))(arg, nullptr);
		}

		State* get_CurrentState()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CloseInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_CLOSEINPUT_OFFSET))(nullptr);
		}

		::System::Void set_CloseInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_CLOSEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SupportMultipleContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_SUPPORTMULTIPLECONTENT_OFFSET))(nullptr);
		}

		::System::Void set_SupportMultipleContent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_SUPPORTMULTIPLECONTENT_OFFSET))(arg, nullptr);
		}

		::System::Char get_QuoteChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_QUOTECHAR_OFFSET))(nullptr);
		}

		::System::Void set_QuoteChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_QUOTECHAR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateTimeZoneHandling* get_DateTimeZoneHandling()
		{
			return (return (::Newtonsoft::Json::DateTimeZoneHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DATETIMEZONEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateTimeZoneHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_DATETIMEZONEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateParseHandling* get_DateParseHandling()
		{
			return (return (::Newtonsoft::Json::DateParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DATEPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_DATEPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::FloatParseHandling* get_FloatParseHandling()
		{
			return (return (::Newtonsoft::Json::FloatParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_FLOATPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_FLOATPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::String* get_DateFormatString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DATEFORMATSTRING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_DATEFORMATSTRING_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_MaxDepth()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_MAXDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxDepth(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_MAXDEPTH_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonToken* get_TokenType()
		{
			return (return (::Newtonsoft::Json::JsonToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_TOKENTYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_PATH_OFFSET))(nullptr);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_CULTURE_OFFSET))(nullptr);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_CULTURE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonPosition* GetPosition(::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::JsonPosition*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Push(::Newtonsoft::Json::JsonContainerType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_PUSH_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonContainerType* Pop()
		{
			return (return (::Newtonsoft::Json::JsonContainerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_POP_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonContainerType* Peek()
		{
			return (return (::Newtonsoft::Json::JsonContainerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READ_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsInt32()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASINT32_OFFSET))(nullptr);
		}

		Il2CppObject* ReadInt32String(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READINT32STRING_OFFSET))(str, nullptr);
		}

		::System::String* ReadAsString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASSTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAsBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASBYTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadArrayIntoByteArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READARRAYINTOBYTEARRAY_OFFSET))(nullptr);
		}

		::System::Boolean ReadArrayElementIntoByteArrayReportDone(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READARRAYELEMENTINTOBYTEARRAYREPORTDONE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsDouble()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDOUBLE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadDoubleString(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDOUBLESTRING_OFFSET))(str, nullptr);
		}

		Il2CppObject* ReadAsBoolean()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASBOOLEAN_OFFSET))(nullptr);
		}

		Il2CppObject* ReadBooleanString(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READBOOLEANSTRING_OFFSET))(str, nullptr);
		}

		Il2CppObject* ReadAsDecimal()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDECIMAL_OFFSET))(nullptr);
		}

		Il2CppObject* ReadDecimalString(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDECIMALSTRING_OFFSET))(str, nullptr);
		}

		Il2CppObject* ReadAsDateTime()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* ReadDateTimeString(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDATETIMESTRING_OFFSET))(str, nullptr);
		}

		Il2CppObject* ReadAsDateTimeOffset()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDATETIMEOFFSET_OFFSET))(nullptr);
		}

		Il2CppObject* ReadDateTimeOffsetString(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDATETIMEOFFSETSTRING_OFFSET))(str, nullptr);
		}

		::System::Void ReaderReadAndAssert()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READERREADANDASSERT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonReaderException* CreateUnexpectedEndException()
		{
			return (return (::Newtonsoft::Json::JsonReaderException*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_CREATEUNEXPECTEDENDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ReadIntoWrappedTypeObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READINTOWRAPPEDTYPEOBJECT_OFFSET))(nullptr);
		}

		::System::Void Skip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SKIP_OFFSET))(nullptr);
		}

		::System::Void SetToken(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetToken(::Newtonsoft::Json::JsonToken* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetToken(::Newtonsoft::Json::JsonToken* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetPostValueState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETPOSTVALUESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateScopeWithFinishedValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET))(nullptr);
		}

		::System::Void ValidateEnd(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_VALIDATEEND_OFFSET))(arg, nullptr);
		}

		::System::Void SetStateBasedOnCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETSTATEBASEDONCURRENT_OFFSET))(nullptr);
		}

		::System::Void SetFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETFINISHED_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonContainerType* GetTypeForCloseToken(::Newtonsoft::Json::JsonToken* arg)
		{
			return (return (::Newtonsoft::Json::JsonContainerType*(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GETTYPEFORCLOSETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void ReadAndAssert()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READANDASSERT_OFFSET))(nullptr);
		}

		::System::Void ReadForTypeAndAssert(::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READFORTYPEANDASSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadForType(::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READFORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadAndMoveToContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READANDMOVETOCONTENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveToContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonToken* GetContentToken()
		{
			return (return (::Newtonsoft::Json::JsonToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GETCONTENTTOKEN_OFFSET))(nullptr);
		}

	};
}

