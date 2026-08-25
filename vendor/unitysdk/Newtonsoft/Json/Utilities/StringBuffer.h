#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x94B7820)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x94B7830)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x94B7840)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B7850)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B7890)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET UNITYSDK_OFFSET(0x94B78B0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET UNITYSDK_OFFSET(0x94B79B0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x94B7A70)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x94B7950)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94B7AB0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94B7AE0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_INTERNALBUFFER_OFFSET UNITYSDK_OFFSET(0x94B7B10)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringBuffer_TypeDefinitionIndex = 31895;

	class StringBuffer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x10
		::System::Int32 _position; // 0x18

		::System::Int32 get_Position()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Append(Il2CppObject* arg, ::System::Char arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Append(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureSize(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_ENSURESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_InternalBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_INTERNALBUFFER_OFFSET))(nullptr);
		}

	};
}

