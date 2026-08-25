#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAppId_t; }

#define NPA_EX_STEAM_NXPSTEAMAPPID_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2E1B0)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D28370)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E1C0)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2E250)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2C760)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2C710)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E260)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E270)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E280)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2E290)
#define NPA_EX_STEAM_NXPSTEAMAPPID_T_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2E2A0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamAppId_t_TypeDefinitionIndex = 26064;

	class NXPSteamAppId_t : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamAppId_t* Invalid; // 0x0
		::System::UInt32 m_AppId; // 0x10

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPSteamAppId_t* arg, ::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPSteamAppId_t* arg, ::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAppId_t* op_Explicit(::System::UInt32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamAppId_t*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 op_Explicit(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::UInt32(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPID_T_.CCTOR_OFFSET))(nullptr);
		}

	};
}

