#pragma once
#include "unitysdk.h"

class UIEventLobbyContentController_StageList;
class <>c__DisplayClass33_0;
class SpringPanel;

#define <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_.CTOR_OFFSET UNITYSDK_OFFSET(0x244DC20)
#define <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2450920)
#define <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2450930)
#define <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2451150)
#define <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2451160)
#define <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24511B0)

	inline static constexpr unsigned int <Co_ShowNormalSubStageDisappear>d__33_TypeDefinitionIndex = 5555;

	class <Co_ShowNormalSubStageDisappear>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventLobbyContentController_StageList* __4__this; // 0x20
		<>c__DisplayClass33_0* __8__1; // 0x28
		Il2CppObject* _stageListItemList_5__2; // 0x30
		::System::Int32 _nextIndex_5__3; // 0x38
		SpringPanel* _springPanel_5__4; // 0x40
		::System::Single _elapsedTime_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWNORMALSUBSTAGEDISAPPEAR>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

