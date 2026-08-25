#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYNEXONUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9C10)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyNexonUserInfo_TypeDefinitionIndex = 27491;

	class NXPToyNexonUserInfo : public Il2CppObject
	{
	public:
		::System::String* NexonID; // 0x10
		::System::String* NickName; // 0x18
		::System::Int32 Age; // 0x20
		::System::Int32 Sex; // 0x24
		::System::Boolean Membership; // 0x28
		::System::Int32 MainAuthLevel; // 0x2C
		::System::Int32 SubAuthLevel; // 0x30
		::System::Int32 WriteStatus; // 0x34
		::System::Int64 NexonSN; // 0x38
		::System::String* NexonSNString; // 0x40
		::System::String* NexonProfileDetailImageUrl; // 0x48
		::System::String* NexonProfileThumbnailImageUrl_130; // 0x50
		::System::String* HiddenEmail; // 0x58
		::System::String* HiddenLoginId; // 0x60
		::System::Int32 NexonTPAMemType; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNEXONUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

