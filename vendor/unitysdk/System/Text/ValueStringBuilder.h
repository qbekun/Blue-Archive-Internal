#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_VALUESTRINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9834C50)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x983D390)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9835220)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_TRYCOPYTO_OFFSET UNITYSDK_OFFSET(0x9834E20)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_INSERT_OFFSET UNITYSDK_OFFSET(0x9834C70)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x983D740)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x983D830)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_APPENDSLOW_OFFSET UNITYSDK_OFFSET(0x983D8C0)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x983BD50)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x983BBF0)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_APPENDSPAN_OFFSET UNITYSDK_OFFSET(0x983D9E0)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_GROWANDAPPEND_OFFSET UNITYSDK_OFFSET(0x983D7B0)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_GROW_OFFSET UNITYSDK_OFFSET(0x983D3A0)
#define SYSTEM_TEXT_VALUESTRINGBUILDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x983DAA0)

namespace System::Text
{
	inline static constexpr unsigned int ValueStringBuilder_TypeDefinitionIndex = 37104;

	class ValueStringBuilder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _arrayToReturnToPool; // 0x10
		Il2CppObject* _chars; // 0x18
		::System::Int32 _pos; // 0x28

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean TryCopyTo(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_TRYCOPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Char arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_INSERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Append(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET))(str, nullptr);
		}

		::System::Void AppendSlow(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_APPENDSLOW_OFFSET))(str, nullptr);
		}

		::System::Void Append(::System::Char arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Append(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_APPEND_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AppendSpan(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_APPENDSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void GrowAndAppend(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_GROWANDAPPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Grow(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_GROW_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_VALUESTRINGBUILDER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

