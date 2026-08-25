#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2A000)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyExistBatchNoticeResponse_TypeDefinitionIndex = 26730;

	class NXPToyExistBatchNoticeResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

