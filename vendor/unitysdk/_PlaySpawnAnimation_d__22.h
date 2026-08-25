#pragma once
#include "unitysdk.h"

class HexaTileMapVisual;
class <>c__DisplayClass22_0;
class UICampaign;
class HexaUnitVisual;
class StrategyVisual;

#define <PLAYSPAWNANIMATION>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0xF7A070)
#define <PLAYSPAWNANIMATION>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF7C660)
#define <PLAYSPAWNANIMATION>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF7C760)
#define <PLAYSPAWNANIMATION>D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF7D640)
#define <PLAYSPAWNANIMATION>D__22___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xF7D690)
#define <PLAYSPAWNANIMATION>D__22___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0xF7D6E0)
#define <PLAYSPAWNANIMATION>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7D730)
#define <PLAYSPAWNANIMATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF7D740)
#define <PLAYSPAWNANIMATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7D790)

	inline static constexpr unsigned int <PlaySpawnAnimation>d__22_TypeDefinitionIndex = 836;

	class <PlaySpawnAnimation>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaTileMapVisual* __4__this; // 0x20
		<>c__DisplayClass22_0* __8__1; // 0x28
		UICampaign* _uiCampaign_5__2; // 0x30
		Il2CppObject* __7__wrap2; // 0x38
		HexaUnitVisual* _unitVisual_5__4; // 0x50
		Il2CppObject* __7__wrap4; // 0x58
		StrategyVisual* _strategyVisual_5__6; // 0x70
		Il2CppObject* __7__wrap6; // 0x78

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22___M__FINALLY3_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSPAWNANIMATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

