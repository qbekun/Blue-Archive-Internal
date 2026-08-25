#pragma once
#include "unitysdk.h"

namespace MXField::UI { class UIFieldHUD_MasteryInfo; }
namespace MXField::Shared::Data { class FieldMasteryData; }

#define <COREFRESHEXPWIDGETS>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0xE938F0)
#define <COREFRESHEXPWIDGETS>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE944B0)
#define <COREFRESHEXPWIDGETS>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE944C0)
#define <COREFRESHEXPWIDGETS>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE94910)
#define <COREFRESHEXPWIDGETS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE94920)
#define <COREFRESHEXPWIDGETS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE94970)

	inline static constexpr unsigned int <CoRefreshExpWidgets>d__18_TypeDefinitionIndex = 10690;

	class <CoRefreshExpWidgets>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::UI::UIFieldHUD_MasteryInfo* __4__this; // 0x20
		::System::Int32 newLevel; // 0x28
		::System::Int64 newExp; // 0x30
		::System::String* _levelText_5__2; // 0x38
		::System::Int64 _seasonId_5__3; // 0x40
		::System::Int64 _currentLevel_5__4; // 0x48
		::System::Single _currentExp_5__5; // 0x50
		::MXField::Shared::Data::FieldMasteryData* _masteryData_5__6; // 0x58
		::System::Single _expDiff_5__7; // 0x60
		::System::Int64 _maxExp_5__8; // 0x68
		::System::Single _restExp_5__9; // 0x70

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHEXPWIDGETS>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHEXPWIDGETS>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHEXPWIDGETS>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHEXPWIDGETS>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHEXPWIDGETS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHEXPWIDGETS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

