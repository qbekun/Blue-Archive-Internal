#pragma once
#include "unitysdk.h"

#define <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDA4C0)
#define <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDAF40)
#define <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCDAF50)
#define <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCDB170)
#define <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xCDB180)
#define <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCDB1D0)

	inline static constexpr unsigned int <<OnOpened>g__Co_DialogPlay|24_0>d_TypeDefinitionIndex = 9163;

	class <<OnOpened>g__Co_DialogPlay|24_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__CO_DIALOGPLAY|24_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

