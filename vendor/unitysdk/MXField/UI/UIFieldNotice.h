#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class UIFieldNoticeContent; }

#define MXFIELD_UI_UIFIELDNOTICE_PLAYEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEA26A0)
#define MXFIELD_UI_UIFIELDNOTICE_PLAYKEYWORD_OFFSET UNITYSDK_OFFSET(0xEA29F0)
#define MXFIELD_UI_UIFIELDNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA2AC0)
#define MXFIELD_UI_UIFIELDNOTICE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xEA2AD0)
#define MXFIELD_UI_UIFIELDNOTICE___N__0_OFFSET UNITYSDK_OFFSET(0xEA2B60)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldNotice_TypeDefinitionIndex = 10744;

	class UIFieldNotice : public Il2CppObject
	{
	public:
		::MXField::UI::UIFieldNoticeContent* keywordNotice; // 0xE8
		::MXField::UI::UIFieldNoticeContent* evidenceNotice; // 0xF0

		::System::Void PlayEvidence(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICE_PLAYEVIDENCE_OFFSET))(str, str2, nullptr);
		}

		::System::Void PlayKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICE_PLAYKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICE___N__0_OFFSET))(nullptr);
		}

	};
}

