#pragma once
#include "../../unitysdk.h"

#define NPA_COMMUNITY_NXTOYCOMMUNITYHOME_NXTOYCOMMUNITYHOMETYPE_VALUEORNULLOF_OFFSET UNITYSDK_OFFSET(0x9CD8F20)
#define NPA_COMMUNITY_NXTOYCOMMUNITYHOME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9350)

namespace NPA::Community
{
	inline static constexpr unsigned int NXToyCommunityHome_TypeDefinitionIndex = 27470;

	class NXToyCommunityHome : public Il2CppObject
	{
	public:
		::System::Int64 communityId; // 0x10
		::System::String* communityHomeType; // 0x18
		NXPToyCommunityHomePlace* place1; // 0x20
		NXPToyCommunityHomePlace* place2; // 0x28

		Il2CppObject* NXToyCommunityHomeType_valueOrNullOf(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXTOYCOMMUNITYHOME_NXTOYCOMMUNITYHOMETYPE_VALUEORNULLOF_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXTOYCOMMUNITYHOME_.CTOR_OFFSET))(nullptr);
		}

	};
}

