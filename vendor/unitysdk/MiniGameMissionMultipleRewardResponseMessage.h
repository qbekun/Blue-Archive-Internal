#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define MINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1F83460)
#define MINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F83100)
#define MINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1F83470)

	inline static constexpr unsigned int MiniGameMissionMultipleRewardResponseMessage_TypeDefinitionIndex = 2625;

	class MiniGameMissionMultipleRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x20

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

	};

