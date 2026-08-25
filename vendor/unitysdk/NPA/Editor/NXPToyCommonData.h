#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class PlatformAuthMode; }
namespace NPA::Editor { class NXPToyCommonData; }

#define NPA_EDITOR_NXPTOYCOMMONDATA_GET_LOCALE_OFFSET UNITYSDK_OFFSET(0x9D423A0)
#define NPA_EDITOR_NXPTOYCOMMONDATA_SET_LOCALE_OFFSET UNITYSDK_OFFSET(0x9D423B0)
#define NPA_EDITOR_NXPTOYCOMMONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D423C0)
#define NPA_EDITOR_NXPTOYCOMMONDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9D426B0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyCommonData_TypeDefinitionIndex = 26135;

	class NXPToyCommonData : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::String* serviceId; // 0x18
		::System::String* clientId; // 0x20
		::System::Int32 termsApiVersion; // 0x28
		::System::Int32 policyApiVersion; // 0x2C
		::System::Boolean initCountryFlag; // 0x30
		::System::String* country; // 0x38
		::System::String* language; // 0x40
		::System::String* systemLocale; // 0x48
		::System::String* _locale_k__BackingField; // 0x50
		::System::String* uuid; // 0x58
		::System::String* uuid2; // 0x60
		::System::String* nxhwid; // 0x68
		::System::String* advertisingId; // 0x70
		::System::String* os; // 0x78
		::System::String* oe; // 0x80
		::System::String* sdkVersion; // 0x88
		::System::String* appVersion; // 0x90
		::System::String* appId; // 0x98
		::System::Int32 appVersionNumber; // 0xA0
		::System::String* deviceModel; // 0xA8
		::System::String* carrierName; // 0xB0
		::System::String* timeZone; // 0xB8
		::System::String* useMemberShip; // 0xC0
		::System::String* basePlate; // 0xC8
		::System::String* endingBanner; // 0xD0
		::System::String* nxkATL; // 0xD8
		::System::String* loginUIType; // 0xE0
		::System::String* ngmPatchUrl; // 0xE8
		::System::Int32 usePcDirectRun; // 0xF0
		::System::Int32 useBanDialog; // 0xF4
		::System::Boolean usePrimary; // 0xF8
		::NPA::Editor::PlatformAuthMode* platformAuthMode; // 0xFC
		::System::Single uiScaleFactor; // 0x100
		::System::Boolean useRegionLock; // 0x104
		::System::String* regionLockPlatform; // 0x108
		::System::Boolean useGbKrpc; // 0x110
		::System::Boolean useGbArena; // 0x111
		::System::Boolean useGbJppc; // 0x112
		::System::Boolean usePlayNow; // 0x113
		::System::String* clientPlatform; // 0x118
		::System::String* securityToken; // 0x120

		::System::String* get_locale()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCOMMONDATA_GET_LOCALE_OFFSET))(nullptr);
		}

		::System::Void set_locale(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCOMMONDATA_SET_LOCALE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCOMMONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean op_Implicit(::NPA::Editor::NXPToyCommonData* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::NXPToyCommonData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCOMMONDATA_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

