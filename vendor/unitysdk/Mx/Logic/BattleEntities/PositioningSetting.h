#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PositioningType; }

#define MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x118E0C0)
#define MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_SET_POSITIONINGGAP_OFFSET UNITYSDK_OFFSET(0x118E180)
#define MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_SET_POSITIONINGGAPSQR_OFFSET UNITYSDK_OFFSET(0x118E190)
#define MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_APPLYPOSITIONINGGAPRATE_OFFSET UNITYSDK_OFFSET(0x118E1A0)
#define MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_GET_POSITIONINGGAP_OFFSET UNITYSDK_OFFSET(0x118E230)
#define MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_GET_POSITIONINGGAPSQR_OFFSET UNITYSDK_OFFSET(0x118E240)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int PositioningSetting_TypeDefinitionIndex = 13260;

	class PositioningSetting : public Il2CppObject
	{
	public:
		::System::Single FormationPositionReduceRatio; // 0x10
		::System::Single FormationPositionReduce; // 0x14
		::System::Single ObstaclePositionReduceRatio; // 0x18
		::System::Single ObstaclePositionReduce; // 0x1C
		::System::Single _PositioningGapSqr_k__BackingField; // 0x20
		::System::Single _PositioningGap_k__BackingField; // 0x24
		::System::Int64 positioningGapCentimeter; // 0x28
		::FlatData::PositioningType* PositioningType; // 0x30

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::FlatData::PositioningType* arg6)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::PositioningType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void set_PositioningGap(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_SET_POSITIONINGGAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_PositioningGapSqr(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_SET_POSITIONINGGAPSQR_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPositioningGapRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_APPLYPOSITIONINGGAPRATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_PositioningGap()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_GET_POSITIONINGGAP_OFFSET))(nullptr);
		}

		::System::Single get_PositioningGapSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POSITIONINGSETTING_GET_POSITIONINGGAPSQR_OFFSET))(nullptr);
		}

	};
}

