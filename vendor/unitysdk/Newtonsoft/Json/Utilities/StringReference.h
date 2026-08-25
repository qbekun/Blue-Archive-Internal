#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x94B7B20)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_CHARS_OFFSET UNITYSDK_OFFSET(0x94B7B50)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x94B7B60)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x94B7B70)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B7B80)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94B7BB0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringReference_TypeDefinitionIndex = 31896;

	class StringReference : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _chars; // 0x10
		::System::Int32 _startIndex; // 0x18
		::System::Int32 _length; // 0x1C

		::System::Char get_Item(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Chars()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_CHARS_OFFSET))(nullptr);
		}

		::System::Int32 get_StartIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_STARTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

