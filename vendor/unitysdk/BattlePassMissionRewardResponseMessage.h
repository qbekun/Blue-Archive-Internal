#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define BATTLEPASSMISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x218BA10)
#define BATTLEPASSMISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x218AED0)
#define BATTLEPASSMISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x218BA20)

	inline static constexpr unsigned int BattlePassMissionRewardResponseMessage_TypeDefinitionIndex = 4083;

	class BattlePassMissionRewardResponseMessage : public Il2CppObject
	{
	public:
		::System::Boolean IsMultiple; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x28

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

	};

