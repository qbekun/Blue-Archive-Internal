#pragma once
#include "../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayType; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign::HexaTileMapEvent { class StrategyClearRewardInfo; }
namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x143BDD0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x143BE30)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x143BEA0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x143BF50)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x143C030)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x143C040)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x143C050)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x143C060)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x143C070)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x143C080)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x143C090)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x143C0B0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x143C0C0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x143C0D0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_STAGEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x143C0E0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_STAGEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x143C0F0)

namespace MX::Campaign::HexaTileMapEvent
{
	inline static constexpr unsigned int HexaDisplayInfo_TypeDefinitionIndex = 14907;

	class HexaDisplayInfo : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaDisplayType* _Type_k__BackingField; // 0x10
		::System::Int64 _EntityId_k__BackingField; // 0x18
		::System::Int64 _UniqueId_k__BackingField; // 0x20
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x28
		::System::Int64 _Parameter_k__BackingField; // 0x38
		::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo* _StageRewardInfo_k__BackingField; // 0x40

		::System::Void .ctor(::MX::Campaign::HexaTileMapEvent::HexaDisplayType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::Campaign::HexLocation* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayType*, ::System::Int64, ::System::Int64, ::MX::Campaign::HexLocation*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_CLONE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaDisplayType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::MX::Campaign::HexaTileMapEvent::HexaDisplayType* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Parameter()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_PARAMETER_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo* get_StageRewardInfo()
		{
			return ((::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_GET_STAGEREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_StageRewardInfo(::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXADISPLAYINFO_SET_STAGEREWARDINFO_OFFSET))(arg, nullptr);
		}

	};
}

