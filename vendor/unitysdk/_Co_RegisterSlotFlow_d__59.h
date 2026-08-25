#pragma once
#include "unitysdk.h"

class UIEventContentClueBaseView;
class <>c__DisplayClass59_0;

#define <CO_REGISTERSLOTFLOW>D__59_.CTOR_OFFSET UNITYSDK_OFFSET(0x2498540)
#define <CO_REGISTERSLOTFLOW>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2498560)
#define <CO_REGISTERSLOTFLOW>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2498570)
#define <CO_REGISTERSLOTFLOW>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2498AF0)
#define <CO_REGISTERSLOTFLOW>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2498B00)
#define <CO_REGISTERSLOTFLOW>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2498B50)

	inline static constexpr unsigned int <Co_RegisterSlotFlow>d__59_TypeDefinitionIndex = 5747;

	class <Co_RegisterSlotFlow>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventContentClueBaseView* __4__this; // 0x20
		::System::Int32 slotId; // 0x28
		<>c__DisplayClass59_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REGISTERSLOTFLOW>D__59_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REGISTERSLOTFLOW>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REGISTERSLOTFLOW>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REGISTERSLOTFLOW>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REGISTERSLOTFLOW>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REGISTERSLOTFLOW>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

