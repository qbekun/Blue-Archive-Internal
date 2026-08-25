#pragma once
#include "../../unitysdk.h"

namespace NPA { class NXPArenaRegion; }

#define NPA_AUTH_NXPTOYARENAUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9BB0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyArenaUserInfo_TypeDefinitionIndex = 27485;

	class NXPToyArenaUserInfo : public Il2CppObject
	{
	public:
		::NPA::NXPArenaRegion* region; // 0x10
		::System::Int64 regionUserNo; // 0x18
		::System::Int64 globalUserNo; // 0x20
		::System::String* nickName; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYARENAUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

