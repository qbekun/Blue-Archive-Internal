#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD9730)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9AD9770)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9AD9780)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9AD9790)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9AD97A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9AD97B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9AD97C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9AD97D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9AD9800)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETLEFTSUBSTRING_OFFSET UNITYSDK_OFFSET(0x9AD9830)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETRIGHTSUBSTRING_OFFSET UNITYSDK_OFFSET(0x9AD98B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD9940)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Capture_TypeDefinitionIndex = 29203;

	class Capture : public Il2CppObject
	{
	public:
		::System::Int32 _Index_k__BackingField; // 0x10
		::System::Int32 _Length_k__BackingField; // 0x14
		::System::String* _Text_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_Length(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_SET_LENGTH_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* GetLeftSubstring()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETLEFTSUBSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* GetRightSubstring()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETRIGHTSUBSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_.CTOR_OFFSET))(nullptr);
		}

	};
}

