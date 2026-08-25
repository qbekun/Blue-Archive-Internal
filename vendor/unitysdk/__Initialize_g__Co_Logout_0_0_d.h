#pragma once
#include "unitysdk.h"

#define <<INITIALIZE>G__CO_LOGOUT|0_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2020E90)
#define <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2021800)
#define <<INITIALIZE>G__CO_LOGOUT|0_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2021810)
#define <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2022AF0)
#define <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2022B00)
#define <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2022B50)

	inline static constexpr unsigned int <<Initialize>g__Co_Logout|0_0>d_TypeDefinitionIndex = 3179;

	class <<Initialize>g__Co_Logout|0_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<INITIALIZE>G__CO_LOGOUT|0_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITIALIZE>G__CO_LOGOUT|0_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITIALIZE>G__CO_LOGOUT|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

