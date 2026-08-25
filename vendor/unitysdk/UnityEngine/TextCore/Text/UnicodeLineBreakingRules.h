#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class UnicodeLineBreakingRules; }
namespace UnityEngine { class TextAsset; }

#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_LEADINGCHARACTERSLOOKUP_OFFSET UNITYSDK_OFFSET(0xA2E5350)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_FOLLOWINGCHARACTERSLOOKUP_OFFSET UNITYSDK_OFFSET(0xA2E5410)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_LOADLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0xA2E2090)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2E54D0)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E2080)
#define UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2E5590)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int UnicodeLineBreakingRules_TypeDefinitionIndex = 35616;

	class UnicodeLineBreakingRules : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* s_Instance; // 0x0
		::UnityEngine::TextAsset* m_UnicodeLineBreakingRules; // 0x10
		::UnityEngine::TextAsset* m_LeadingCharacters; // 0x18
		::UnityEngine::TextAsset* m_FollowingCharacters; // 0x20
		::System::Boolean m_UseModernHangulLineBreakingRules; // 0x28
		Il2CppObject* s_LeadingCharactersLookup; // 0x8
		Il2CppObject* s_FollowingCharactersLookup; // 0x10

		Il2CppObject* get_leadingCharactersLookup()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_LEADINGCHARACTERSLOOKUP_OFFSET))(nullptr);
		}

		Il2CppObject* get_followingCharactersLookup()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GET_FOLLOWINGCHARACTERSLOOKUP_OFFSET))(nullptr);
		}

		::System::Void LoadLineBreakingRules()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_LOADLINEBREAKINGRULES_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacters(::UnityEngine::TextAsset* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::TextAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_GETCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_UNICODELINEBREAKINGRULES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

