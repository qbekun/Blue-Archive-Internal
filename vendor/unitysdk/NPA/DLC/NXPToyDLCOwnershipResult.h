#pragma once
#include "../../unitysdk.h"

namespace NPA::DLC { class NXPToyDLCOwnershipResult; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_DLC_NXPTOYDLCOWNERSHIPRESULT_GENERATEOBJECT_OFFSET UNITYSDK_OFFSET(0x9CD74B0)
#define NPA_DLC_NXPTOYDLCOWNERSHIPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD7C10)

namespace NPA::DLC
{
	inline static constexpr unsigned int NXPToyDLCOwnershipResult_TypeDefinitionIndex = 27462;

	class NXPToyDLCOwnershipResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::NPA::DLC::NXPToyDLCOwnershipResult* GenerateObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::DLC::NXPToyDLCOwnershipResult*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCOWNERSHIPRESULT_GENERATEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCOWNERSHIPRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

