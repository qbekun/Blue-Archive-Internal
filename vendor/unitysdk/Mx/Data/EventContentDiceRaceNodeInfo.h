#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentDiceRaceNodeType; }
namespace MX::Data::Excel { class EventContentDiceRaceNodeExcel; }

#define MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1846050)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1846060)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_BONUSMOVE_OFFSET UNITYSDK_OFFSET(0x1846070)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1846080)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1846090)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x18460A0)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18460B0)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18460C0)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18462A0)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x18462B0)
#define MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_BONUSMOVE_OFFSET UNITYSDK_OFFSET(0x18462C0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentDiceRaceNodeInfo_TypeDefinitionIndex = 15809;

	class EventContentDiceRaceNodeInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _NodeId_k__BackingField; // 0x18
		::FlatData::EventContentDiceRaceNodeType* _NodeType_k__BackingField; // 0x20
		::System::Int32 _BonusMove_k__BackingField; // 0x24
		Il2CppObject* _Rewards_k__BackingField; // 0x28

		::System::Void set_NodeType(::FlatData::EventContentDiceRaceNodeType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentDiceRaceNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_NODETYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int32 get_BonusMove()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_BONUSMOVE_OFFSET))(nullptr);
		}

		::System::Void set_NodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_NODEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentDiceRaceNodeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceNodeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentDiceRaceNodeType* get_NodeType()
		{
			return (return (::FlatData::EventContentDiceRaceNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_BonusMove(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACENODEINFO_SET_BONUSMOVE_OFFSET))(arg, nullptr);
		}

	};
}

