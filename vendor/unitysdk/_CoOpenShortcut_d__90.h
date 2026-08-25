#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
class UIStageSelect;
class <>c__DisplayClass90_0;

#define <COOPENSHORTCUT>D__90_.CTOR_OFFSET UNITYSDK_OFFSET(0xB1CF00)
#define <COOPENSHORTCUT>D__90_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26490)
#define <COOPENSHORTCUT>D__90_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB264A0)
#define <COOPENSHORTCUT>D__90_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB26890)
#define <COOPENSHORTCUT>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB268A0)
#define <COOPENSHORTCUT>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB268F0)

	inline static constexpr unsigned int <CoOpenShortcut>d__90_TypeDefinitionIndex = 8261;

	class <CoOpenShortcut>d__90 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::CampaignStageInfo* stageInfo; // 0x20
		UIStageSelect* __4__this; // 0x28
		<>c__DisplayClass90_0* __8__1; // 0x30
		::System::Boolean isCampaignMainStageStrategyForcely; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPENSHORTCUT>D__90_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSHORTCUT>D__90_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSHORTCUT>D__90_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSHORTCUT>D__90_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSHORTCUT>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSHORTCUT>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

