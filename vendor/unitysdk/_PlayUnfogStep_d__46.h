#pragma once
#include "unitysdk.h"

class ConquestTileMapVisual;
class <>c__DisplayClass46_0;

#define <PLAYUNFOGSTEP>D__46_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D07430)
#define <PLAYUNFOGSTEP>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D07450)
#define <PLAYUNFOGSTEP>D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D074B0)
#define <PLAYUNFOGSTEP>D__46___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1D07C00)
#define <PLAYUNFOGSTEP>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D07C50)
#define <PLAYUNFOGSTEP>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D07C60)
#define <PLAYUNFOGSTEP>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D07CB0)

	inline static constexpr unsigned int <PlayUnfogStep>d__46_TypeDefinitionIndex = 1568;

	class <PlayUnfogStep>d__46 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestTileMapVisual* __4__this; // 0x20
		::System::Int32 step; // 0x28
		<>c__DisplayClass46_0* __8__1; // 0x30
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNFOGSTEP>D__46_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNFOGSTEP>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNFOGSTEP>D__46_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNFOGSTEP>D__46___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNFOGSTEP>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNFOGSTEP>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNFOGSTEP>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

