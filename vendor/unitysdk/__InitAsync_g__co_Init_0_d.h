#pragma once
#include "unitysdk.h"

class <>c__DisplayClass112_0;

#define <<INITASYNC>G__CO_INIT|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB8270)
#define <<INITASYNC>G__CO_INIT|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB8290)
#define <<INITASYNC>G__CO_INIT|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDB82F0)
#define <<INITASYNC>G__CO_INIT|0>D___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDB8FA0)
#define <<INITASYNC>G__CO_INIT|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB8FF0)
#define <<INITASYNC>G__CO_INIT|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDB9000)
#define <<INITASYNC>G__CO_INIT|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB9050)

	inline static constexpr unsigned int <<InitAsync>g__co_Init|0>d_TypeDefinitionIndex = 9977;

	class <<InitAsync>g__co_Init|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass112_0* __4__this; // 0x20
		Il2CppObject* __7__wrap1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<INITASYNC>G__CO_INIT|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITASYNC>G__CO_INIT|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITASYNC>G__CO_INIT|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITASYNC>G__CO_INIT|0>D___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITASYNC>G__CO_INIT|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITASYNC>G__CO_INIT|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITASYNC>G__CO_INIT|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

