#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYIMAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C28540)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyImageResponse_TypeDefinitionIndex = 26732;

	class NXPToyImageResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYIMAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

