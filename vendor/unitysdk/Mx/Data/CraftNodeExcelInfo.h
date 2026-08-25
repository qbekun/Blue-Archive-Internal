#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class GachaCraftNodeExcel; }

#define MX_DATA_CRAFTNODEEXCELINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x183C780)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x183C790)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_TIER_OFFSET UNITYSDK_OFFSET(0x183C7A0)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_TIER_OFFSET UNITYSDK_OFFSET(0x183C7B0)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_NODEQUALITY_OFFSET UNITYSDK_OFFSET(0x183C7C0)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_NODEQUALITY_OFFSET UNITYSDK_OFFSET(0x183C7D0)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_APPEARPROBWEIGHT_OFFSET UNITYSDK_OFFSET(0x183C7E0)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_APPEARPROBWEIGHT_OFFSET UNITYSDK_OFFSET(0x183C7F0)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_LOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x183C800)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_LOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x183C810)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_ICON_OFFSET UNITYSDK_OFFSET(0x183C820)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_ICON_OFFSET UNITYSDK_OFFSET(0x183C830)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_QUICKCRAFTNODEDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x183C840)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_QUICKCRAFTNODEDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x183C850)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x183C860)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x183C870)
#define MX_DATA_CRAFTNODEEXCELINFO_GET_CRAFTGACHAGROUPPROBWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x183C880)
#define MX_DATA_CRAFTNODEEXCELINFO_SET_CRAFTGACHAGROUPPROBWEIGHTTABLE_OFFSET UNITYSDK_OFFSET(0x183C890)
#define MX_DATA_CRAFTNODEEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183C8A0)
#define MX_DATA_CRAFTNODEEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183C920)

namespace MX::Data
{
	inline static constexpr unsigned int CraftNodeExcelInfo_TypeDefinitionIndex = 15772;

	class CraftNodeExcelInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _Tier_k__BackingField; // 0x18
		::System::Int64 _NodeQuality_k__BackingField; // 0x20
		::System::Int64 _AppearProbWeight_k__BackingField; // 0x28
		::System::UInt32 _LocalizeKey_k__BackingField; // 0x30
		::System::String* _Icon_k__BackingField; // 0x38
		::System::Int32 _QuickCraftNodeDisplayOrder_k__BackingField; // 0x40
		Il2CppObject* _Tags_k__BackingField; // 0x48
		Il2CppObject* _CraftGachaGroupProbWeightTable_k__BackingField; // 0x50

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Tier()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NodeQuality()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_NODEQUALITY_OFFSET))(nullptr);
		}

		::System::Void set_NodeQuality(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_NODEQUALITY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AppearProbWeight()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_APPEARPROBWEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_AppearProbWeight(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_APPEARPROBWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_LOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_LOCALIZEKEY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_ICON_OFFSET))(nullptr);
		}

		::System::Void set_Icon(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_ICON_OFFSET))(str, nullptr);
		}

		::System::Int32 get_QuickCraftNodeDisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_QUICKCRAFTNODEDISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_QuickCraftNodeDisplayOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_QUICKCRAFTNODEDISPLAYORDER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_TAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CraftGachaGroupProbWeightTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_GET_CRAFTGACHAGROUPPROBWEIGHTTABLE_OFFSET))(nullptr);
		}

		::System::Void set_CraftGachaGroupProbWeightTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_SET_CRAFTGACHAGROUPPROBWEIGHTTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GachaCraftNodeExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GachaCraftNodeExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CRAFTNODEEXCELINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

