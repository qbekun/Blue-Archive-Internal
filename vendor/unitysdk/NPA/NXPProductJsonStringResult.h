#pragma once
#include "../unitysdk.h"

#define NPA_NXPPRODUCTJSONSTRINGRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6750)

namespace NPA
{
	inline static constexpr unsigned int NXPProductJsonStringResult_TypeDefinitionIndex = 25766;

	class NXPProductJsonStringResult : public Il2CppObject
	{
	public:
		::System::String* ItemJsonString; // 0x20
		Il2CppObject* Transactions; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPRODUCTJSONSTRINGRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

