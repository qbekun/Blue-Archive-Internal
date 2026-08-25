#pragma once
#include "../../unitysdk.h"

namespace NPA::DLC { class NXPToyDLCProductResult; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_DLC_NXPTOYDLCPRODUCTRESULT_GENERATEOBJECT_OFFSET UNITYSDK_OFFSET(0x9CD7D00)
#define NPA_DLC_NXPTOYDLCPRODUCTRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CD8510)
#define NPA_DLC_NXPTOYDLCPRODUCTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD84A0)

namespace NPA::DLC
{
	inline static constexpr unsigned int NXPToyDLCProductResult_TypeDefinitionIndex = 27464;

	class NXPToyDLCProductResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::NPA::DLC::NXPToyDLCProductResult* GenerateObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::DLC::NXPToyDLCProductResult*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCPRODUCTRESULT_GENERATEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCPRODUCTRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_DLC_NXPTOYDLCPRODUCTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

