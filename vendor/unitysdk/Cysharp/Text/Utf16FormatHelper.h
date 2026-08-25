#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_UTF16FORMATHELPER_FORMATTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_UTF16FORMATHELPER_FORMATTORIGHTJUSTIFY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Text
{
	inline static constexpr unsigned int Utf16FormatHelper_TypeDefinitionIndex = 34672;

	class Utf16FormatHelper : public Il2CppObject
	{
	public:
		::System::Char sp; // 0x0

		::System::Void FormatTo(Il2CppObject&* arg, Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16FORMATHELPER_FORMATTO_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void FormatToRightJustify(Il2CppObject&* arg, Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF16FORMATHELPER_FORMATTORIGHTJUSTIFY_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

	};
}

