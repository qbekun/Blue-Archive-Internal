#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYINITIALINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCC890)

namespace NPA
{
	inline static constexpr unsigned int NXPToyInitialInfoResult_TypeDefinitionIndex = 25658;

	class NXPToyInitialInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38
		ExtendedResultSet* extendedResult; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYINITIALINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

