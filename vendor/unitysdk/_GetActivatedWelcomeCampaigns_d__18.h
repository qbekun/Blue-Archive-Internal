#pragma once
#include "unitysdk.h"

namespace MX::Data { class WelcomeCampaignSeasonInfo; }
namespace MX::Data { class WelcomeCampaignData; }
namespace MX::GameLogic::DBModel { class AccountDB; }

#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0x196F920)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x196F950)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x196F9B0)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x196FC90)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.WELCOMECAMPAIGNSEASONINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x196FCE0)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x196FCF0)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x196FD40)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.WELCOMECAMPAIGNSEASONINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196FD50)
#define <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196FE10)

	inline static constexpr unsigned int <GetActivatedWelcomeCampaigns>d__18_TypeDefinitionIndex = 16458;

	class <GetActivatedWelcomeCampaigns>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::WelcomeCampaignSeasonInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::WelcomeCampaignData* __4__this; // 0x28
		::MX::GameLogic::DBModel::AccountDB* accountDB; // 0x30
		::MX::GameLogic::DBModel::AccountDB* __3__accountDB; // 0x38
		::System::DateTime* serverTime; // 0x40
		::System::DateTime* __3__serverTime; // 0x48
		Il2CppObject* __7__wrap1; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::WelcomeCampaignSeasonInfo* System.Collections.Generic.IEnumerator_MX.Data.WelcomeCampaignSeasonInfo_.get_Current()
		{
			return (return (::MX::Data::WelcomeCampaignSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.WELCOMECAMPAIGNSEASONINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.WelcomeCampaignSeasonInfo_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.WELCOMECAMPAIGNSEASONINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACTIVATEDWELCOMECAMPAIGNS>D__18_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

