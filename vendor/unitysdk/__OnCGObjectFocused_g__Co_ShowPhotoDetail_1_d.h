#pragma once
#include "unitysdk.h"

class <>c__DisplayClass18_0;

#define <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A2670)
#define <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24A2690)
#define <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24A26A0)
#define <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A3240)
#define <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24A3250)
#define <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A32A0)

	inline static constexpr unsigned int <<OnCGObjectFocused>g__Co_ShowPhotoDetail|1>d_TypeDefinitionIndex = 5785;

	class <<OnCGObjectFocused>g__Co_ShowPhotoDetail|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass18_0* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCGOBJECTFOCUSED>G__CO_SHOWPHOTODETAIL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

