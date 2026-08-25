#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAccountID_t; }

#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2DF20)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2DF30)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DF40)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2DFB0)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2CE10)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DFC0)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DFD0)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DFE0)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DFF0)
#define NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2E000)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamAccountID_t_TypeDefinitionIndex = 26062;

	class NXPSteamAccountID_t : public Il2CppObject
	{
	public:
		::System::UInt32 m_AccountID; // 0x10

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPSteamAccountID_t* arg, ::NPA::Ex::Steam::NXPSteamAccountID_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::NPA::Ex::Steam::NXPSteamAccountID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPSteamAccountID_t* arg, ::NPA::Ex::Steam::NXPSteamAccountID_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::NPA::Ex::Steam::NXPSteamAccountID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAccountID_t* op_Explicit(::System::UInt32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamAccountID_t*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 op_Explicit(::NPA::Ex::Steam::NXPSteamAccountID_t* arg)
		{
			return (return (::System::UInt32(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPSteamAccountID_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPSteamAccountID_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMACCOUNTID_T_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

