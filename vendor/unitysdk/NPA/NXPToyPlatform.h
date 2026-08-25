#pragma once
#include "../unitysdk.h"

namespace NPA { class INXPToyGame; }

#define NPA_NXPTOYPLATFORM_GETGAME_OFFSET UNITYSDK_OFFSET(0x9BCABC0)
#define NPA_NXPTOYPLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCAC20)

namespace NPA
{
	inline static constexpr unsigned int NXPToyPlatform_TypeDefinitionIndex = 25613;

	class NXPToyPlatform : public Il2CppObject
	{
	public:
		::NPA::INXPToyGame* GetGame()
		{
			return (return (::NPA::INXPToyGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPLATFORM_GETGAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPLATFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

