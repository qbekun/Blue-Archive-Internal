#pragma once
#include "../unitysdk.h"

#define NPA_NXPCONSOLERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC680)

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleResult_TypeDefinitionIndex = 25507;

	class NXPConsoleResult : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::String* message; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

