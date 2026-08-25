#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class RecipeDisplayOptions; }
namespace MX::Data::Excel { class ShiftingCraftRecipeExcel; }

#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_ADDITIONALCOSTPARCEL_OFFSET UNITYSDK_OFFSET(0x185B3E0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_REQUIREDCOSTFOREACH_OFFSET UNITYSDK_OFFSET(0x185B3F0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_CRAFTREWARDWITHCRAFTINGCOUNT_OFFSET UNITYSDK_OFFSET(0x185B400)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_KEYSTONEINFOFORCRAFT_OFFSET UNITYSDK_OFFSET(0x185B490)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x185B4A0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x185B4B0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_KEYSTONEINFOFORCRAFTWITHCRAFTINGCOUNT_OFFSET UNITYSDK_OFFSET(0x185B4C0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_CRAFTREWARD_OFFSET UNITYSDK_OFFSET(0x185B550)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GOLDCOSTWITHCRAFTINGCOUNT_OFFSET UNITYSDK_OFFSET(0x185B560)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185B5D0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_KEYSTONEINFOFORCRAFT_OFFSET UNITYSDK_OFFSET(0x185B5E0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_DISPLAYOPTIONS_OFFSET UNITYSDK_OFFSET(0x185B5F0)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x185B600)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x185B610)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_DISPLAYOPTIONS_OFFSET UNITYSDK_OFFSET(0x185B620)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185B630)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_REQUIREDCOSTFOREACH_OFFSET UNITYSDK_OFFSET(0x185B920)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185B930)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_REQUIREDEXPFOREACH_OFFSET UNITYSDK_OFFSET(0x185B940)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_CRAFTREWARD_OFFSET UNITYSDK_OFFSET(0x185B950)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_ADDITIONALCOSTPARCEL_OFFSET UNITYSDK_OFFSET(0x185B960)
#define MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_REQUIREDEXPFOREACH_OFFSET UNITYSDK_OFFSET(0x185B970)

namespace MX::Data
{
	inline static constexpr unsigned int ShiftingCraftRecipeExcelInfo_TypeDefinitionIndex = 15886;

	class ShiftingCraftRecipeExcelInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _DisplayOrder_k__BackingField; // 0x18
		::System::Int32 _NotificationId_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelInfo* _AdditionalCostParcel_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelInfo* _CraftReward_k__BackingField; // 0x30
		::MX::GameLogic::Parcel::ParcelInfo* _KeyStoneInfoForCraft_k__BackingField; // 0x38
		::System::Int64 _RequiredExpForEach_k__BackingField; // 0x40
		::System::Int64 _RequiredCostForEach_k__BackingField; // 0x48
		Il2CppObject* Tags; // 0x50
		::FlatData::RecipeDisplayOptions* _DisplayOptions_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelInfo* get_AdditionalCostParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_ADDITIONALCOSTPARCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_RequiredCostForEach()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_REQUIREDCOSTFOREACH_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* CraftRewardWithCraftingCount(::System::Int64 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_CRAFTREWARDWITHCRAFTINGCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeyStoneInfoForCraft(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_KEYSTONEINFOFORCRAFT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NotificationId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_NOTIFICATIONID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* KeyStoneInfoForCraftWithCraftingCount(::System::Int64 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_KEYSTONEINFOFORCRAFTWITHCRAFTINGCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CraftReward(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_CRAFTREWARD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GoldCostWithCraftingCount(::System::Int64 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GOLDCOSTWITHCRAFTINGCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_KeyStoneInfoForCraft()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_KEYSTONEINFOFORCRAFT_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOptions(::FlatData::RecipeDisplayOptions* arg)
		{
			((::System::Void(*)(::FlatData::RecipeDisplayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_DISPLAYOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_NotificationId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_NOTIFICATIONID_OFFSET))(arg, nullptr);
		}

		::FlatData::RecipeDisplayOptions* get_DisplayOptions()
		{
			return (return (::FlatData::RecipeDisplayOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_DISPLAYOPTIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ShiftingCraftRecipeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShiftingCraftRecipeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RequiredCostForEach(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_REQUIREDCOSTFOREACH_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_RequiredExpForEach()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_REQUIREDEXPFOREACH_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_CraftReward()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_GET_CRAFTREWARD_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalCostParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_ADDITIONALCOSTPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_RequiredExpForEach(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHIFTINGCRAFTRECIPEEXCELINFO_SET_REQUIREDEXPFOREACH_OFFSET))(arg, nullptr);
		}

	};
}

