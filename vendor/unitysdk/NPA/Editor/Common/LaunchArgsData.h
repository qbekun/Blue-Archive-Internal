#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_LAUNCHARGSDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C46E90)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int LaunchArgsData_TypeDefinitionIndex = 26849;

	class LaunchArgsData : public Il2CppObject
	{
	public:
		::System::String* ticket; // 0x10
		::System::String* npp; // 0x18
		::System::String* sid; // 0x20
		::System::String* region; // 0x28
		::System::String* executionInfo; // 0x30
		::System::String* plog; // 0x38
		::System::String* cefDebugPort; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_LAUNCHARGSDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

