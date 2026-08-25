#pragma once
#include "unitysdk.h"

#define MXTEXTCHUNK_GET_PHONETICTEXT_OFFSET UNITYSDK_OFFSET(0xC14E60)
#define MXTEXTCHUNK_SET_PHONETICTEXT_OFFSET UNITYSDK_OFFSET(0xC14E70)
#define MXTEXTCHUNK_GET_HASPHONETIC_OFFSET UNITYSDK_OFFSET(0xC14E80)
#define MXTEXTCHUNK_GET_ISNEWLINE_OFFSET UNITYSDK_OFFSET(0xC14E90)
#define MXTEXTCHUNK_SET_HASPHONETIC_OFFSET UNITYSDK_OFFSET(0xC14EA0)
#define MXTEXTCHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC14EB0)
#define MXTEXTCHUNK_SET_ISNEWLINE_OFFSET UNITYSDK_OFFSET(0xC15090)
#define MXTEXTCHUNK_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xC150A0)
#define MXTEXTCHUNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC150B0)
#define MXTEXTCHUNK_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xC15120)

	inline static constexpr unsigned int MXTextChunk_TypeDefinitionIndex = 8842;

	class MXTextChunk : public Il2CppObject
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::System::String* _PhoneticText_k__BackingField; // 0x18
		::System::Boolean _HasPhonetic_k__BackingField; // 0x20
		::System::Boolean _IsNewLine_k__BackingField; // 0x21

		::System::String* get_PhoneticText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_GET_PHONETICTEXT_OFFSET))(nullptr);
		}

		::System::Void set_PhoneticText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_SET_PHONETICTEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HasPhonetic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_GET_HASPHONETIC_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNewLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_GET_ISNEWLINE_OFFSET))(nullptr);
		}

		::System::Void set_HasPhonetic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_SET_HASPHONETIC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void set_IsNewLine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_SET_ISNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTEXTCHUNK_GET_TEXT_OFFSET))(nullptr);
		}

	};

