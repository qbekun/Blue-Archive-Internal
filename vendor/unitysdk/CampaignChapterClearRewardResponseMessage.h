#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F15AA0)
#define CAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_SET_PARCELDB_OFFSET UNITYSDK_OFFSET(0x1F15AE0)
#define CAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_GET_PARCELDB_OFFSET UNITYSDK_OFFSET(0x1F15AF0)

	inline static constexpr unsigned int CampaignChapterClearRewardResponseMessage_TypeDefinitionIndex = 2058;

	class CampaignChapterClearRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelDB_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ParcelDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_SET_PARCELDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_GET_PARCELDB_OFFSET))(nullptr);
		}

	};

