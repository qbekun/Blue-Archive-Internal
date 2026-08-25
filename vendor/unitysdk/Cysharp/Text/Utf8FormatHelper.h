#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_UTF8FORMATHELPER_FORMATTORIGHTJUSTIFY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_UTF8FORMATHELPER_FORMATTO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Text
{
	inline static constexpr unsigned int Utf8FormatHelper_TypeDefinitionIndex = 34673;

	class Utf8FormatHelper : public Il2CppObject
	{
	public:
		::System::Byte sp; // 0x0

		::System::Void FormatToRightJustify(Il2CppObject&* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Buffers::StandardFormat* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::System::Int32, ::System::Buffers::StandardFormat*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF8FORMATHELPER_FORMATTORIGHTJUSTIFY_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void FormatTo(Il2CppObject&* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Buffers::StandardFormat* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::System::Int32, ::System::Buffers::StandardFormat*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_UTF8FORMATHELPER_FORMATTO_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

	};
}

