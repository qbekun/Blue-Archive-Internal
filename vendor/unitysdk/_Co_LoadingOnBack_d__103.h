#pragma once
#include "unitysdk.h"

class UIBase;
class UIManager;
class <>c__DisplayClass103_0;

#define <CO_LOADINGONBACK>D__103_.CTOR_OFFSET UNITYSDK_OFFSET(0x268C4D0)
#define <CO_LOADINGONBACK>D__103_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2692870)
#define <CO_LOADINGONBACK>D__103_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2692880)
#define <CO_LOADINGONBACK>D__103_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26930B0)
#define <CO_LOADINGONBACK>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26930C0)
#define <CO_LOADINGONBACK>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2693110)

	inline static constexpr unsigned int <Co_LoadingOnBack>d__103_TypeDefinitionIndex = 6783;

	class <Co_LoadingOnBack>d__103 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIBase* to; // 0x20
		UIManager* __4__this; // 0x28
		UIBase* from; // 0x30
		<>c__DisplayClass103_0* __8__1; // 0x38
		::System::Action* onBackFinished; // 0x40
		::System::Boolean _isClearTargetUI_5__2; // 0x48
		::System::Boolean _clearCompletely_5__3; // 0x49

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADINGONBACK>D__103_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADINGONBACK>D__103_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADINGONBACK>D__103_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADINGONBACK>D__103_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADINGONBACK>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADINGONBACK>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

