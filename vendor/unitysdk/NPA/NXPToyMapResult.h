#pragma once
#include "../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_NXPTOYMAPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC0770)

namespace NPA
{
	inline static constexpr unsigned int NXPToyMapResult_TypeDefinitionIndex = 25553;

	class NXPToyMapResult : public Il2CppObject
	{
	public:
		::NPA::SimpleJSON::JSONNode* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYMAPRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

