#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define MISSIONREWARDRESPONSEMESSAGE_SET_MISISONID_OFFSET UNITYSDK_OFFSET(0x1F86520)
#define MISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F86180)
#define MISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1F86530)
#define MISSIONREWARDRESPONSEMESSAGE_GET_MISISONID_OFFSET UNITYSDK_OFFSET(0x1F86540)
#define MISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1F86550)

	inline static constexpr unsigned int MissionRewardResponseMessage_TypeDefinitionIndex = 2645;

	class MissionRewardResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _MisisonId_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x28

		::System::Void set_MisisonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDRESPONSEMESSAGE_SET_MISISONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MisisonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDRESPONSEMESSAGE_GET_MISISONID_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

	};

