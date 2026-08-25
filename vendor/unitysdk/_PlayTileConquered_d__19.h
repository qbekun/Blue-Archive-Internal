#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
class ConquestEventDisplayer;
class <>c__DisplayClass19_0;

#define <PLAYTILECONQUERED>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCB70)
#define <PLAYTILECONQUERED>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDCB90)
#define <PLAYTILECONQUERED>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BDCBA0)
#define <PLAYTILECONQUERED>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDD1C0)
#define <PLAYTILECONQUERED>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BDD1D0)
#define <PLAYTILECONQUERED>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDD220)

	inline static constexpr unsigned int <PlayTileConquered>d__19_TypeDefinitionIndex = 1484;

	class <PlayTileConquered>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* displayInfo; // 0x20
		ConquestEventDisplayer* __4__this; // 0x28
		<>c__DisplayClass19_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYTILECONQUERED>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTILECONQUERED>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTILECONQUERED>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTILECONQUERED>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTILECONQUERED>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTILECONQUERED>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

