#pragma once
#include "../unitysdk.h"

#define NPA_NXPQUERYBLOCKUSERINFOSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6790)

namespace NPA
{
	inline static constexpr unsigned int NXPQueryBlockUserInfosResult_TypeDefinitionIndex = 25771;

	class NXPQueryBlockUserInfosResult : public Il2CppObject
	{
	public:
		Il2CppObject* BlockUserInfos; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPQUERYBLOCKUSERINFOSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

