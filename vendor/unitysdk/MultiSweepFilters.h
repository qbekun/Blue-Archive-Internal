#pragma once
#include "unitysdk.h"

class FilterMultiSweepStageDifficulty;
class FilterMultiSweepStage;
class FilterMultiSweep;
class FilterTierMultiSweep;
class MultiSweepListScrollInfo;
class MultiSweepFilters;
class AssetObjectBase;

#define MULTISWEEPFILTERS_LOADMULTISWEEPFILTER_OFFSET UNITYSDK_OFFSET(0x1FD01E0)
#define MULTISWEEPFILTERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FD0300)
#define MULTISWEEPFILTERS_MULTISWEEPSTAGEFILTERON_OFFSET UNITYSDK_OFFSET(0x1FD0420)
#define MULTISWEEPFILTERS_SAVEMULTISWEEPSTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x1FD04A0)
#define MULTISWEEPFILTERS_RESETMULTISWEEPSTAGEFILTERTYPES_OFFSET UNITYSDK_OFFSET(0x1FD04E0)
#define MULTISWEEPFILTERS_RESETMULTISWEEPSTAGEFILTERLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FD0520)
#define MULTISWEEPFILTERS_ISINMULTISWEEPSTAGESORTFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0560)
#define MULTISWEEPFILTERS_SET_MULTISWEEPTIERFILTER_OFFSET UNITYSDK_OFFSET(0x1FD05B0)
#define MULTISWEEPFILTERS_RESETMULTISWEEPFILTER_OFFSET UNITYSDK_OFFSET(0x1FD05C0)
#define MULTISWEEPFILTERS_SET_MULTISWEEPFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0630)
#define MULTISWEEPFILTERS_SET_MULTISWEEPSTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0640)
#define MULTISWEEPFILTERS_GET_MULTISWEEPFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0650)
#define MULTISWEEPFILTERS_MULTISWEEPFILTERON_OFFSET UNITYSDK_OFFSET(0x1FD0660)
#define MULTISWEEPFILTERS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FD06E0)
#define MULTISWEEPFILTERS_ISINMULTISWEEPMATERIALSORTFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0730)
#define MULTISWEEPFILTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0760)
#define MULTISWEEPFILTERS_LOADMULTISWEEPSTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0770)
#define MULTISWEEPFILTERS_RESTOREMULTISWEEPFILTER_OFFSET UNITYSDK_OFFSET(0x1FD07B0)
#define MULTISWEEPFILTERS_SAVEMULTISWEEPFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0820)
#define MULTISWEEPFILTERS_GET_MULTISWEEPSTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0A10)
#define MULTISWEEPFILTERS_GET_MULTISWEEPSTAGEDIFFICULTYFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0A20)
#define MULTISWEEPFILTERS_SET_MULTISWEEPSTAGEDIFFICULTYFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0A30)
#define MULTISWEEPFILTERS_RESTOREMULTISWEEPSTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0A40)
#define MULTISWEEPFILTERS_GET_MULTISWEEPTIERFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0AB0)

	inline static constexpr unsigned int MultiSweepFilters_TypeDefinitionIndex = 3012;

	class MultiSweepFilters : public Il2CppObject
	{
	public:
		FilterMultiSweepStageDifficulty* _MultiSweepStageDifficultyFilter_k__BackingField; // 0x10
		FilterMultiSweepStage* _MultiSweepStageFilter_k__BackingField; // 0x18
		FilterMultiSweep* _MultiSweepFilter_k__BackingField; // 0x20
		FilterTierMultiSweep* _MultiSweepTierFilter_k__BackingField; // 0x28

		::System::Void LoadMultiSweepFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_LOADMULTISWEEPFILTER_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean MultiSweepStageFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_MULTISWEEPSTAGEFILTERON_OFFSET))(nullptr);
		}

		::System::Void SaveMultiSweepStageFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_SAVEMULTISWEEPSTAGEFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetMultiSweepStageFilterTypes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_RESETMULTISWEEPSTAGEFILTERTYPES_OFFSET))(nullptr);
		}

		::System::Void ResetMultiSweepStageFilterLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_RESETMULTISWEEPSTAGEFILTERLOCALLY_OFFSET))(nullptr);
		}

		::System::Boolean IsInMultiSweepStageSortFilter(MultiSweepListScrollInfo* arg)
		{
			return ((::System::Boolean(*)(MultiSweepListScrollInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_ISINMULTISWEEPSTAGESORTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_MultiSweepTierFilter(FilterTierMultiSweep* arg)
		{
			((::System::Void(*)(FilterTierMultiSweep*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_SET_MULTISWEEPTIERFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetMultiSweepFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_RESETMULTISWEEPFILTER_OFFSET))(nullptr);
		}

		::System::Void set_MultiSweepFilter(FilterMultiSweep* arg)
		{
			((::System::Void(*)(FilterMultiSweep*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_SET_MULTISWEEPFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_MultiSweepStageFilter(FilterMultiSweepStage* arg)
		{
			((::System::Void(*)(FilterMultiSweepStage*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_SET_MULTISWEEPSTAGEFILTER_OFFSET))(arg, nullptr);
		}

		FilterMultiSweep* get_MultiSweepFilter()
		{
			return ((FilterMultiSweep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_GET_MULTISWEEPFILTER_OFFSET))(nullptr);
		}

		::System::Boolean MultiSweepFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_MULTISWEEPFILTERON_OFFSET))(nullptr);
		}

		MultiSweepFilters* get_Instance()
		{
			return ((MultiSweepFilters*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean IsInMultiSweepMaterialSortFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_ISINMULTISWEEPMATERIALSORTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadMultiSweepStageFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_LOADMULTISWEEPSTAGEFILTER_OFFSET))(nullptr);
		}

		::System::Void RestoreMultiSweepFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_RESTOREMULTISWEEPFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveMultiSweepFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_SAVEMULTISWEEPFILTER_OFFSET))(nullptr);
		}

		FilterMultiSweepStage* get_MultiSweepStageFilter()
		{
			return ((FilterMultiSweepStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_GET_MULTISWEEPSTAGEFILTER_OFFSET))(nullptr);
		}

		FilterMultiSweepStageDifficulty* get_MultiSweepStageDifficultyFilter()
		{
			return ((FilterMultiSweepStageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_GET_MULTISWEEPSTAGEDIFFICULTYFILTER_OFFSET))(nullptr);
		}

		::System::Void set_MultiSweepStageDifficultyFilter(FilterMultiSweepStageDifficulty* arg)
		{
			((::System::Void(*)(FilterMultiSweepStageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_SET_MULTISWEEPSTAGEDIFFICULTYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void RestoreMultiSweepStageFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_RESTOREMULTISWEEPSTAGEFILTER_OFFSET))(nullptr);
		}

		FilterTierMultiSweep* get_MultiSweepTierFilter()
		{
			return ((FilterTierMultiSweep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERS_GET_MULTISWEEPTIERFILTER_OFFSET))(nullptr);
		}

	};

