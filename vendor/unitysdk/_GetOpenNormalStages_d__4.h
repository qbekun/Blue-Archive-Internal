#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::Data { class CampaignChapterInfo; }
class <>c__DisplayClass4_0;

#define <GETOPENNORMALSTAGES>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0xF87050)
#define <GETOPENNORMALSTAGES>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF87080)
#define <GETOPENNORMALSTAGES>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF87100)
#define <GETOPENNORMALSTAGES>D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF87700)
#define <GETOPENNORMALSTAGES>D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xF87750)
#define <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.CAMPAIGNSTAGEINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF877A0)
#define <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF877B0)
#define <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF87800)
#define <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.CAMPAIGNSTAGEINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF87810)
#define <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF878C0)

	inline static constexpr unsigned int <GetOpenNormalStages>d__4_TypeDefinitionIndex = 12248;

	class <GetOpenNormalStages>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::CampaignStageInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::CampaignChapterInfo* chapter; // 0x28
		::MX::Data::CampaignChapterInfo* __3__chapter; // 0x30
		Il2CppObject* stageClearHistory; // 0x38
		Il2CppObject* __3__stageClearHistory; // 0x40
		<>c__DisplayClass4_0* __8__1; // 0x48
		Il2CppObject* __7__wrap1; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* System.Collections.Generic.IEnumerator_MX.Data.CampaignStageInfo_.get_Current()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.CAMPAIGNSTAGEINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.CampaignStageInfo_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.CAMPAIGNSTAGEINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENNORMALSTAGES>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

