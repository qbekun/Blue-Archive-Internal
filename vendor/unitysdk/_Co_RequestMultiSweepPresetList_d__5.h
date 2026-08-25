#pragma once
#include "unitysdk.h"

class MultiSweepObject;
class <>c__DisplayClass5_0;

#define <CO_REQUESTMULTISWEEPPRESETLIST>D__5_.CTOR_OFFSET UNITYSDK_OFFSET(0x2709350)
#define <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27095C0)
#define <CO_REQUESTMULTISWEEPPRESETLIST>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27095D0)
#define <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2709760)
#define <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2709770)
#define <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27097C0)

	inline static constexpr unsigned int <Co_RequestMultiSweepPresetList>d__5_TypeDefinitionIndex = 7109;

	class <Co_RequestMultiSweepPresetList>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		MultiSweepObject* __4__this; // 0x20
		<>c__DisplayClass5_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMULTISWEEPPRESETLIST>D__5_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMULTISWEEPPRESETLIST>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMULTISWEEPPRESETLIST>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

