#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::Data { class CampaignChapterInfo; }

#define <GETOPENVERYHARDSTAGES>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0xF88060)
#define <GETOPENVERYHARDSTAGES>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF88090)
#define <GETOPENVERYHARDSTAGES>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF88100)
#define <GETOPENVERYHARDSTAGES>D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF88670)
#define <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.CAMPAIGNSTAGEINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF886C0)
#define <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF886D0)
#define <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF88720)
#define <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.CAMPAIGNSTAGEINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF88730)
#define <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF887E0)

	inline static constexpr unsigned int <GetOpenVeryHardStages>d__6_TypeDefinitionIndex = 12250;

	class <GetOpenVeryHardStages>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::CampaignStageInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::CampaignChapterInfo* chapter; // 0x28
		::MX::Data::CampaignChapterInfo* __3__chapter; // 0x30
		Il2CppObject* stageClearHistory; // 0x38
		Il2CppObject* __3__stageClearHistory; // 0x40
		Il2CppObject* _stageHistorySet_5__2; // 0x48
		Il2CppObject* __7__wrap2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* System.Collections.Generic.IEnumerator_MX.Data.CampaignStageInfo_.get_Current()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.CAMPAIGNSTAGEINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.CampaignStageInfo_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.CAMPAIGNSTAGEINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENVERYHARDSTAGES>D__6_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

