#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_VISUAL_CCGPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E87800)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGProjectile_TypeDefinitionIndex = 21163;

	class CCGProjectile : public Il2CppObject
	{
	public:
		::System::Single baseFlightTime; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGPROJECTILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

