#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPKAKAOFRIENDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3B40)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPKakaoFriendInfo_TypeDefinitionIndex = 27252;

	class NXPKakaoFriendInfo : public Il2CppObject
	{
	public:
		Il2CppObject* metaList; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOFRIENDINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

