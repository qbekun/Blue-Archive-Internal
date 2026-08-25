#pragma once
#include "unitysdk.h"

#define <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CCA0)
#define <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7CCC0)
#define <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7CCD0)
#define <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7CE10)
#define <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D7CE20)
#define <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7CE70)

	inline static constexpr unsigned int <<CoShowBattleResult>g__PlayBGM|2>d_TypeDefinitionIndex = 20322;

	class <<CoShowBattleResult>g__PlayBGM|2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass9_0* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOWBATTLERESULT>G__PLAYBGM|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

