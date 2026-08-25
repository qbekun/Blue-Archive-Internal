#pragma once
#include "unitysdk.h"

class UIEchelonInfo;
class <>c__DisplayClass78_0;

#define <INITFIXEDSTRATEGYECHELON>D__78_.CTOR_OFFSET UNITYSDK_OFFSET(0x24EA490)
#define <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24F3B90)
#define <INITFIXEDSTRATEGYECHELON>D__78_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24F3BA0)
#define <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24F4580)
#define <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24F4590)
#define <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24F45E0)

	inline static constexpr unsigned int <InitFixedStrategyEchelon>d__78_TypeDefinitionIndex = 6027;

	class <InitFixedStrategyEchelon>d__78 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEchelonInfo* __4__this; // 0x20
		::System::Int64 entityId; // 0x28
		<>c__DisplayClass78_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <INITFIXEDSTRATEGYECHELON>D__78_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITFIXEDSTRATEGYECHELON>D__78_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITFIXEDSTRATEGYECHELON>D__78_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

