#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_OPERATE_NXPNEXONLINKCREDENTIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C18470)

namespace NPA::Editor::Operate
{
	inline static constexpr unsigned int NXPNexonLinkCredential_TypeDefinitionIndex = 26606;

	class NXPNexonLinkCredential : public Il2CppObject
	{
	public:
		::System::String* Guid; // 0x10
		::System::String* Token; // 0x18
		::System::String* ServiceId; // 0x20
		::System::String* MemID; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPNEXONLINKCREDENTIAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

