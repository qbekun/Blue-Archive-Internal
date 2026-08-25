#pragma once
#include "../../../unitysdk.h"

class GroundNode;

#define MX_LOGIC_BATTLEENTITIES_LASTFAILEDPATHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x11858D0)
#define MX_LOGIC_BATTLEENTITIES_LASTFAILEDPATHINFO_ISSAME_OFFSET UNITYSDK_OFFSET(0x11858E0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int LastFailedPathInfo_TypeDefinitionIndex = 13251;

	class LastFailedPathInfo : public Il2CppObject
	{
	public:
		GroundNode* StartNode; // 0x10
		GroundNode* EndNode; // 0x18
		Il2CppObject* BlockedAreas; // 0x20
		Il2CppObject* GroundObstacles; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LASTFAILEDPATHINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(GroundNode* arg, GroundNode* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LASTFAILEDPATHINFO_ISSAME_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

