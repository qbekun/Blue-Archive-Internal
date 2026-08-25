#pragma once
#include "unitysdk.h"

class <>c__DisplayClass4_0;

#define <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D100F0)
#define <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D10180)
#define <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D10190)
#define <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D10330)
#define <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D10340)
#define <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D10390)

	inline static constexpr unsigned int <Co_RequestEventContentDiceRaceLobby>d__4_TypeDefinitionIndex = 1607;

	class <Co_RequestEventContentDiceRaceLobby>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 eventContentId; // 0x20
		<>c__DisplayClass4_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTDICERACELOBBY>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

