#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaEvent; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign { class HexaTileMap; }
class <>c__DisplayClass47_0;

#define <EXECUTEDEVENTS>D__47_.CTOR_OFFSET UNITYSDK_OFFSET(0xF88A70)
#define <EXECUTEDEVENTS>D__47_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF88AA0)
#define <EXECUTEDEVENTS>D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF88B60)
#define <EXECUTEDEVENTS>D__47___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF890F0)
#define <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.CAMPAIGN.HEXATILEMAPEVENT.HEXAEVENT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF891A0)
#define <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF891B0)
#define <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF89200)
#define <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.CAMPAIGN.HEXATILEMAPEVENT.HEXAEVENT_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF89210)
#define <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF892C0)

	inline static constexpr unsigned int <ExecutedEvents>d__47_TypeDefinitionIndex = 12257;

	class <ExecutedEvents>d__47 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Campaign::HexaTileMapEvent::HexaEvent* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* campaignMainStageSaveDB; // 0x28
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* __3__campaignMainStageSaveDB; // 0x30
		::MX::Campaign::HexaTileMap* hexaTileMap; // 0x38
		::MX::Campaign::HexaTileMap* __3__hexaTileMap; // 0x40
		<>c__DisplayClass47_0* __8__1; // 0x48
		Il2CppObject* __7__wrap1; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaEvent* System.Collections.Generic.IEnumerator_MX.Campaign.HexaTileMapEvent.HexaEvent_.get_Current()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.CAMPAIGN.HEXATILEMAPEVENT.HEXAEVENT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Campaign.HexaTileMapEvent.HexaEvent_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.CAMPAIGN.HEXATILEMAPEVENT.HEXAEVENT_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDEVENTS>D__47_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

