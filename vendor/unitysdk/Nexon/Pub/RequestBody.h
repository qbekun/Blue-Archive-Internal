#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_REQUESTBODY_SET_ADVERTISINGID_OFFSET UNITYSDK_OFFSET(0x954C610)
#define NEXON_PUB_REQUESTBODY_SET_CURRENTBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x954C620)
#define NEXON_PUB_REQUESTBODY_SET_CURRENTBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x954C630)
#define NEXON_PUB_REQUESTBODY_SET_MARKETGAMEID_OFFSET UNITYSDK_OFFSET(0x954C640)
#define NEXON_PUB_REQUESTBODY_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C650)

namespace Nexon::Pub
{
	inline static constexpr unsigned int RequestBody_TypeDefinitionIndex = 37550;

	class RequestBody : public Il2CppObject
	{
	public:
		::System::String* country; // 0x10
		::System::String* advertising_id; // 0x18
		::System::String* curr_build_number; // 0x20
		::System::String* curr_build_version; // 0x28
		::System::Int32 curr_patch_version; // 0x30
		::System::String* language; // 0x38
		::System::String* market_code; // 0x40
		::System::String* market_game_id; // 0x48
		::System::String* sdk_version; // 0x50

		::System::Void set_AdvertisingId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_REQUESTBODY_SET_ADVERTISINGID_OFFSET))(str, nullptr);
		}

		::System::Void set_CurrentBuildNumber(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_REQUESTBODY_SET_CURRENTBUILDNUMBER_OFFSET))(str, nullptr);
		}

		::System::Void set_CurrentBuildVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_REQUESTBODY_SET_CURRENTBUILDVERSION_OFFSET))(str, nullptr);
		}

		::System::Void set_MarketGameId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_REQUESTBODY_SET_MARKETGAMEID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_REQUESTBODY_.CTOR_OFFSET))(nullptr);
		}

	};
}

