#pragma once
#include "unitysdk.h"

class <>c__DisplayClass42_0;

#define <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xED9320)
#define <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xED9450)
#define <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xED9460)
#define <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xED94F0)
#define <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xED9500)
#define <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xED9550)

	inline static constexpr unsigned int <<CoExecute>g__CoLoadDesignLevel|2>d_TypeDefinitionIndex = 10957;

	class <<CoExecute>g__CoLoadDesignLevel|2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass42_0* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COEXECUTE>G__COLOADDESIGNLEVEL|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

