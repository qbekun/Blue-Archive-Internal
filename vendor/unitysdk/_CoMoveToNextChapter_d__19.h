#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignChapterInfo; }
class UIPopup_ChapterSelect;

#define <COMOVETONEXTCHAPTER>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0xB19C20)
#define <COMOVETONEXTCHAPTER>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1B110)
#define <COMOVETONEXTCHAPTER>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB1B120)
#define <COMOVETONEXTCHAPTER>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1B5B0)
#define <COMOVETONEXTCHAPTER>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB1B5C0)
#define <COMOVETONEXTCHAPTER>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1B610)

	inline static constexpr unsigned int <CoMoveToNextChapter>d__19_TypeDefinitionIndex = 8232;

	class <CoMoveToNextChapter>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::CampaignChapterInfo* chapterInfo; // 0x20
		UIPopup_ChapterSelect* __4__this; // 0x28
		::System::Int32 _curChapterIndex_5__2; // 0x30
		::System::Int32 _nextChapterIndex_5__3; // 0x34
		::System::Single _cachedSpringStrength_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTCHAPTER>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTCHAPTER>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTCHAPTER>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTCHAPTER>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTCHAPTER>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTCHAPTER>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

