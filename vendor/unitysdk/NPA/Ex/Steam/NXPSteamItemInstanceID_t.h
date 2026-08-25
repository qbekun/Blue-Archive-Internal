#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamItemInstanceID_t; }

#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2DD90)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2A290)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DDA0)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2DE40)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DE30)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DE50)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DEA0)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DEB0)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DEC0)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2DED0)
#define NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2DEE0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamItemInstanceID_t_TypeDefinitionIndex = 26061;

	class NXPSteamItemInstanceID_t : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamItemInstanceID_t* Invalid; // 0x0
		::System::UInt64 m_SteamItemInstanceID; // 0x10

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPSteamItemInstanceID_t* arg, ::NPA::Ex::Steam::NXPSteamItemInstanceID_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemInstanceID_t*, ::NPA::Ex::Steam::NXPSteamItemInstanceID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPSteamItemInstanceID_t* arg, ::NPA::Ex::Steam::NXPSteamItemInstanceID_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemInstanceID_t*, ::NPA::Ex::Steam::NXPSteamItemInstanceID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamItemInstanceID_t* op_Explicit(::System::UInt64 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamItemInstanceID_t*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 op_Explicit(::NPA::Ex::Steam::NXPSteamItemInstanceID_t* arg)
		{
			return (return (::System::UInt64(*)(::NPA::Ex::Steam::NXPSteamItemInstanceID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPSteamItemInstanceID_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemInstanceID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPSteamItemInstanceID_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamItemInstanceID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMITEMINSTANCEID_T_.CCTOR_OFFSET))(nullptr);
		}

	};
}

