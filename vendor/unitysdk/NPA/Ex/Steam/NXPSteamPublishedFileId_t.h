#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamPublishedFileId_t; }

#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2E2E0)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2E2F0)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E300)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2E3A0)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E390)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E3B0)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E400)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E410)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E420)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2E430)
#define NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2E440)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamPublishedFileId_t_TypeDefinitionIndex = 26065;

	class NXPSteamPublishedFileId_t : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamPublishedFileId_t* Invalid; // 0x0
		::System::UInt64 m_PublishedFileId; // 0x10

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPSteamPublishedFileId_t* arg, ::NPA::Ex::Steam::NXPSteamPublishedFileId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamPublishedFileId_t*, ::NPA::Ex::Steam::NXPSteamPublishedFileId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPSteamPublishedFileId_t* arg, ::NPA::Ex::Steam::NXPSteamPublishedFileId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamPublishedFileId_t*, ::NPA::Ex::Steam::NXPSteamPublishedFileId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamPublishedFileId_t* op_Explicit(::System::UInt64 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamPublishedFileId_t*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 op_Explicit(::NPA::Ex::Steam::NXPSteamPublishedFileId_t* arg)
		{
			return (return (::System::UInt64(*)(::NPA::Ex::Steam::NXPSteamPublishedFileId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPSteamPublishedFileId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamPublishedFileId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPSteamPublishedFileId_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamPublishedFileId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMPUBLISHEDFILEID_T_.CCTOR_OFFSET))(nullptr);
		}

	};
}

