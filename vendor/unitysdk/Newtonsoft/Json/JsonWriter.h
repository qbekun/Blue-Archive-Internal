#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonPosition; }
namespace Newtonsoft::Json { class Formatting; }
namespace Newtonsoft::Json { class DateFormatHandling; }
namespace Newtonsoft::Json { class DateTimeZoneHandling; }
namespace Newtonsoft::Json { class StringEscapeHandling; }
namespace Newtonsoft::Json { class FloatFormatHandling; }
namespace Newtonsoft::Json { class JsonToken; }
namespace Newtonsoft::Json { class JsonContainerType; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Utilities { class PrimitiveTypeCode; }
namespace Newtonsoft::Json { class WriteState; }
namespace Newtonsoft::Json::Utilities { class PrimitiveTypeCode&; }
namespace Newtonsoft::Json { class JsonWriterException; }

#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEASYNC_OFFSET UNITYSDK_OFFSET(0x948CA00)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEASYNC_OFFSET UNITYSDK_OFFSET(0x948CC80)
#define NEWTONSOFT_JSON_JSONWRITER_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x948CD70)
#define NEWTONSOFT_JSON_JSONWRITER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x948CE40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDASYNC_OFFSET UNITYSDK_OFFSET(0x948CF10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTASYNC_OFFSET UNITYSDK_OFFSET(0x948CFE0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITERASYNC_OFFSET UNITYSDK_OFFSET(0x948D0B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACEASYNC_OFFSET UNITYSDK_OFFSET(0x948D180)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAWASYNC_OFFSET UNITYSDK_OFFSET(0x948D250)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDASYNC_OFFSET UNITYSDK_OFFSET(0x948D320)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDINTERNALASYNC_OFFSET UNITYSDK_OFFSET(0x948D3F0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEENDASYNC_OFFSET UNITYSDK_OFFSET(0x948D560)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x948DE50)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTORASYNC_OFFSET UNITYSDK_OFFSET(0x948DF20)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x948DFF0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITENULLASYNC_OFFSET UNITYSDK_OFFSET(0x948E0C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x948E190)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x948E260)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAMEASYNC_OFFSET UNITYSDK_OFFSET(0x9480580)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x948E330)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTARTASYNC_OFFSET UNITYSDK_OFFSET(0x94812C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENTASYNC_OFFSET UNITYSDK_OFFSET(0x948E400)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENTASYNC_OFFSET UNITYSDK_OFFSET(0x947F990)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948E4D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTORASYNC_OFFSET UNITYSDK_OFFSET(0x948E5A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x948E670)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET UNITYSDK_OFFSET(0x948E740)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET UNITYSDK_OFFSET(0x948E7C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET UNITYSDK_OFFSET(0x948E840)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET UNITYSDK_OFFSET(0x948E860)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET UNITYSDK_OFFSET(0x948F070)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKENSYNCREADINGASYNC_OFFSET UNITYSDK_OFFSET(0x948F1C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATEASYNC_OFFSET UNITYSDK_OFFSET(0x948F2D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F3F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F4C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F590)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F660)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F730)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F800)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F8D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948F9A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948FA70)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948FB50)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948FC30)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948FD10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948FDF0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948FED0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x948FFA0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490080)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490150)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490220)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490300)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x94903E0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x94904B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490580)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490650)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490730)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490800)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x94908D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x94909A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490A70)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490B40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490C10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490CE0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490DC0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490E90)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9490F60)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9491030)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9491110)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x94911E0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x94912B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINEDASYNC_OFFSET UNITYSDK_OFFSET(0x9491380)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEWHITESPACEASYNC_OFFSET UNITYSDK_OFFSET(0x9491450)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9482290)
#define NEWTONSOFT_JSON_JSONWRITER_SETWRITESTATEASYNC_OFFSET UNITYSDK_OFFSET(0x9491530)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9491780)
#define NEWTONSOFT_JSON_JSONWRITER_BUILDSTATEARRAY_OFFSET UNITYSDK_OFFSET(0x9492E80)
#define NEWTONSOFT_JSON_JSONWRITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94930E0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x94934F0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x9493500)
#define NEWTONSOFT_JSON_JSONWRITER_GET_AUTOCOMPLETEONCLOSE_OFFSET UNITYSDK_OFFSET(0x9493510)
#define NEWTONSOFT_JSON_JSONWRITER_SET_AUTOCOMPLETEONCLOSE_OFFSET UNITYSDK_OFFSET(0x9493520)
#define NEWTONSOFT_JSON_JSONWRITER_GET_TOP_OFFSET UNITYSDK_OFFSET(0x947F340)
#define NEWTONSOFT_JSON_JSONWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x9493530)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CONTAINERPATH_OFFSET UNITYSDK_OFFSET(0x94935D0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9493660)
#define NEWTONSOFT_JSON_JSONWRITER_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x94937A0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x94937B0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x9493820)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x9493830)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x94938A0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x94938B0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x9493920)
#define NEWTONSOFT_JSON_JSONWRITER_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x9493930)
#define NEWTONSOFT_JSON_JSONWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x94939B0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94939C0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94939D0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9493A40)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9493A50)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x9482340)
#define NEWTONSOFT_JSON_JSONWRITER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x9493A60)
#define NEWTONSOFT_JSON_JSONWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9493A70)
#define NEWTONSOFT_JSON_JSONWRITER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET UNITYSDK_OFFSET(0x9491520)
#define NEWTONSOFT_JSON_JSONWRITER_PUSH_OFFSET UNITYSDK_OFFSET(0x9493AA0)
#define NEWTONSOFT_JSON_JSONWRITER_POP_OFFSET UNITYSDK_OFFSET(0x948D8B0)
#define NEWTONSOFT_JSON_JSONWRITER_PEEK_OFFSET UNITYSDK_OFFSET(0x948D550)
#define NEWTONSOFT_JSON_JSONWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9493C40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x9493D40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECT_OFFSET UNITYSDK_OFFSET(0x9493DA0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x9493DC0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAY_OFFSET UNITYSDK_OFFSET(0x9493DF0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9493E00)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9493E30)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9493E40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9493EA0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x9493EC0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x9493F80)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x948BAA0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x9493FF0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x9494750)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x9494760)
#define NEWTONSOFT_JSON_JSONWRITER_ISWRITETOKENINCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9494B60)
#define NEWTONSOFT_JSON_JSONWRITER_CALCULATEWRITETOKENINITIALDEPTH_OFFSET UNITYSDK_OFFSET(0x9494A30)
#define NEWTONSOFT_JSON_JSONWRITER_CALCULATEWRITETOKENFINALDEPTH_OFFSET UNITYSDK_OFFSET(0x9494C10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATE_OFFSET UNITYSDK_OFFSET(0x9494AA0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x9493ED0)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x9493CC0)
#define NEWTONSOFT_JSON_JSONWRITER_GETCLOSETOKENFORTYPE_OFFSET UNITYSDK_OFFSET(0x948D980)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETECLOSE_OFFSET UNITYSDK_OFFSET(0x9494C80)
#define NEWTONSOFT_JSON_JSONWRITER_CALCULATELEVELSTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x948D7B0)
#define NEWTONSOFT_JSON_JSONWRITER_UPDATECURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x948DDB0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x9494D20)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x9494D30)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITER_OFFSET UNITYSDK_OFFSET(0x9494D40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACE_OFFSET UNITYSDK_OFFSET(0x9494D50)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9494D60)
#define NEWTONSOFT_JSON_JSONWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x9494F80)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x9494FC0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9494FE0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUE_OFFSET UNITYSDK_OFFSET(0x9495000)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495050)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495070)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495090)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x94950B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x94950D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x94950F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495110)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495130)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495150)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495170)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495190)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x94951B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x94951D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x94951F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495210)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495230)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495250)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495270)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495290)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495310)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495390)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495410)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495490)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495510)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495590)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495610)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495690)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495710)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495790)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495810)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495890)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495910)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495990)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495A10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495A90)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495B10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495B40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495BD0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x9497130)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9497150)
#define NEWTONSOFT_JSON_JSONWRITER_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9497210)
#define NEWTONSOFT_JSON_JSONWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9497270)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9495CE0)
#define NEWTONSOFT_JSON_JSONWRITER_RESOLVECONVERTIBLEVALUE_OFFSET UNITYSDK_OFFSET(0x9492C40)
#define NEWTONSOFT_JSON_JSONWRITER_CREATEUNSUPPORTEDTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9492DC0)
#define NEWTONSOFT_JSON_JSONWRITER_SETWRITESTATE_OFFSET UNITYSDK_OFFSET(0x94972A0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEEND_OFFSET UNITYSDK_OFFSET(0x9493DB0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9493E70)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITERAW_OFFSET UNITYSDK_OFFSET(0x9494FF0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTART_OFFSET UNITYSDK_OFFSET(0x9493D70)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9494FA0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x94971B0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x9497140)
#define NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITPROPERTY|11_0_OFFSET UNITYSDK_OFFSET(0x948DA20)
#define NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITINDENT|11_1_OFFSET UNITYSDK_OFFSET(0x948DB50)
#define NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITEND|11_2_OFFSET UNITYSDK_OFFSET(0x948DC90)
#define NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITREMAINING|11_3_OFFSET UNITYSDK_OFFSET(0x9497470)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonWriter_TypeDefinitionIndex = 31787;

	class JsonWriter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* StateArray; // 0x0
		::Il2CppArray<::System::Object*>* StateArrayTemplate; // 0x8
		Il2CppObject* _stack; // 0x10
		::Newtonsoft::Json::JsonPosition* _currentPosition; // 0x18
		State* _currentState; // 0x30
		::Newtonsoft::Json::Formatting* _formatting; // 0x34
		::System::Boolean _CloseOutput_k__BackingField; // 0x38
		::System::Boolean _AutoCompleteOnClose_k__BackingField; // 0x39
		::Newtonsoft::Json::DateFormatHandling* _dateFormatHandling; // 0x3C
		::Newtonsoft::Json::DateTimeZoneHandling* _dateTimeZoneHandling; // 0x40
		::Newtonsoft::Json::StringEscapeHandling* _stringEscapeHandling; // 0x44
		::Newtonsoft::Json::FloatFormatHandling* _floatFormatHandling; // 0x48
		::System::String* _dateFormatString; // 0x50
		::System::Globalization::CultureInfo* _culture; // 0x58

		::System::Threading::Tasks::Task* AutoCompleteAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* AutoCompleteAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* CloseAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CLOSEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIndentAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueDelimiterAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteIndentSpaceAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteRawAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAWASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndInternalAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDINTERNALASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* InternalWriteEndAsync(::Newtonsoft::Json::JsonContainerType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonContainerType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndArrayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndConstructorAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTORASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEndObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteNullAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITENULLASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WritePropertyNameAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAMEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WritePropertyNameAsync(::System::String* str, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAMEASYNC_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* InternalWritePropertyNameAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAMEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteStartArrayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* InternalWriteStartAsync(::Newtonsoft::Json::JsonToken* arg, ::Newtonsoft::Json::JsonContainerType* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::Newtonsoft::Json::JsonContainerType*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTARTASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteCommentAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENTASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* InternalWriteCommentAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteRawValueAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteStartConstructorAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTORASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteStartObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Object*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKENASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteTokenSyncReadingAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKENSYNCREADINGASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteConstructorDateAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Byte arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Byte, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Char arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Char, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTime* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::DateTime*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::DateTimeOffset* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::DateTimeOffset*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Decimal* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Decimal*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Double arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Double, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Single arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Single, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Guid* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Guid*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Int64 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Object* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Object*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::SByte arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::SByte, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Int16 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int16, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::TimeSpan* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::TimeSpan*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::UInt32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::UInt64 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::Uri* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Uri*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::System::UInt16 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::UInt16, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteUndefinedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteWhitespaceAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEWHITESPACEASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Threading::Tasks::Task* InternalWriteValueAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* SetWriteStateAsync(::Newtonsoft::Json::JsonToken* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonToken*, ::System::Object*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SETWRITESTATEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode*, ::System::Object*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildStateArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_BUILDSTATEARRAY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CloseOutput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CLOSEOUTPUT_OFFSET))(nullptr);
		}

		::System::Void set_CloseOutput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_CLOSEOUTPUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AutoCompleteOnClose()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_AUTOCOMPLETEONCLOSE_OFFSET))(nullptr);
		}

		::System::Void set_AutoCompleteOnClose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_AUTOCOMPLETEONCLOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Top()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_TOP_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::WriteState* get_WriteState()
		{
			return (return (::Newtonsoft::Json::WriteState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_WRITESTATE_OFFSET))(nullptr);
		}

		::System::String* get_ContainerPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CONTAINERPATH_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_PATH_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Formatting* get_Formatting()
		{
			return (return (::Newtonsoft::Json::Formatting*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_FORMATTING_OFFSET))(nullptr);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Formatting*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_FORMATTING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateFormatHandling* get_DateFormatHandling()
		{
			return (return (::Newtonsoft::Json::DateFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateTimeZoneHandling* get_DateTimeZoneHandling()
		{
			return (return (::Newtonsoft::Json::DateTimeZoneHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATETIMEZONEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateTimeZoneHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATETIMEZONEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::StringEscapeHandling* get_StringEscapeHandling()
		{
			return (return (::Newtonsoft::Json::StringEscapeHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_STRINGESCAPEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::StringEscapeHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_STRINGESCAPEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Void OnStringEscapeHandlingChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::FloatFormatHandling* get_FloatFormatHandling()
		{
			return (return (::Newtonsoft::Json::FloatFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_FLOATFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_FLOATFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::System::String* get_DateFormatString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATSTRING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATSTRING_OFFSET))(str, nullptr);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CULTURE_OFFSET))(nullptr);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_CULTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateScopeWithFinishedValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET))(nullptr);
		}

		::System::Void Push(::Newtonsoft::Json::JsonContainerType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_PUSH_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonContainerType* Pop()
		{
			return (return (::Newtonsoft::Json::JsonContainerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_POP_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonContainerType* Peek()
		{
			return (return (::Newtonsoft::Json::JsonContainerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_PEEK_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void WriteStartObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECT_OFFSET))(nullptr);
		}

		::System::Void WriteEndObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECT_OFFSET))(nullptr);
		}

		::System::Void WriteStartArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAY_OFFSET))(nullptr);
		}

		::System::Void WriteEndArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAY_OFFSET))(nullptr);
		}

		::System::Void WriteStartConstructor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(str, nullptr);
		}

		::System::Void WriteEndConstructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void WritePropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void WritePropertyName(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET))(nullptr);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonToken* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsWriteTokenIncomplete(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_ISWRITETOKENINCOMPLETE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CalculateWriteTokenInitialDepth(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CALCULATEWRITETOKENINITIALDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateWriteTokenFinalDepth(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CALCULATEWRITETOKENFINALDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void WriteConstructorDate(::Newtonsoft::Json::JsonReader* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonContainerType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET))(arg, nullptr);
		}

		::System::Void AutoCompleteAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEALL_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonToken* GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType* arg)
		{
			return (return (::Newtonsoft::Json::JsonToken*(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GETCLOSETOKENFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void AutoCompleteClose(::Newtonsoft::Json::JsonContainerType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETECLOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateLevelsToComplete(::Newtonsoft::Json::JsonContainerType* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CALCULATELEVELSTOCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCurrentState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_UPDATECURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIndent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENT_OFFSET))(nullptr);
		}

		::System::Void WriteValueDelimiter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITER_OFFSET))(nullptr);
		}

		::System::Void WriteIndentSpace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACE_OFFSET))(nullptr);
		}

		::System::Void AutoComplete(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITENULL_OFFSET))(nullptr);
		}

		::System::Void WriteUndefined()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINED_OFFSET))(nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteRawValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTimeOffset* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ResolveConvertibleValue(::System::IConvertible* arg, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::System::IConvertible*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_RESOLVECONVERTIBLEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::JsonWriterException*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CREATEUNSUPPORTEDTYPEEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWriteState(::Newtonsoft::Json::JsonToken* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SETWRITESTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalWriteEnd(::Newtonsoft::Json::JsonContainerType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEEND_OFFSET))(arg, nullptr);
		}

		::System::Void InternalWritePropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void InternalWriteRaw()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITERAW_OFFSET))(nullptr);
		}

		::System::Void InternalWriteStart(::Newtonsoft::Json::JsonToken* arg, ::Newtonsoft::Json::JsonContainerType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::Newtonsoft::Json::JsonContainerType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalWriteValue(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void InternalWriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void InternalWriteComment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENT_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitProperty|11_0(::System::Threading::Tasks::Task* arg, ::System::Int32 arg, ::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Int32, ::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITPROPERTY|11_0_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitIndent|11_1(::System::Threading::Tasks::Task* arg, ::System::Int32 arg, ::Newtonsoft::Json::JsonToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Int32, ::Newtonsoft::Json::JsonToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITINDENT|11_1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitEnd|11_2(::System::Threading::Tasks::Task* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITEND|11_2_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* _InternalWriteEndAsync_g__AwaitRemaining|11_3(::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER__INTERNALWRITEENDASYNC_G__AWAITREMAINING|11_3_OFFSET))(arg, arg, nullptr);
		}

	};
}

