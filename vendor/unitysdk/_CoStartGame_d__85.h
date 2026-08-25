#pragma once
#include "unitysdk.h"

class <>c__DisplayClass85_0;
namespace MX::MinigameShooting { class MGSManager; }
namespace MX::MinigameShooting { class MGSSetting; }
class UIMinigameShooting;

#define <COSTARTGAME>D__85_.CTOR_OFFSET UNITYSDK_OFFSET(0x1477CD0)
#define <COSTARTGAME>D__85_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1479710)
#define <COSTARTGAME>D__85_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1479720)
#define <COSTARTGAME>D__85_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147A9C0)
#define <COSTARTGAME>D__85_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x147A9D0)
#define <COSTARTGAME>D__85_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147AA20)

	inline static constexpr unsigned int <CoStartGame>d__85_TypeDefinitionIndex = 15154;

	class <CoStartGame>d__85 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass85_0* __8__1; // 0x20
		::MX::MinigameShooting::MGSManager* __4__this; // 0x28
		::MX::MinigameShooting::MGSSetting* setting; // 0x30
		UIMinigameShooting* _ui_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSTARTGAME>D__85_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTGAME>D__85_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTGAME>D__85_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTGAME>D__85_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTGAME>D__85_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTGAME>D__85_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

