#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPHSteamUser; }

#define NPA_EX_STEAM_NXPHSTEAMUSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2E580)
#define NPA_EX_STEAM_NXPHSTEAMUSER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2E590)
#define NPA_EX_STEAM_NXPHSTEAMUSER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E5A0)
#define NPA_EX_STEAM_NXPHSTEAMUSER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2E620)
#define NPA_EX_STEAM_NXPHSTEAMUSER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E610)
#define NPA_EX_STEAM_NXPHSTEAMUSER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E630)
#define NPA_EX_STEAM_NXPHSTEAMUSER_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E640)
#define NPA_EX_STEAM_NXPHSTEAMUSER_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E650)
#define NPA_EX_STEAM_NXPHSTEAMUSER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E660)
#define NPA_EX_STEAM_NXPHSTEAMUSER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2E670)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPHSteamUser_TypeDefinitionIndex = 26067;

	class NXPHSteamUser : public Il2CppObject
	{
	public:
		::System::Int32 m_HSteamUser; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamUser* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamUser*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamUser* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamUser*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPHSteamUser* op_Explicit(::System::Int32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPHSteamUser*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::NPA::Ex::Steam::NXPHSteamUser* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPHSteamUser* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPHSteamUser* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMUSER_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

