#pragma once
#include "../unitysdk.h"

namespace NPA::SimpleJSON { class JSONArray; }

#define NPA_NXPGETDLCPRODUCTRESULT_TOJSONARRAY_OFFSET UNITYSDK_OFFSET(0x9BE5F80)
#define NPA_NXPGETDLCPRODUCTRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BE6320)
#define NPA_NXPGETDLCPRODUCTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE66F0)

namespace NPA
{
	inline static constexpr unsigned int NXPGetDLCProductResult_TypeDefinitionIndex = 25761;

	class NXPGetDLCProductResult : public Il2CppObject
	{
	public:
		Il2CppObject* DLCProductDefinitions; // 0x20

		::NPA::SimpleJSON::JSONArray* ToJsonArray()
		{
			return (return (::NPA::SimpleJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETDLCPRODUCTRESULT_TOJSONARRAY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETDLCPRODUCTRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETDLCPRODUCTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

