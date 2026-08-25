#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class Base64Encoder; }
namespace Newtonsoft::Json { class JsonToken; }

#define NEWTONSOFT_JSON_JSONTEXTWRITER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9477D80)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOFLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9477E20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITERASYNC_OFFSET UNITYSDK_OFFSET(0x9477EA0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEDELIMITERASYNC_OFFSET UNITYSDK_OFFSET(0x9477F20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDASYNC_OFFSET UNITYSDK_OFFSET(0x9477F80)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEENDASYNC_OFFSET UNITYSDK_OFFSET(0x9477FA0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x94780D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOCLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x94780F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSEBUFFERANDWRITERASYNC_OFFSET UNITYSDK_OFFSET(0x94781E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDASYNC_OFFSET UNITYSDK_OFFSET(0x94782B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTASYNC_OFFSET UNITYSDK_OFFSET(0x94782D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEINDENTASYNC_OFFSET UNITYSDK_OFFSET(0x94782F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTASYNC_OFFSET UNITYSDK_OFFSET(0x9478490)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNALASYNC_OFFSET UNITYSDK_OFFSET(0x94785A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNALASYNC_OFFSET UNITYSDK_OFFSET(0x9478660)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACEASYNC_OFFSET UNITYSDK_OFFSET(0x9478790)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEINDENTSPACEASYNC_OFFSET UNITYSDK_OFFSET(0x9478810)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAWASYNC_OFFSET UNITYSDK_OFFSET(0x9478870)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITERAWASYNC_OFFSET UNITYSDK_OFFSET(0x9478900)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULLASYNC_OFFSET UNITYSDK_OFFSET(0x9478960)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITENULLASYNC_OFFSET UNITYSDK_OFFSET(0x94789F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEDIGITSASYNC_OFFSET UNITYSDK_OFFSET(0x9478A60)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9478C40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9478CF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9478E30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9478E50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x9478E70)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x9478F30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x9478F50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x9479120)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x9479250)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x9479280)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x94793A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x94793C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x9479480)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x9479590)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x94795B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x9479670)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTORASYNC_OFFSET UNITYSDK_OFFSET(0x9479780)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTCONSTRUCTORASYNC_OFFSET UNITYSDK_OFFSET(0x94797A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINEDASYNC_OFFSET UNITYSDK_OFFSET(0x94798B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEUNDEFINEDASYNC_OFFSET UNITYSDK_OFFSET(0x94798D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEUNDEFINEDASYNC_OFFSET UNITYSDK_OFFSET(0x94799B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEWHITESPACEASYNC_OFFSET UNITYSDK_OFFSET(0x9479AC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEWHITESPACEASYNC_OFFSET UNITYSDK_OFFSET(0x9479B50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479BC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479C40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479CB0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479CD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479DC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479DF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479E10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9479EC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUENONNULLASYNC_OFFSET UNITYSDK_OFFSET(0x9479F00)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A010)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A090)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A100)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A120)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A210)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A230)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A330)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A370)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A420)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A460)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A560)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A5B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A670)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A710)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A790)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A7E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A8E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947A9A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947AA40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947AB50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947AC10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947ACB0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947ADF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947AE30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947AF30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947AF80)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B040)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B080)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B0A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B160)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B1A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B1E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B2A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B340)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B490)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B4D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B4F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B5B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B5F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B610)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B6D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B6F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B880)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B9B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947B9D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BAD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BB10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BBC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BBF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BC10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BCC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BCF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BD30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947BDE0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUENOTNULLASYNC_OFFSET UNITYSDK_OFFSET(0x947BE90)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUENOTNULLASYNC_OFFSET UNITYSDK_OFFSET(0x947BFD0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947C100)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947C130)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947C150)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENTASYNC_OFFSET UNITYSDK_OFFSET(0x947C200)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITECOMMENTASYNC_OFFSET UNITYSDK_OFFSET(0x947C220)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x947C330)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDCONSTRUCTORASYNC_OFFSET UNITYSDK_OFFSET(0x947C360)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x947C390)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAWVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947C3C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITERAWVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947C3E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITERAWVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x947C4A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x947C5D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_BASE64ENCODER_OFFSET UNITYSDK_OFFSET(0x947C670)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x947C6F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_ARRAYPOOL_OFFSET UNITYSDK_OFFSET(0x947C700)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTATION_OFFSET UNITYSDK_OFFSET(0x947C780)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTATION_OFFSET UNITYSDK_OFFSET(0x947C790)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x947C800)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x947C810)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTCHAR_OFFSET UNITYSDK_OFFSET(0x947C970)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTCHAR_OFFSET UNITYSDK_OFFSET(0x947C980)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTENAME_OFFSET UNITYSDK_OFFSET(0x947C9B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTENAME_OFFSET UNITYSDK_OFFSET(0x947C9C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x947C9D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x947CB70)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x947CBA0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSEBUFFERANDWRITER_OFFSET UNITYSDK_OFFSET(0x947CC20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x947CCA0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x947CCF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x947CD40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x947CDF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x947CEF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x947D030)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x947D100)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_UPDATECHARESCAPEFLAGS_OFFSET UNITYSDK_OFFSET(0x947C8F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x947D180)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_SETINDENTCHARS_OFFSET UNITYSDK_OFFSET(0x94783A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITER_OFFSET UNITYSDK_OFFSET(0x947D2A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACE_OFFSET UNITYSDK_OFFSET(0x947D2D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x947D300)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947D330)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x947D440)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x947D4D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x947D560)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947D5A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRING_OFFSET UNITYSDK_OFFSET(0x947CF50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947D6A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947D7B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947D8D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947D900)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DA10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DAC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DBC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DC70)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DD60)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DDF0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DE20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DE50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DEE0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DF10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DF40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947DFE0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUETOBUFFER_OFFSET UNITYSDK_OFFSET(0x947E160)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947E2B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947E450)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUETOBUFFER_OFFSET UNITYSDK_OFFSET(0x947E5A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947E790)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947E880)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x947E980)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x947EA30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x947EAE0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x947D650)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET UNITYSDK_OFFSET(0x947D7E0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET UNITYSDK_OFFSET(0x947D990)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENUMBERTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9478B40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET UNITYSDK_OFFSET(0x947D6D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET UNITYSDK_OFFSET(0x947EC00)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENUMBERTOBUFFER_OFFSET UNITYSDK_OFFSET(0x947EB20)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonTextWriter_TypeDefinitionIndex = 31771;

	class JsonTextWriter : public Il2CppObject
	{
	public:
		::System::Boolean _safeAsync; // 0x60
		::System::Int32 IndentCharBufferSize; // 0x0
		::System::IO::TextWriter* _writer; // 0x68
		::Newtonsoft::Json::Utilities::Base64Encoder* _base64Encoder; // 0x70
		::System::Char _indentChar; // 0x78
		::System::Int32 _indentation; // 0x7C
		::System::Char _quoteChar; // 0x80
		::System::Boolean _quoteName; // 0x82
		::Il2CppArray<::System::Object*>* _charEscapeFlags; // 0x88
		::Il2CppArray<::System::Object*>* _writeBuffer; // 0x90
		Il2CppObject* _arrayPool; // 0x98
		::Il2CppArray<::System::Object*>* _indentChars; // 0xA0

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoFlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOFLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueDelimiterAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueDelimiterAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEDELIMITERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteEndAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* CloseAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoCloseAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOCLOSEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* CloseBufferAndWriterAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSEBUFFERANDWRITERASYNC_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIndentAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteIndentAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEINDENTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIndentAsync(::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueInternalAsync(::Newtonsoft::Json::JsonToken* arg, ::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNALASYNC_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueInternalAsync(::System::Threading::Tasks::Task* arg, ::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNALASYNC_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIndentSpaceAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteIndentSpaceAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEINDENTSPACEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteRawAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAWASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteRawAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITERAWASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteNullAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULLASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteNullAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITENULLASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteDigitsAsync(::System::UInt64 arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt64, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEDIGITSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIntegerValueAsync(::System::UInt64 arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt64, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIntegerValueAsync(::System::Threading::Tasks::Task* arg, ::System::UInt64 arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::UInt64, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIntegerValueAsync(::System::Int64 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIntegerValueAsync(::System::UInt64 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEscapedStringAsync(::System::String* str, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRINGASYNC_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WritePropertyNameAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAMEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWritePropertyNameAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEPROPERTYNAMEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWritePropertyNameAsync(::System::Threading::Tasks::Task* arg, ::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEPROPERTYNAMEASYNC_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WritePropertyNameAsync(::System::String* str, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAMEASYNC_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWritePropertyNameAsync(::System::String* str, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEPROPERTYNAMEASYNC_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteStartArrayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteStartArrayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTARRAYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteStartArrayAsync(::System::Threading::Tasks::Task* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTARRAYASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteStartObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteStartObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTOBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteStartObjectAsync(::System::Threading::Tasks::Task* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTOBJECTASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteStartConstructorAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTORASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteStartConstructorAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITESTARTCONSTRUCTORASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteUndefinedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteUndefinedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEUNDEFINEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteUndefinedAsync(::System::Threading::Tasks::Task* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEUNDEFINEDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteWhitespaceAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEWHITESPACEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteWhitespaceAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEWHITESPACEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Byte arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Byte, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueNonNullAsync(::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUENONNULLASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Char arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Char arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTime* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::DateTime*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::DateTime* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::DateTime*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTimeOffset* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::DateTimeOffset*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::DateTimeOffset* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::DateTimeOffset*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Decimal* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Decimal*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Decimal* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Decimal*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Double arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Double, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Double arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Double, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Single arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Single, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Single arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Single, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Guid* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Guid*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Guid* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Guid*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Int64 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Numerics::BigInteger* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Numerics::BigInteger*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Object* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Object*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::SByte arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::SByte, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Int16 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int16, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::Threading::Tasks::Task* arg, ::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::TimeSpan* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::TimeSpan*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(::System::TimeSpan* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::TimeSpan*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::UInt32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::UInt64 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Uri* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Uri*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueNotNullAsync(::System::Uri* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Uri*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUENOTNULLASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueNotNullAsync(::System::Threading::Tasks::Task* arg, ::System::Uri* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Uri*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUENOTNULLASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::UInt16 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt16, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteCommentAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENTASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteCommentAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITECOMMENTASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndArrayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDARRAYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndConstructorAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDCONSTRUCTORASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEENDOBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteRawValueAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAWVALUEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteRawValueAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITERAWVALUEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* DoWriteRawValueAsync(::System::Threading::Tasks::Task* arg, ::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_DOWRITERAWVALUEASYNC_OFFSET))(arg, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EnsureWriteBuffer(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::Base64Encoder* get_Base64Encoder()
		{
			return (return (::Newtonsoft::Json::Utilities::Base64Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_BASE64ENCODER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ArrayPool()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_ARRAYPOOL_OFFSET))(nullptr);
		}

		::System::Void set_ArrayPool(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_ARRAYPOOL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Indentation()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTATION_OFFSET))(nullptr);
		}

		::System::Void set_Indentation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTATION_OFFSET))(arg, nullptr);
		}

		::System::Char get_QuoteChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTECHAR_OFFSET))(nullptr);
		}

		::System::Void set_QuoteChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTECHAR_OFFSET))(arg, nullptr);
		}

		::System::Char get_IndentChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_INDENTCHAR_OFFSET))(nullptr);
		}

		::System::Void set_IndentChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_INDENTCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_QuoteName()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTENAME_OFFSET))(nullptr);
		}

		::System::Void set_QuoteName(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SET_QUOTENAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void CloseBufferAndWriter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSEBUFFERANDWRITER_OFFSET))(nullptr);
		}

		::System::Void WriteStartObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECT_OFFSET))(nullptr);
		}

		::System::Void WriteStartArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAY_OFFSET))(nullptr);
		}

		::System::Void WriteStartConstructor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(str, nullptr);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEEND_OFFSET))(arg, nullptr);
		}

		::System::Void WritePropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void WritePropertyName(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnStringEscapeHandlingChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET))(nullptr);
		}

		::System::Void UpdateCharEscapeFlags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_UPDATECHARESCAPEFLAGS_OFFSET))(nullptr);
		}

		::System::Void WriteIndent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENT_OFFSET))(nullptr);
		}

		::System::Int32 SetIndentChars()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_SETINDENTCHARS_OFFSET))(nullptr);
		}

		::System::Void WriteValueDelimiter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITER_OFFSET))(nullptr);
		}

		::System::Void WriteIndentSpace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACE_OFFSET))(nullptr);
		}

		::System::Void WriteValueInternal(::System::String* str, ::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::System::String*, ::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULL_OFFSET))(nullptr);
		}

		::System::Void WriteUndefined()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINED_OFFSET))(nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteEscapedString(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 WriteValueToBuffer(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUETOBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTimeOffset* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 WriteValueToBuffer(::System::DateTimeOffset* arg)
		{
			return (return (::System::Int32(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUETOBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void EnsureWriteBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET))(nullptr);
		}

		::System::Void WriteIntegerValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIntegerValue(::System::UInt64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 WriteNumberToBuffer(::System::UInt64 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENUMBERTOBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteIntegerValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIntegerValue(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 WriteNumberToBuffer(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENUMBERTOBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

