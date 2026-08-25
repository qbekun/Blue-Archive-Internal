#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath { class PathFilter; }
namespace Newtonsoft::Json { class JsonException; }
namespace Newtonsoft::Json::Linq::JsonPath { class QueryExpression; }
namespace Newtonsoft::Json::Linq::JsonPath { class QueryOperator; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_GET_FILTERS_OFFSET UNITYSDK_OFFSET(0x9523E70)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9523E80)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEMAIN_OFFSET UNITYSDK_OFFSET(0x9523F40)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEPATH_OFFSET UNITYSDK_OFFSET(0x9524170)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_CREATEPATHFILTER_OFFSET UNITYSDK_OFFSET(0x95247D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEINDEXER_OFFSET UNITYSDK_OFFSET(0x9524860)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEARRAYINDEXER_OFFSET UNITYSDK_OFFSET(0x9525090)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9524120)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUERY_OFFSET UNITYSDK_OFFSET(0x9524E70)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_TRYPARSEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x95260B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x95262C0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSESIDE_OFFSET UNITYSDK_OFFSET(0x9526380)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9525A00)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x95265D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READQUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x9527010)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READREGEXSTRING_OFFSET UNITYSDK_OFFSET(0x95272A0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_MATCH_OFFSET UNITYSDK_OFFSET(0x9526EE0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEOPERATOR_OFFSET UNITYSDK_OFFSET(0x9526A50)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUOTEDFIELD_OFFSET UNITYSDK_OFFSET(0x9524A40)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_ENSURELENGTH_OFFSET UNITYSDK_OFFSET(0x95249D0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9527440)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x95274B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9527700)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int JPath_TypeDefinitionIndex = 32070;

	class JPath : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* FloatCharacters; // 0x0
		::System::String* _expression; // 0x10
		Il2CppObject* _Filters_k__BackingField; // 0x18
		::System::Int32 _currentIndex; // 0x20

		Il2CppObject* get_Filters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_GET_FILTERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void ParseMain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEMAIN_OFFSET))(nullptr);
		}

		::System::Boolean ParsePath(Il2CppObject* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEPATH_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* CreatePathFilter(::System::String* str, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_CREATEPATHFILTER_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseIndexer(::System::Char arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEINDEXER_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseArrayIndexer(::System::Char arg)
		{
			return (return (::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEARRAYINDEXER_OFFSET))(arg, nullptr);
		}

		::System::Void EatWhitespace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EATWHITESPACE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuery(::System::Char arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUERY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseExpression(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_TRYPARSEEXPRESSION_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonException* CreateUnexpectedCharacterException()
		{
			return (return (::Newtonsoft::Json::JsonException*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_CREATEUNEXPECTEDCHARACTEREXCEPTION_OFFSET))(nullptr);
		}

		::System::Object* ParseSide()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSESIDE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryExpression* ParseExpression()
		{
			return (return (::Newtonsoft::Json::Linq::JsonPath::QueryExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEEXPRESSION_OFFSET))(nullptr);
		}

		::System::Boolean TryParseValue(::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_TRYPARSEVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* ReadQuotedString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READQUOTEDSTRING_OFFSET))(nullptr);
		}

		::System::String* ReadRegexString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READREGEXSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_MATCH_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* ParseOperator()
		{
			return (return (::Newtonsoft::Json::Linq::JsonPath::QueryOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEOPERATOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuotedField(::System::Char arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUOTEDFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureLength(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_ENSURELENGTH_OFFSET))(str, nullptr);
		}

		Il2CppObject* Evaluate(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Evaluate(Il2CppObject* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

