#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define WELCOMEMISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xBD7550)
#define WELCOMEMISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xBD7560)
#define WELCOMEMISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD65F0)

	inline static constexpr unsigned int WelcomeMissionRewardResponseMessage_TypeDefinitionIndex = 8680;

	class WelcomeMissionRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x20

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMEMISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMEMISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMEMISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

