#pragma once
#include "unitysdk.h"

class EnemyInfoScrollViewController;
class UILabel;
class UISprite;
class IntTabController;
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace MX::Data::Excel { class ScenarioModeExcel; }
namespace MX::Data { class TimeAttackDungeonGeasInfo; }
class ConquestTileVisual;
namespace MX::Data::Excel { class ConquestUnitExcel; }
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace FlatData { class StageTopography; }
namespace MX::Campaign { class HexaTileMap; }

#define UIENEMYINFOPOPUP_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x23F2220)
#define UIENEMYINFOPOPUP_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x23F22F0)
#define UIENEMYINFOPOPUP_SET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x23F2300)
#define UIENEMYINFOPOPUP_GET_GROUNDIDS_OFFSET UNITYSDK_OFFSET(0x23F2310)
#define UIENEMYINFOPOPUP_SET_GROUNDIDS_OFFSET UNITYSDK_OFFSET(0x23F2320)
#define UIENEMYINFOPOPUP_GET_GROUNDLOADED_OFFSET UNITYSDK_OFFSET(0x23F2340)
#define UIENEMYINFOPOPUP_SET_GROUNDLOADED_OFFSET UNITYSDK_OFFSET(0x23F2350)
#define UIENEMYINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x23F2360)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F23A0)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F27C0)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F2A10)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F2C60)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F2F70)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F3220)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F32E0)
#define UIENEMYINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F3630)
#define UIENEMYINFOPOPUP_CLEARENEMYINFOSCROLL_OFFSET UNITYSDK_OFFSET(0x23F26B0)
#define UIENEMYINFOPOPUP_SETTOPOGRAPHYICON_OFFSET UNITYSDK_OFFSET(0x23F2730)
#define UIENEMYINFOPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23F3910)
#define UIENEMYINFOPOPUP_LOADANDSET_OFFSET UNITYSDK_OFFSET(0x23F3990)
#define UIENEMYINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F3A00)
#define UIENEMYINFOPOPUP__SETDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x23F3A10)
#define UIENEMYINFOPOPUP__LOADANDSET_G__ONLOADTEXTASSET|31_0_OFFSET UNITYSDK_OFFSET(0x23F3D50)

	inline static constexpr unsigned int UIEnemyInfoPopup_TypeDefinitionIndex = 5425;

	class UIEnemyInfoPopup : public Il2CppObject
	{
	public:
		Il2CppObject* _columnCount_k__BackingField; // 0xD8
		EnemyInfoScrollViewController* EnemyInfoScrollView; // 0xE0
		UILabel* StageNameLabel; // 0xE8
		UISprite* TopographyIcon; // 0xF0
		IntTabController* tabController; // 0xF8
		Il2CppObject* characterList; // 0x100
		Il2CppObject* _GroundIds_k__BackingField; // 0x108
		::System::Boolean _groundLoaded_k__BackingField; // 0x110

		::System::Int32 get_ColumnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_GET_COLUMNCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_columnCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_GET_COLUMNCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_columnCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SET_COLUMNCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GroundIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_GET_GROUNDIDS_OFFSET))(nullptr);
		}

		::System::Void set_GroundIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SET_GROUNDIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_groundLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_GET_GROUNDLOADED_OFFSET))(nullptr);
		}

		::System::Void set_groundLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SET_GROUNDLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::CampaignStageInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::TimeAttackDungeonGeasInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(ConquestTileVisual* arg)
		{
			((::System::Void(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ConquestUnitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ClearEnemyInfoScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_CLEARENEMYINFOSCROLL_OFFSET))(nullptr);
		}

		::System::Void SetTopographyIcon(::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_SETTOPOGRAPHYICON_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadAndSet()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_LOADANDSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__20_0(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP__SETDATA_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadAndSet_g__OnLoadTextAsset|31_0(::Il2CppArray<::System::Object*>* arg, <>c__DisplayClass31_0&* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, <>c__DisplayClass31_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOPOPUP__LOADANDSET_G__ONLOADTEXTASSET|31_0_OFFSET))(arg, arg2, nullptr);
		}

	};

