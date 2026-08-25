#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class UIFieldWorldMapAreaTab; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define MXFIELD_UI_UIFIELDWORLDMAP_GET_STAGEHISTORIES_OFFSET UNITYSDK_OFFSET(0xEA6700)
#define MXFIELD_UI_UIFIELDWORLDMAP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEA6710)
#define MXFIELD_UI_UIFIELDWORLDMAP_SET_STAGEHISTORIES_OFFSET UNITYSDK_OFFSET(0xEA6730)
#define MXFIELD_UI_UIFIELDWORLDMAP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE9E2E0)
#define MXFIELD_UI_UIFIELDWORLDMAP_SET_ISALREADYACTIONEXECUTED_OFFSET UNITYSDK_OFFSET(0xEA6750)
#define MXFIELD_UI_UIFIELDWORLDMAP_GET_STAGEINFOS_OFFSET UNITYSDK_OFFSET(0xEA6760)
#define MXFIELD_UI_UIFIELDWORLDMAP_SET_STAGEINFOS_OFFSET UNITYSDK_OFFSET(0xEA6770)
#define MXFIELD_UI_UIFIELDWORLDMAP_TRYGETMYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xEA6790)
#define MXFIELD_UI_UIFIELDWORLDMAP_GETSTAGEHISTORY_OFFSET UNITYSDK_OFFSET(0xEA68A0)
#define MXFIELD_UI_UIFIELDWORLDMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA6980)
#define MXFIELD_UI_UIFIELDWORLDMAP_GET_ISALREADYACTIONEXECUTED_OFFSET UNITYSDK_OFFSET(0xEA6990)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldWorldMap_TypeDefinitionIndex = 10757;

	class UIFieldWorldMap : public Il2CppObject
	{
	public:
		::MXField::UI::UIFieldWorldMapAreaTab* areaTab; // 0xE8
		::System::Boolean ShouldShowAreaTabOnRepeatCombat; // 0xF0
		::System::Boolean _IsAlreadyActionExecuted_k__BackingField; // 0xF1
		::Il2CppArray<::System::Object*>* _StageInfos_k__BackingField; // 0xF8
		Il2CppObject* _StageHistories_k__BackingField; // 0x100

		Il2CppObject* get_StageHistories()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_GET_STAGEHISTORIES_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageHistories(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_SET_STAGEHISTORIES_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_IsAlreadyActionExecuted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_SET_ISALREADYACTIONEXECUTED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StageInfos()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_GET_STAGEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_StageInfos(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_SET_STAGEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMyStageInfo(::System::Int64 arg, ::MX::Data::FieldContentStageInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::FieldContentStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_TRYGETMYSTAGEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* GetStageHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_GETSTAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAlreadyActionExecuted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAP_GET_ISALREADYACTIONEXECUTED_OFFSET))(nullptr);
		}

	};
}

