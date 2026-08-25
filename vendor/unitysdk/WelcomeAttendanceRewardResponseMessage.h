#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define WELCOMEATTENDANCEREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD7420)
#define WELCOMEATTENDANCEREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xBD7570)
#define WELCOMEATTENDANCEREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xBD7580)

	inline static constexpr unsigned int WelcomeAttendanceRewardResponseMessage_TypeDefinitionIndex = 8681;

	class WelcomeAttendanceRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x20

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMEATTENDANCEREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMEATTENDANCEREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMEATTENDANCEREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

	};

