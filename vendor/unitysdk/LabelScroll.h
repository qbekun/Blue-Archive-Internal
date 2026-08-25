#pragma once
#include "unitysdk.h"

class UILabel;
class Pivot;
class UIPanel;
namespace UnityEngine { class Vector2; }

#define LABELSCROLL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2056BC0)
#define LABELSCROLL_SCROLLTEXT_OFFSET UNITYSDK_OFFSET(0x2056FC0)
#define LABELSCROLL_TESTSHORT_OFFSET UNITYSDK_OFFSET(0x2057060)
#define LABELSCROLL_SETTEXT_OFFSET UNITYSDK_OFFSET(0x20570A0)
#define LABELSCROLL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20572C0)
#define LABELSCROLL_ENSUREREADY_OFFSET UNITYSDK_OFFSET(0x2056D10)
#define LABELSCROLL_TESTLONG_OFFSET UNITYSDK_OFFSET(0x20573A0)
#define LABELSCROLL_SETANDSCROLLIFNEED_OFFSET UNITYSDK_OFFSET(0x20571E0)
#define LABELSCROLL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20573F0)
#define LABELSCROLL_TRYSTOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x20571A0)
#define LABELSCROLL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2057420)
#define LABELSCROLL_ALIGNTEXT_OFFSET UNITYSDK_OFFSET(0x2056DA0)

	inline static constexpr unsigned int LabelScroll_TypeDefinitionIndex = 3347;

	class LabelScroll : public Il2CppObject
	{
	public:
		UILabel* label; // 0x18
		::System::Single speed; // 0x20
		::System::Int32 loopSpacing; // 0x24
		::System::Single pauseOnStart; // 0x28
		::System::Single marginLeft; // 0x2C
		::System::Single marginRight; // 0x30
		::System::Single marginTop; // 0x34
		::System::Single marginBottom; // 0x38
		Pivot* alignmentOnShortText; // 0x3C
		::System::UInt32 localizeHash; // 0x40
		UIPanel* uiPanel; // 0x48
		::System::Collections::IEnumerator* scrollCoroutine; // 0x50
		::System::String* textSaved; // 0x58

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ScrollText(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_SCROLLTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void TestShort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_TESTSHORT_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_SETTEXT_OFFSET))(str, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void EnsureReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_ENSUREREADY_OFFSET))(nullptr);
		}

		::System::Void TestLong()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_TESTLONG_OFFSET))(nullptr);
		}

		::System::Void SetAndScrollIfNeed(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_SETANDSCROLLIFNEED_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void TryStopCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_TRYSTOPCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_ONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* AlignText(Pivot* arg)
		{
			return ((::UnityEngine::Vector2*(*)(Pivot*, ::PVOID))((::PBYTE)hIl2Cpp + LABELSCROLL_ALIGNTEXT_OFFSET))(arg, nullptr);
		}

	};

