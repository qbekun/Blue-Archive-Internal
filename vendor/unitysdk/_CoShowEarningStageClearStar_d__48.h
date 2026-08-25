#pragma once
#include "unitysdk.h"

class UIWeekDungeonStageSelect;

#define <COSHOWEARNINGSTAGECLEARSTAR>D__48_.CTOR_OFFSET UNITYSDK_OFFSET(0xBCDDF0)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCEBB0)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBCEBC0)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBCEE50)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBCEE60)
#define <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBCEEB0)

	inline static constexpr unsigned int <CoShowEarningStageClearStar>d__48_TypeDefinitionIndex = 8653;

	class <CoShowEarningStageClearStar>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIWeekDungeonStageSelect* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__48_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWEARNINGSTAGECLEARSTAR>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

