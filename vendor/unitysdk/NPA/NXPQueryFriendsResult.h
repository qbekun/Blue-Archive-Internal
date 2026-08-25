#pragma once
#include "../unitysdk.h"

#define NPA_NXPQUERYFRIENDSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6820)

namespace NPA
{
	inline static constexpr unsigned int NXPQueryFriendsResult_TypeDefinitionIndex = 25773;

	class NXPQueryFriendsResult : public Il2CppObject
	{
	public:
		Il2CppObject* Friends; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPQUERYFRIENDSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

