#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_JSON_JSON_DECODE_OFFSET UNITYSDK_OFFSET(0x89E7A0)
#define BESTHTTP_JSON_JSON_DECODE_OFFSET UNITYSDK_OFFSET(0x89E7E0)
#define BESTHTTP_JSON_JSON_ENCODE_OFFSET UNITYSDK_OFFSET(0x89E940)
#define BESTHTTP_JSON_JSON_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x89EC30)
#define BESTHTTP_JSON_JSON_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x89F320)
#define BESTHTTP_JSON_JSON_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x89E820)
#define BESTHTTP_JSON_JSON_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x89F060)
#define BESTHTTP_JSON_JSON_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x89F480)
#define BESTHTTP_JSON_JSON_GETLASTINDEXOFNUMBER_OFFSET UNITYSDK_OFFSET(0x89F6D0)
#define BESTHTTP_JSON_JSON_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x89F640)
#define BESTHTTP_JSON_JSON_LOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x89F040)
#define BESTHTTP_JSON_JSON_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x89ED70)
#define BESTHTTP_JSON_JSON_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x89E9D0)
#define BESTHTTP_JSON_JSON_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x89F9B0)
#define BESTHTTP_JSON_JSON_SERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x89FCA0)
#define BESTHTTP_JSON_JSON_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x89F760)
#define BESTHTTP_JSON_JSON_SERIALIZENUMBER_OFFSET UNITYSDK_OFFSET(0x89FE70)
#define BESTHTTP_JSON_JSON_.CTOR_OFFSET UNITYSDK_OFFSET(0x89FF20)

namespace BestHTTP::JSON
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 23300;

	class Json : public Il2CppObject
	{
	public:
		::System::Int32 TOKEN_NONE; // 0x0
		::System::Int32 TOKEN_CURLY_OPEN; // 0x0
		::System::Int32 TOKEN_CURLY_CLOSE; // 0x0
		::System::Int32 TOKEN_SQUARED_OPEN; // 0x0
		::System::Int32 TOKEN_SQUARED_CLOSE; // 0x0
		::System::Int32 TOKEN_COLON; // 0x0
		::System::Int32 TOKEN_COMMA; // 0x0
		::System::Int32 TOKEN_STRING; // 0x0
		::System::Int32 TOKEN_NUMBER; // 0x0
		::System::Int32 TOKEN_TRUE; // 0x0
		::System::Int32 TOKEN_FALSE; // 0x0
		::System::Int32 TOKEN_NULL; // 0x0
		::System::Int32 BUILDER_CAPACITY; // 0x0

		::System::Object* Decode(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_DECODE_OFFSET))(str, nullptr);
		}

		::System::Object* Decode(::System::String* str, bool&* arg)
		{
			return (return (::System::Object*(*)(::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_DECODE_OFFSET))(str, arg, nullptr);
		}

		::System::String* Encode(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_ENCODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ParseObject(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, bool&* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_PARSEOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ParseArray(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, bool&* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_PARSEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ParseValue(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, bool&* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_PARSEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ParseString(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_PARSESTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double ParseNumber(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, bool&* arg)
		{
			return (return (::System::Double(*)(::Il2CppArray<::System::Object*>*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_PARSENUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetLastIndexOfNumber(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_GETLASTINDEXOFNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EatWhitespace(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_EATWHITESPACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LookAhead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_LOOKAHEAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 NextToken(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_NEXTTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SerializeValue(::System::Object* arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_SERIALIZEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SerializeObject(::System::Collections::IDictionary* arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IDictionary*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_SERIALIZEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SerializeArray(::System::Collections::IList* arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IList*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_SERIALIZEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SerializeString(::System::String* str, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_SERIALIZESTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean SerializeNumber(::System::Double arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_SERIALIZENUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_JSON_.CTOR_OFFSET))(nullptr);
		}

	};
}

