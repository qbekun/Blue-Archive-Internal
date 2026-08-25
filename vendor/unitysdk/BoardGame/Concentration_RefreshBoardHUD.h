#pragma once
#include "../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_CANFLIP_OFFSET UNITYSDK_OFFSET(0xE0B750)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_REMAINCHANCECOUNT_OFFSET UNITYSDK_OFFSET(0xE0B760)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_REMAINCHANCECOUNT_OFFSET UNITYSDK_OFFSET(0xE0B770)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_CARDMATCHEDINFOS_OFFSET UNITYSDK_OFFSET(0xE0B780)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_CARDMATCHEDINFOS_OFFSET UNITYSDK_OFFSET(0xE0B790)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xE0B7A0)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_CANFLIP_OFFSET UNITYSDK_OFFSET(0xE0B7B0)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xE0B7C0)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_EVENTCOSTPARCELCURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0xE0B7D0)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_CANSKIP_OFFSET UNITYSDK_OFFSET(0xE0B7E0)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0xE0B7F0)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_EVENTCOSTPARCELCURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0xE0B800)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B810)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_EVENTCOSTPARCEL_OFFSET UNITYSDK_OFFSET(0xE0B820)
#define BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_EVENTCOSTPARCEL_OFFSET UNITYSDK_OFFSET(0xE0B830)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_RefreshBoardHUD_TypeDefinitionIndex = 10273;

	class Concentration_RefreshBoardHUD : public Il2CppObject
	{
	public:
		::System::Int32 _remainChanceCount_k__BackingField; // 0x38
		::System::Int32 _Round_k__BackingField; // 0x3C
		::System::Boolean _CanSkip_k__BackingField; // 0x40
		::System::Boolean _CanFlip_k__BackingField; // 0x41
		::MX::GameLogic::Parcel::ParcelInfo* _EventCostParcel_k__BackingField; // 0x48
		::System::Int64 _EventCostParcelCurrentAmount_k__BackingField; // 0x50
		Il2CppObject* _CardMatchedInfos_k__BackingField; // 0x58

		::System::Boolean get_CanFlip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_CANFLIP_OFFSET))(nullptr);
		}

		::System::Void set_remainChanceCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_REMAINCHANCECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_remainChanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_REMAINCHANCECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CardMatchedInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_CARDMATCHEDINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CardMatchedInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_CARDMATCHEDINFOS_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanFlip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_CANFLIP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_EventCostParcelCurrentAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_EVENTCOSTPARCELCURRENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CanSkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_CANSKIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_CANSKIP_OFFSET))(nullptr);
		}

		::System::Void set_EventCostParcelCurrentAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_EVENTCOSTPARCELCURRENTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventCostParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_SET_EVENTCOSTPARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_EventCostParcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_REFRESHBOARDHUD_GET_EVENTCOSTPARCEL_OFFSET))(nullptr);
		}

	};
}

