#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDABD0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyUserInfo_TypeDefinitionIndex = 27501;

	class NXPToyUserInfo : public Il2CppObject
	{
	public:
		::System::Int32 memType; // 0x10
		::System::Int64 npsn; // 0x18
		::System::String* guid; // 0x20
		::System::String* subID; // 0x28
		::System::String* pictureUrl; // 0x30
		::System::String* name; // 0x38
		::System::String* memID; // 0x40
		::System::Int32 age_range_max; // 0x48
		::System::Int32 age_range_min; // 0x4C
		::System::String* email; // 0x50
		::System::Int32 gender; // 0x58
		::System::String* birthDay; // 0x60
		::System::String* firstName; // 0x68
		::System::String* middleName; // 0x70
		::System::String* lastName; // 0x78
		::System::String* gcid; // 0x80
		::System::String* gpgId; // 0x88
		::System::String* agcId; // 0x90
		::System::String* thirdPartyToken; // 0x98
		::System::String* fbBizToken; // 0xA0
		::System::String* signUpCountry; // 0xA8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

