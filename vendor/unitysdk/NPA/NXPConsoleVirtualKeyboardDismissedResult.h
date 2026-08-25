#pragma once
#include "../unitysdk.h"

#define NPA_NXPCONSOLEVIRTUALKEYBOARDDISMISSEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC6A0)

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleVirtualKeyboardDismissedResult_TypeDefinitionIndex = 25509;

	class NXPConsoleVirtualKeyboardDismissedResult : public Il2CppObject
	{
	public:
		::System::Boolean submitted; // 0x20
		::System::String* submittedText; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEVIRTUALKEYBOARDDISMISSEDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

