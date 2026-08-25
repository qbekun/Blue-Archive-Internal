#pragma once
#include "unitysdk.h"

class <>c__DisplayClass15_0;
namespace UnityEngine { class WaitForEndOfFrame; }

#define <<SETDATA>G__YIELDREPOSITION|3>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x22ECA10)
#define <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22ECA30)
#define <<SETDATA>G__YIELDREPOSITION|3>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22ECA40)
#define <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22ECD10)
#define <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22ECD20)
#define <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22ECD70)

	inline static constexpr unsigned int <<SetData>g__YieldReposition|3>d_TypeDefinitionIndex = 4876;

	class <<SetData>g__YieldReposition|3>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass15_0* __4__this; // 0x20
		::UnityEngine::WaitForEndOfFrame* _eof_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SETDATA>G__YIELDREPOSITION|3>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDATA>G__YIELDREPOSITION|3>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDATA>G__YIELDREPOSITION|3>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

