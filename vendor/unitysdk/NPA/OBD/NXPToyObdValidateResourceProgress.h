#pragma once
#include "../../unitysdk.h"

#define NPA_OBD_NXPTOYOBDVALIDATERESOURCEPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC730)

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdValidateResourceProgress_TypeDefinitionIndex = 27411;

	class NXPToyObdValidateResourceProgress : public Il2CppObject
	{
	public:
		::System::Int32 verifiedCount; // 0x10
		::System::Int32 totalCount; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_OBD_NXPTOYOBDVALIDATERESOURCEPROGRESS_.CTOR_OFFSET))(nullptr);
		}

	};
}

