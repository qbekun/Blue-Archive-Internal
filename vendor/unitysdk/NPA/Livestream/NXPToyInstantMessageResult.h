#pragma once
#include "../../unitysdk.h"

#define NPA_LIVESTREAM_NXPTOYINSTANTMESSAGERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9870)

namespace NPA::Livestream
{
	inline static constexpr unsigned int NXPToyInstantMessageResult_TypeDefinitionIndex = 27481;

	class NXPToyInstantMessageResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_LIVESTREAM_NXPTOYINSTANTMESSAGERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

