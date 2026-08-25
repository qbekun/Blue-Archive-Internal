#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class StringEscapeHandling; }
namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94AD140)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_GETCHARESCAPEFLAGS_OFFSET UNITYSDK_OFFSET(0x94ADE20)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_SHOULDESCAPEJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x94ADED0)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x94ADF60)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TOESCAPEDJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x94AE7B0)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_FIRSTCHARTOESCAPE_OFFSET UNITYSDK_OFFSET(0x94AE660)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x94AEAD0)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC_OFFSET UNITYSDK_OFFSET(0x94AEC90)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC_OFFSET UNITYSDK_OFFSET(0x94AEF80)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITECHARASYNC_OFFSET UNITYSDK_OFFSET(0x94AF140)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC_OFFSET UNITYSDK_OFFSET(0x94AEE70)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEDEFINITELYESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC_OFFSET UNITYSDK_OFFSET(0x94AF260)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TRYGETDATEFROMCONSTRUCTORJSON_OFFSET UNITYSDK_OFFSET(0x94AF400)
#define NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TRYGETDATECONSTRUCTORVALUE_OFFSET UNITYSDK_OFFSET(0x94AF9B0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int JavaScriptUtils_TypeDefinitionIndex = 31869;

	class JavaScriptUtils : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SingleQuoteCharEscapeFlags; // 0x0
		::Il2CppArray<::System::Object*>* DoubleQuoteCharEscapeFlags; // 0x8
		::Il2CppArray<::System::Object*>* HtmlCharEscapeFlags; // 0x10
		::System::Int32 UnicodeTextLength; // 0x0
		::System::String* EscapedUnicodeText; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling* arg, ::System::Char arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Newtonsoft::Json::StringEscapeHandling*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_GETCHARESCAPEFLAGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldEscapeJavaScriptString(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_SHOULDESCAPEJAVASCRIPTSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteEscapedJavaScriptString(::System::IO::TextWriter* arg, ::System::String* str, ::System::Char arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::StringEscapeHandling* arg, Il2CppObject* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::String*, ::System::Char, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::StringEscapeHandling*, Il2CppObject*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRING_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* ToEscapedJavaScriptString(::System::String* str, ::System::Char arg, ::System::Boolean arg, ::Newtonsoft::Json::StringEscapeHandling* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Char, ::System::Boolean, ::Newtonsoft::Json::StringEscapeHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TOESCAPEDJAVASCRIPTSTRING_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 FirstCharToEscape(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::StringEscapeHandling* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::StringEscapeHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_FIRSTCHARTOESCAPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringAsync(::System::IO::TextWriter* arg, ::System::String* str, ::System::Char arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::StringEscapeHandling* arg, ::Newtonsoft::Json::JsonTextWriter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::TextWriter*, ::System::String*, ::System::Char, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::StringEscapeHandling*, ::Newtonsoft::Json::JsonTextWriter*, ::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGASYNC_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringWithDelimitersAsync(::System::IO::TextWriter* arg, ::System::String* str, ::System::Char arg, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::StringEscapeHandling* arg, ::Newtonsoft::Json::JsonTextWriter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::TextWriter*, ::System::String*, ::System::Char, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::StringEscapeHandling*, ::Newtonsoft::Json::JsonTextWriter*, ::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringWithDelimitersAsync(::System::Threading::Tasks::Task* arg, ::System::IO::TextWriter* arg, ::System::String* str, ::System::Char arg, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::StringEscapeHandling* arg, ::Newtonsoft::Json::JsonTextWriter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::IO::TextWriter*, ::System::String*, ::System::Char, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::StringEscapeHandling*, ::Newtonsoft::Json::JsonTextWriter*, ::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC_OFFSET))(arg, arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteCharAsync(::System::Threading::Tasks::Task* arg, ::System::IO::TextWriter* arg, ::System::Char arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::IO::TextWriter*, ::System::Char, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITECHARASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringWithoutDelimitersAsync(::System::IO::TextWriter* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::StringEscapeHandling* arg, ::Newtonsoft::Json::JsonTextWriter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::TextWriter*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::StringEscapeHandling*, ::Newtonsoft::Json::JsonTextWriter*, ::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync(::System::IO::TextWriter* arg, ::System::String* str, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::StringEscapeHandling* arg, ::Newtonsoft::Json::JsonTextWriter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::TextWriter*, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::StringEscapeHandling*, ::Newtonsoft::Json::JsonTextWriter*, ::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_WRITEDEFINITELYESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader* arg, ::System::DateTime&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonReader*, ::System::DateTime&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TRYGETDATEFROMCONSTRUCTORJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader* arg, Il2CppObject&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonReader*, Il2CppObject&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JAVASCRIPTUTILS_TRYGETDATECONSTRUCTORVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

