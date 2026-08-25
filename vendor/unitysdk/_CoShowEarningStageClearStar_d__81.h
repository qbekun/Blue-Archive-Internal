#pragma once
#include "unitysdk.h"

class UIStageSelect;
class UIStageSelectItemActive;

#define <COSHOWEARNINGSTAGECLEARSTAR>D__81_.CTOR_OFFSET UNITYSDK_OFFSET(0xB216F0)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB231E0)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__81_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB231F0)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB23630)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB23640)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB23690)

	inline static constexpr unsigned int <CoShowEarningStageClearStar>d__81_TypeDefinitionIndex = 8248;

	class <CoShowEarningStageClearStar>d__81 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIStageSelect* __4__this; // 0x20
		UIStageSelectItemActive* _item_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__81_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__81_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

