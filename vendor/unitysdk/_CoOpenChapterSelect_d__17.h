#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignChapterInfo; }
class UIPopup_ChapterSelect;
class <>c__DisplayClass17_0;
class UIPanel;

#define <COOPENCHAPTERSELECT>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0xB19F80)
#define <COOPENCHAPTERSELECT>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1ACB0)
#define <COOPENCHAPTERSELECT>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB1ACC0)
#define <COOPENCHAPTERSELECT>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1B050)
#define <COOPENCHAPTERSELECT>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB1B060)
#define <COOPENCHAPTERSELECT>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1B0B0)

	inline static constexpr unsigned int <CoOpenChapterSelect>d__17_TypeDefinitionIndex = 8230;

	class <CoOpenChapterSelect>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::CampaignChapterInfo* chapterInfo; // 0x20
		UIPopup_ChapterSelect* __4__this; // 0x28
		<>c__DisplayClass17_0* __8__1; // 0x30
		UIPanel* _panel_5__2; // 0x38
		::System::Single _springStrength_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPENCHAPTERSELECT>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENCHAPTERSELECT>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENCHAPTERSELECT>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENCHAPTERSELECT>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENCHAPTERSELECT>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENCHAPTERSELECT>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

