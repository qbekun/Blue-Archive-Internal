#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define SWEEPRESULTSLOTINFO_GET_TURN_OFFSET UNITYSDK_OFFSET(0xB2C390)
#define SWEEPRESULTSLOTINFO_GET_REWARDDICT_OFFSET UNITYSDK_OFFSET(0xB2C3A0)
#define SWEEPRESULTSLOTINFO_GET_TARGETPARCELCOUNT_OFFSET UNITYSDK_OFFSET(0xB2C3B0)
#define SWEEPRESULTSLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB2AE40)
#define SWEEPRESULTSLOTINFO_SET_TARGETPARCELCOUNT_OFFSET UNITYSDK_OFFSET(0xB2C3D0)
#define SWEEPRESULTSLOTINFO_SET_TURN_OFFSET UNITYSDK_OFFSET(0xB2C3E0)
#define SWEEPRESULTSLOTINFO_SET_REWARDDICT_OFFSET UNITYSDK_OFFSET(0xB2C3F0)

	inline static constexpr unsigned int SweepResultSlotInfo_TypeDefinitionIndex = 8270;

	class SweepResultSlotInfo : public Il2CppObject
	{
	public:
		::System::Int32 _turn_k__BackingField; // 0x10
		Il2CppObject* _rewardDict_k__BackingField; // 0x18
		::System::Int64 _TargetParcelCount_k__BackingField; // 0x20

		::System::Int32 get_turn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SWEEPRESULTSLOTINFO_GET_TURN_OFFSET))(nullptr);
		}

		Il2CppObject* get_rewardDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWEEPRESULTSLOTINFO_GET_REWARDDICT_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetParcelCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SWEEPRESULTSLOTINFO_GET_TARGETPARCELCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg2, ::MX::GameLogic::Parcel::ParcelKeyPair* arg3)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + SWEEPRESULTSLOTINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_TargetParcelCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SWEEPRESULTSLOTINFO_SET_TARGETPARCELCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_turn(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SWEEPRESULTSLOTINFO_SET_TURN_OFFSET))(arg, nullptr);
		}

		::System::Void set_rewardDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SWEEPRESULTSLOTINFO_SET_REWARDDICT_OFFSET))(arg, nullptr);
		}

	};

