#pragma once
#include "unitysdk.h"

class UIMinigameDefense_StageList;
class <>c__DisplayClass27_0;
class UIPanel;
namespace UnityEngine { class Vector3; }
class SpringPanel;

#define <SETSCROLLPOSITION>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0xA61B00)
#define <SETSCROLLPOSITION>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA64C70)
#define <SETSCROLLPOSITION>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA64C80)
#define <SETSCROLLPOSITION>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA659A0)
#define <SETSCROLLPOSITION>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA659B0)
#define <SETSCROLLPOSITION>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA65A00)

	inline static constexpr unsigned int <SetScrollPosition>d__27_TypeDefinitionIndex = 533;

	class <SetScrollPosition>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 stageUniqueId; // 0x20
		UIMinigameDefense_StageList* __4__this; // 0x28
		::System::Boolean immediate; // 0x30
		<>c__DisplayClass27_0* __8__1; // 0x38
		UIPanel* _scrollViewPanel_5__2; // 0x40
		::UnityEngine::Vector3* _targetPosition_5__3; // 0x48
		SpringPanel* _springPanel_5__4; // 0x58
		::System::Single _elapsedTime_5__5; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLPOSITION>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLPOSITION>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLPOSITION>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLPOSITION>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLPOSITION>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLPOSITION>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

