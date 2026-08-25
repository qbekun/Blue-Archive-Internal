#pragma once
#include "unitysdk.h"

class UIMinigameDefense_StageList;
class UIMinigameDefense_StageList_Unit;

#define <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_.CTOR_OFFSET UNITYSDK_OFFSET(0xA62280)
#define <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA63B30)
#define <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA63B40)
#define <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA63EF0)
#define <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA63F00)
#define <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA63F50)

	inline static constexpr unsigned int <Co_ShowEarningStageClearStar>d__24_TypeDefinitionIndex = 527;

	class <Co_ShowEarningStageClearStar>d__24 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIMinigameDefense_StageList* __4__this; // 0x20
		UIMinigameDefense_StageList_Unit* _stageListItem_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWEARNINGSTAGECLEARSTAR>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

