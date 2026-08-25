#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }

#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2E010)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2E020)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E030)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2E0D0)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E0C0)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E0E0)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E130)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E140)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E150)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2E160)
#define NPA_EX_STEAM_NXPSTEAMAPICALL_T_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2E170)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamAPICall_t_TypeDefinitionIndex = 26063;

	class NXPSteamAPICall_t : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamAPICall_t* Invalid; // 0x0
		::System::UInt64 m_SteamAPICall; // 0x10

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPSteamAPICall_t* arg, ::NPA::Ex::Steam::NXPSteamAPICall_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, ::NPA::Ex::Steam::NXPSteamAPICall_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPSteamAPICall_t* arg, ::NPA::Ex::Steam::NXPSteamAPICall_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, ::NPA::Ex::Steam::NXPSteamAPICall_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAPICall_t* op_Explicit(::System::UInt64 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamAPICall_t*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 op_Explicit(::NPA::Ex::Steam::NXPSteamAPICall_t* arg)
		{
			return (return (::System::UInt64(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPSteamAPICall_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPSteamAPICall_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICALL_T_.CCTOR_OFFSET))(nullptr);
		}

	};
}

