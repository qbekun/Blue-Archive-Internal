#pragma once
#include "unitysdk.h"

class UIEventContentClueBaseView;
class <>c__DisplayClass61_0;

#define <CO_CLAIMROUNDREWARDFLOW>D__61_.CTOR_OFFSET UNITYSDK_OFFSET(0x2498E80)
#define <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2498EA0)
#define <CO_CLAIMROUNDREWARDFLOW>D__61_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2498EB0)
#define <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2499290)
#define <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24992A0)
#define <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24992F0)

	inline static constexpr unsigned int <Co_ClaimRoundRewardFlow>d__61_TypeDefinitionIndex = 5750;

	class <Co_ClaimRoundRewardFlow>d__61 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventContentClueBaseView* __4__this; // 0x20
		<>c__DisplayClass61_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CLAIMROUNDREWARDFLOW>D__61_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CLAIMROUNDREWARDFLOW>D__61_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CLAIMROUNDREWARDFLOW>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

