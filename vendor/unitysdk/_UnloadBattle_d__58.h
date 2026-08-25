#pragma once
#include "unitysdk.h"

class <>c__DisplayClass58_0;

#define <UNLOADBATTLE>D__58_.CTOR_OFFSET UNITYSDK_OFFSET(0x26CD7B0)
#define <UNLOADBATTLE>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26D3AF0)
#define <UNLOADBATTLE>D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26D3B00)
#define <UNLOADBATTLE>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26D3E10)
#define <UNLOADBATTLE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26D3E20)
#define <UNLOADBATTLE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26D3E70)

	inline static constexpr unsigned int <UnloadBattle>d__58_TypeDefinitionIndex = 7018;

	class <UnloadBattle>d__58 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass58_0* __8__1; // 0x20
		::System::Boolean retry; // 0x28
		::System::Action* callback; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <UNLOADBATTLE>D__58_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNLOADBATTLE>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNLOADBATTLE>D__58_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNLOADBATTLE>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNLOADBATTLE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNLOADBATTLE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

