#pragma once
#include "../../unitysdk.h"

#define NPA_PUSH_NXPPUSHAPPLAUNCHBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC7820)
#define NPA_PUSH_NXPPUSHAPPLAUNCHBUTTON_APPENDJSONTO_OFFSET UNITYSDK_OFFSET(0x9CCA580)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPPushAppLaunchButton_TypeDefinitionIndex = 27348;

	class NXPPushAppLaunchButton : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHAPPLAUNCHBUTTON_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void AppendJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHAPPLAUNCHBUTTON_APPENDJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

