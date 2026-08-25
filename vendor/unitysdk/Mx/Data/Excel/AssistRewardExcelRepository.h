#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace FlatData { class AssistRewardType; }

#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19D9360)
#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECTFIRST_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19D95C0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19D9920)
#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPES_OFFSET UNITYSDK_OFFSET(0x19D9C70)
#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECTFIRST_ECHELONTYPE_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19DA070)
#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPE_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19DA4F0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPE_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19DA960)
#define MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19DAF00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistRewardExcelRepository_TypeDefinitionIndex = 16698;

	class AssistRewardExcelRepository : public ::FlatData::DreamMakerParameterType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EchelonType(::FlatData::EchelonType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EchelonType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECTFIRST_ECHELONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EchelonType(::FlatData::EchelonType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EchelonType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EchelonTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EchelonType_RewardType(::FlatData::EchelonType* arg, ::FlatData::AssistRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EchelonType*, ::FlatData::AssistRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECTFIRST_ECHELONTYPE_REWARDTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EchelonType_RewardType(::FlatData::EchelonType* arg, ::FlatData::AssistRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EchelonType*, ::FlatData::AssistRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPE_REWARDTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EchelonType_RewardType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_SELECT_ECHELONTYPE_REWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

