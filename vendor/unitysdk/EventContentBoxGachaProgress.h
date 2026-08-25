#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentBoxGachaDB; }
namespace MX::Data { class EventContentBoxGachaManageData; }
namespace MX::Data { class EventContentBoxGachaShopData; }

#define EVENTCONTENTBOXGACHAPROGRESS_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1D1AC60)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_ISBOXGACHANULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x1D1AC80)
#define EVENTCONTENTBOXGACHAPROGRESS__GET_CANREFRESH_B__26_1_OFFSET UNITYSDK_OFFSET(0x1D1ACC0)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_LASTROUND_OFFSET UNITYSDK_OFFSET(0x1D1ADD0)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_TOTALGACHACOUNT_OFFSET UNITYSDK_OFFSET(0x1D1ADE0)
#define EVENTCONTENTBOXGACHAPROGRESS_TRYGETROUNDCOSTANDCURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1D1ADF0)
#define EVENTCONTENTBOXGACHAPROGRESS_CURRENTPOOLGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D1AD50)
#define EVENTCONTENTBOXGACHAPROGRESS_SET_TOTALGACHACOUNT_OFFSET UNITYSDK_OFFSET(0x1D1B100)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_ISGACHABLE_OFFSET UNITYSDK_OFFSET(0x1D1B110)
#define EVENTCONTENTBOXGACHAPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A930)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0x1D1B150)
#define EVENTCONTENTBOXGACHAPROGRESS_SYNC_OFFSET UNITYSDK_OFFSET(0x1D1A600)
#define EVENTCONTENTBOXGACHAPROGRESS_TRYGETROUNDCOST_OFFSET UNITYSDK_OFFSET(0x1D1B170)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1D1B1C0)
#define EVENTCONTENTBOXGACHAPROGRESS__SYNC_B__22_0_OFFSET UNITYSDK_OFFSET(0x1D1B1E0)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_GACHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1D1B200)
#define EVENTCONTENTBOXGACHAPROGRESS_SET_LASTROUND_OFFSET UNITYSDK_OFFSET(0x1D1B280)
#define EVENTCONTENTBOXGACHAPROGRESS_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1D1B290)

	inline static constexpr unsigned int EventContentBoxGachaProgress_TypeDefinitionIndex = 1647;

	class EventContentBoxGachaProgress : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentBoxGachaDB* BoxGachaDB; // 0x10
		::System::Int64 _LastRound_k__BackingField; // 0x18
		Il2CppObject* BoxGachaGroupIdCount; // 0x20
		::MX::Data::EventContentBoxGachaManageData* ManageData; // 0x28
		::System::Int64 RoundForShop; // 0x30
		::System::Int64 _TotalGachaCount_k__BackingField; // 0x38

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_ISLOOP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBoxGachaNullOrEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_ISBOXGACHANULLOREMPTY_OFFSET))(nullptr);
		}

		::System::Boolean _get_CanRefresh_b__26_1(::MX::Data::EventContentBoxGachaShopData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentBoxGachaShopData*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS__GET_CANREFRESH_B__26_1_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LastRound()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_LASTROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalGachaCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_TOTALGACHACOUNT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRoundCostAndCurrentAmount(::MX::GameLogic::Parcel::ParcelInfo&* arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_TRYGETROUNDCOSTANDCURRENTAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CurrentPoolGroupCount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_CURRENTPOOLGROUPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TotalGachaCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_SET_TOTALGACHACOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsGachable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_ISGACHABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::EventContentBoxGachaDB* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentBoxGachaDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_CurrentRound()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_CURRENTROUND_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::EventContentBoxGachaDB* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentBoxGachaDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetRoundCost(::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_TRYGETROUNDCOST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _Sync_b__22_0(::MX::Data::EventContentBoxGachaShopData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentBoxGachaShopData*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS__SYNC_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GachableCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_GACHABLECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_LastRound(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_SET_LASTROUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHAPROGRESS_GET_CANREFRESH_OFFSET))(nullptr);
		}

	};

