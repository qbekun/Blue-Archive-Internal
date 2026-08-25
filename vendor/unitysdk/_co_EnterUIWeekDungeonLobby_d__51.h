#pragma once
#include "unitysdk.h"

class <>c__DisplayClass51_0;
namespace FlatData { class ContentType; }

#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDCFF0)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDD010)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBDD020)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBDD370)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBDD380)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBDD3D0)

	inline static constexpr unsigned int <co_EnterUIWeekDungeonLobby>d__51_TypeDefinitionIndex = 8696;

	class <co_EnterUIWeekDungeonLobby>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass51_0* __8__1; // 0x20
		::FlatData::ContentType* category; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

