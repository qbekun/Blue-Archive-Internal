#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYACHIEVEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4390)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyAchievement_TypeDefinitionIndex = 27257;

	class NXPToyAchievement : public Il2CppObject
	{
	public:
		::System::String* achievementID; // 0x10
		::System::String* name; // 0x18
		::System::Int32 type; // 0x20
		::System::Int32 state; // 0x24
		::System::Int32 currentSteps; // 0x28
		::System::Int32 totalSteps; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYACHIEVEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

