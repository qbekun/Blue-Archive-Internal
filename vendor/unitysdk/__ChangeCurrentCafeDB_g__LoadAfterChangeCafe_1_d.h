#pragma once
#include "unitysdk.h"

class <>c__DisplayClass77_0;

#define <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2278540)
#define <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22787B0)
#define <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22787C0)
#define <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2278BF0)
#define <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2278C00)
#define <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2278C50)

	inline static constexpr unsigned int <<ChangeCurrentCafeDB>g__LoadAfterChangeCafe|1>d_TypeDefinitionIndex = 4627;

	class <<ChangeCurrentCafeDB>g__LoadAfterChangeCafe|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass77_0* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHANGECURRENTCAFEDB>G__LOADAFTERCHANGECAFE|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

