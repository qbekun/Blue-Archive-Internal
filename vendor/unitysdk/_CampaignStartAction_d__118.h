#pragma once
#include "unitysdk.h"

class UICampaign;

#define <CAMPAIGNSTARTACTION>D__118_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A8440)
#define <CAMPAIGNSTARTACTION>D__118_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22A8460)
#define <CAMPAIGNSTARTACTION>D__118_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22A8470)
#define <CAMPAIGNSTARTACTION>D__118_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22A8870)
#define <CAMPAIGNSTARTACTION>D__118_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22A8880)
#define <CAMPAIGNSTARTACTION>D__118_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22A88D0)

	inline static constexpr unsigned int <CampaignStartAction>d__118_TypeDefinitionIndex = 4746;

	class <CampaignStartAction>d__118 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICampaign* __4__this; // 0x20
		::System::Action* end; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CAMPAIGNSTARTACTION>D__118_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CAMPAIGNSTARTACTION>D__118_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CAMPAIGNSTARTACTION>D__118_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CAMPAIGNSTARTACTION>D__118_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CAMPAIGNSTARTACTION>D__118_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CAMPAIGNSTARTACTION>D__118_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

