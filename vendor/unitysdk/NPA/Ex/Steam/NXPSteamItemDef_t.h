#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamItemDef_t; }

#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2DCA0)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D29810)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DCB0)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2DD30)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DD20)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DD40)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DD50)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DD60)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DD70)
#define NPA_EX_STEAM_NXPSTEAMITEMDEF_T_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2DD80)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamItemDef_t_TypeDefinitionIndex = 26060;

	class NXPSteamItemDef_t : public Il2CppObject
	{
	public:
		::System::Int32 m_SteamItemDef; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, ::NPA::Ex::Steam::NXPSteamItemDef_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::NPA::Ex::Steam::NXPSteamItemDef_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, ::NPA::Ex::Steam::NXPSteamItemDef_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::NPA::Ex::Steam::NXPSteamItemDef_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamItemDef_t* op_Explicit(::System::Int32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamItemDef_t*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::NPA::Ex::Steam::NXPSteamItemDef_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPSteamItemDef_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPSteamItemDef_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMDEF_T_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

