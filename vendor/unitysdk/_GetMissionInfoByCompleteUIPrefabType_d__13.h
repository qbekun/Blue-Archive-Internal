#pragma once
#include "unitysdk.h"

namespace MX::Data { class WelcomeCampaignMissionInfo; }
namespace FlatData { class MissionCompleteUIPrefabType; }

#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EF2E80)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF39C0)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EF3A80)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1EF3F20)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.WELCOMECAMPAIGNMISSIONINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EF3FD0)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1EF3FE0)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EF4030)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.WELCOMECAMPAIGNMISSIONINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EF4040)
#define <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EF40D0)

	inline static constexpr unsigned int <GetMissionInfoByCompleteUIPrefabType>d__13_TypeDefinitionIndex = 1905;

	class <GetMissionInfoByCompleteUIPrefabType>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::WelcomeCampaignMissionInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::FlatData::MissionCompleteUIPrefabType* type; // 0x24
		::FlatData::MissionCompleteUIPrefabType* __3__type; // 0x28
		Il2CppObject* __7__wrap1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::WelcomeCampaignMissionInfo* System.Collections.Generic.IEnumerator_MX.Data.WelcomeCampaignMissionInfo_.get_Current()
		{
			return ((::MX::Data::WelcomeCampaignMissionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.WELCOMECAMPAIGNMISSIONINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.WelcomeCampaignMissionInfo_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.WELCOMECAMPAIGNMISSIONINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMISSIONINFOBYCOMPLETEUIPREFABTYPE>D__13_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

