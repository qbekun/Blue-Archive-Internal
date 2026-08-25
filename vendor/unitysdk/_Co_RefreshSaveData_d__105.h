#pragma once
#include "unitysdk.h"

class CampaignTask;
class <>c__DisplayClass105_0;

#define <CO_REFRESHSAVEDATA>D__105_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFF060)
#define <CO_REFRESHSAVEDATA>D__105_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20064D0)
#define <CO_REFRESHSAVEDATA>D__105_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20064E0)
#define <CO_REFRESHSAVEDATA>D__105_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2007010)
#define <CO_REFRESHSAVEDATA>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2007020)
#define <CO_REFRESHSAVEDATA>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2007070)

	inline static constexpr unsigned int <Co_RefreshSaveData>d__105_TypeDefinitionIndex = 3118;

	class <Co_RefreshSaveData>d__105 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CampaignTask* __4__this; // 0x20
		<>c__DisplayClass105_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__105_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__105_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__105_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__105_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

