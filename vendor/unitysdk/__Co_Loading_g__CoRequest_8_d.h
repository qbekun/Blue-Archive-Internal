#pragma once
#include "unitysdk.h"

class <>c__DisplayClass29_0;
class <>c__DisplayClass29_3;

#define <<CO_LOADING>G__COREQUEST|8>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x27596B0)
#define <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2759E50)
#define <<CO_LOADING>G__COREQUEST|8>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2759E60)
#define <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275A080)
#define <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x275A090)
#define <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275A0E0)

	inline static constexpr unsigned int <<Co_Loading>g__CoRequest|8>d_TypeDefinitionIndex = 7257;

	class <<Co_Loading>g__CoRequest|8>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 eventContentId; // 0x20
		<>c__DisplayClass29_0* __4__this; // 0x28
		<>c__DisplayClass29_3* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__COREQUEST|8>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__COREQUEST|8>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__COREQUEST|8>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

