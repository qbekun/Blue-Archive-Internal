#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_TOUPPERFAST_OFFSET UNITYSDK_OFFSET(0xA2E51A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0xA2E5210)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_GETHASHCODECASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0xA2E1D80)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_UINTTOSTRING_OFFSET UNITYSDK_OFFSET(0xA2E5280)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextUtilities_TypeDefinitionIndex = 35615;

	class TextUtilities : public Il2CppObject
	{
	public:
		::System::Char ToUpperFast(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_TOUPPERFAST_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ToUpperASCIIFast(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCodeCaseInSensitive(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_GETHASHCODECASEINSENSITIVE_OFFSET))(str, nullptr);
		}

		::System::String* UintToString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTUTILITIES_UINTTOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

