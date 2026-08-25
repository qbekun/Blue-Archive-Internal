#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPBASEPLATEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C19F40)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPBasePlateInfo_TypeDefinitionIndex = 26615;

	class NXPBasePlateInfo : public Il2CppObject
	{
	public:
		::System::Int32 groupCode; // 0x10
		::System::String* displayTitle; // 0x18
		::System::String* language; // 0x20
		Il2CppObject* recipes; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPBASEPLATEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

