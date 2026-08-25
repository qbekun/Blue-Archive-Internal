#pragma once
#include "../../unitysdk.h"

#define NPA_COMMUNITY_NXPTOYCOMMUNITYLASTADMINTHREAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD8AD0)

namespace NPA::Community
{
	inline static constexpr unsigned int NXPToyCommunityLastAdminThread_TypeDefinitionIndex = 27465;

	class NXPToyCommunityLastAdminThread : public Il2CppObject
	{
	public:
		::System::Int64 threadId; // 0x10
		::System::Int64 boardId; // 0x18
		::System::String* release; // 0x20
		::System::String* startDate; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXPTOYCOMMUNITYLASTADMINTHREAD_.CTOR_OFFSET))(nullptr);
		}

	};
}

