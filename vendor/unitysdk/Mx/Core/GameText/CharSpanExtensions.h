#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::GameText { class CharSpanSplitter; }
namespace MX::Core::GameText { class EfficientCommaSplitter; }
namespace MX::Core::GameText { class CharSpanSplitterWithParams; }

#define MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1040400)
#define MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1040410)
#define MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITCOMMA_OFFSET UNITYSDK_OFFSET(0x1040460)
#define MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITCOMMA_OFFSET UNITYSDK_OFFSET(0x1040470)
#define MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLIT_OFFSET UNITYSDK_OFFSET(0x10404C0)
#define MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLIT_OFFSET UNITYSDK_OFFSET(0x10404D0)

namespace MX::Core::GameText
{
	inline static constexpr unsigned int CharSpanExtensions_TypeDefinitionIndex = 12860;

	class CharSpanExtensions : public Il2CppObject
	{
	public:
		::MX::Core::GameText::CharSpanSplitter* SplitWhitespace(Il2CppObject* arg)
		{
			return ((::MX::Core::GameText::CharSpanSplitter*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITWHITESPACE_OFFSET))(arg, nullptr);
		}

		::MX::Core::GameText::CharSpanSplitter* SplitWhitespace(Il2CppObject* arg)
		{
			return ((::MX::Core::GameText::CharSpanSplitter*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITWHITESPACE_OFFSET))(arg, nullptr);
		}

		::MX::Core::GameText::EfficientCommaSplitter* SplitComma(Il2CppObject* arg)
		{
			return ((::MX::Core::GameText::EfficientCommaSplitter*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITCOMMA_OFFSET))(arg, nullptr);
		}

		::MX::Core::GameText::EfficientCommaSplitter* SplitComma(Il2CppObject* arg)
		{
			return ((::MX::Core::GameText::EfficientCommaSplitter*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLITCOMMA_OFFSET))(arg, nullptr);
		}

		::MX::Core::GameText::CharSpanSplitterWithParams* Split(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::MX::Core::GameText::CharSpanSplitterWithParams*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLIT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::GameText::CharSpanSplitterWithParams* Split(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::MX::Core::GameText::CharSpanSplitterWithParams*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANEXTENSIONS_SPLIT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

