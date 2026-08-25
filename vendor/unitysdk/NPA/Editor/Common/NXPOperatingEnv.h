#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPOperatingEnv; }

#define NPA_EDITOR_COMMON_NXPOPERATINGENV_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C459A0)
#define NPA_EDITOR_COMMON_NXPOPERATINGENV_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C459B0)
#define NPA_EDITOR_COMMON_NXPOPERATINGENV_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9C459C0)
#define NPA_EDITOR_COMMON_NXPOPERATINGENV_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C459D0)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPOperatingEnv_TypeDefinitionIndex = 26842;

	class NXPOperatingEnv : public Il2CppObject
	{
	public:
		::System::String* _value; // 0x10
		::NPA::Editor::Common::NXPOperatingEnv* Undefined; // 0x0
		::NPA::Editor::Common::NXPOperatingEnv* Editor; // 0x8
		::NPA::Editor::Common::NXPOperatingEnv* Windows; // 0x10
		::NPA::Editor::Common::NXPOperatingEnv* WindowsOnSteam; // 0x18
		::NPA::Editor::Common::NXPOperatingEnv* WindowsOnEpic; // 0x20
		::NPA::Editor::Common::NXPOperatingEnv* Mac; // 0x28
		::NPA::Editor::Common::NXPOperatingEnv* PlayStation4; // 0x30
		::NPA::Editor::Common::NXPOperatingEnv* PlayStation4Pro; // 0x38
		::NPA::Editor::Common::NXPOperatingEnv* PlayStation5; // 0x40
		::NPA::Editor::Common::NXPOperatingEnv* PlayStation5Pro; // 0x48
		::NPA::Editor::Common::NXPOperatingEnv* XboxOne; // 0x50
		::NPA::Editor::Common::NXPOperatingEnv* XboxOneS; // 0x58
		::NPA::Editor::Common::NXPOperatingEnv* XboxOneX; // 0x60
		::NPA::Editor::Common::NXPOperatingEnv* XboxOneXDevKit; // 0x68
		::NPA::Editor::Common::NXPOperatingEnv* XboxScarlettLockhart; // 0x70
		::NPA::Editor::Common::NXPOperatingEnv* XboxScarlettAnaconda; // 0x78
		::NPA::Editor::Common::NXPOperatingEnv* XboxScarlettDevKit; // 0x80
		::NPA::Editor::Common::NXPOperatingEnv* Switch; // 0x88

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPOPERATINGENV_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPOPERATINGENV_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* op_Implicit(::NPA::Editor::Common::NXPOperatingEnv* arg)
		{
			return (return (::System::String*(*)(::NPA::Editor::Common::NXPOperatingEnv*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPOPERATINGENV_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPOPERATINGENV_.CCTOR_OFFSET))(nullptr);
		}

	};
}

