#pragma once
#include "unitysdk.h"

class GameMain;

#define <INITAPPINTOOL>D__166_.CTOR_OFFSET UNITYSDK_OFFSET(0xC74D70)
#define <INITAPPINTOOL>D__166_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC76090)
#define <INITAPPINTOOL>D__166_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC760A0)
#define <INITAPPINTOOL>D__166_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC76470)
#define <INITAPPINTOOL>D__166_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC76480)
#define <INITAPPINTOOL>D__166_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC764D0)

	inline static constexpr unsigned int <InitAppInTool>d__166_TypeDefinitionIndex = 9023;

	class <InitAppInTool>d__166 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		GameMain* __4__this; // 0x20
		::System::Boolean useSound; // 0x28
		::System::Boolean useAddressableInit; // 0x29
		::System::Boolean useAppRepository; // 0x2A

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <INITAPPINTOOL>D__166_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITAPPINTOOL>D__166_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITAPPINTOOL>D__166_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITAPPINTOOL>D__166_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITAPPINTOOL>D__166_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITAPPINTOOL>D__166_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

