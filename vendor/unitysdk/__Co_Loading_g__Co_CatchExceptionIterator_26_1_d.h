#pragma once
#include "unitysdk.h"

#define <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xAC8280)
#define <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xACB2A0)
#define <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xACB2B0)
#define <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xACB4D0)
#define <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xACB4E0)
#define <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xACB530)

	inline static constexpr unsigned int <<Co_Loading>g__Co_CatchExceptionIterator|26_1>d_TypeDefinitionIndex = 8045;

	class <<Co_Loading>g__Co_CatchExceptionIterator|26_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::IEnumerator* enumerator; // 0x20
		Il2CppObject* finished; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_CATCHEXCEPTIONITERATOR|26_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

