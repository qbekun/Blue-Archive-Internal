#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYFRIENDSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4660)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyFriendsResult_TypeDefinitionIndex = 27273;

	class NXPToyFriendsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYFRIENDSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

