#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPFRIENDFILTERTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CC3AB0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPFriendFilterType_TypeDefinitionIndex = 27251;

	class NXPFriendFilterType : public Il2CppObject
	{
	public:
		::System::String* FRIEND_FILTER_TYPE_FRIENDS; // 0x0
		::System::String* FRIEND_FILTER_TYPE_INVITES; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPFRIENDFILTERTYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

