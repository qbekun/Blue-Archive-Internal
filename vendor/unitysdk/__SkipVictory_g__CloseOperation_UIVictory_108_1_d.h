#pragma once
#include "unitysdk.h"

class UIBattle;

#define <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x222F110)
#define <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22314F0)
#define <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2231500)
#define <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22317F0)
#define <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2231800)
#define <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2231850)

	inline static constexpr unsigned int <<SkipVictory>g__CloseOperation_UIVictory|108_1>d_TypeDefinitionIndex = 4444;

	class <<SkipVictory>g__CloseOperation_UIVictory|108_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIBattle* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SKIPVICTORY>G__CLOSEOPERATION_UIVICTORY|108_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

