#pragma once
#include "unitysdk.h"

class UISweepResultScrollController;
class UISweepResultSlot;

#define <COPLAYWITHONEELEMENT>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0xB2CF70)
#define <COPLAYWITHONEELEMENT>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2D330)
#define <COPLAYWITHONEELEMENT>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB2D340)
#define <COPLAYWITHONEELEMENT>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2D850)
#define <COPLAYWITHONEELEMENT>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB2D860)
#define <COPLAYWITHONEELEMENT>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2D8B0)

	inline static constexpr unsigned int <CoPlayWithOneElement>d__20_TypeDefinitionIndex = 8271;

	class <CoPlayWithOneElement>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISweepResultScrollController* __4__this; // 0x20
		::System::Action* onFinished; // 0x28
		UISweepResultSlot* _slot_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYWITHONEELEMENT>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYWITHONEELEMENT>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYWITHONEELEMENT>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYWITHONEELEMENT>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYWITHONEELEMENT>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYWITHONEELEMENT>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

