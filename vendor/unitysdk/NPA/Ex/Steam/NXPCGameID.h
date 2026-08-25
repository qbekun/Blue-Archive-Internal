#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAppId_t; }
namespace NPA::Ex::Steam { class NXPCGameID; }

#define NPA_EX_STEAM_NXPCGAMEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2C340)
#define NPA_EX_STEAM_NXPCGAMEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2C350)
#define NPA_EX_STEAM_NXPCGAMEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2C430)
#define NPA_EX_STEAM_NXPCGAMEID_ISSTEAMAPP_OFFSET UNITYSDK_OFFSET(0x9D2C4C0)
#define NPA_EX_STEAM_NXPCGAMEID_ISMOD_OFFSET UNITYSDK_OFFSET(0x9D2C4E0)
#define NPA_EX_STEAM_NXPCGAMEID_ISSHORTCUT_OFFSET UNITYSDK_OFFSET(0x9D2C4F0)
#define NPA_EX_STEAM_NXPCGAMEID_ISP2PFILE_OFFSET UNITYSDK_OFFSET(0x9D2C500)
#define NPA_EX_STEAM_NXPCGAMEID_APPID_OFFSET UNITYSDK_OFFSET(0x9D2C510)
#define NPA_EX_STEAM_NXPCGAMEID_TYPE_OFFSET UNITYSDK_OFFSET(0x9D2C4D0)
#define NPA_EX_STEAM_NXPCGAMEID_MODID_OFFSET UNITYSDK_OFFSET(0x9D2C520)
#define NPA_EX_STEAM_NXPCGAMEID_ISVALID_OFFSET UNITYSDK_OFFSET(0x9D2C530)
#define NPA_EX_STEAM_NXPCGAMEID_RESET_OFFSET UNITYSDK_OFFSET(0x9D2C770)
#define NPA_EX_STEAM_NXPCGAMEID_SET_OFFSET UNITYSDK_OFFSET(0x9D2C780)
#define NPA_EX_STEAM_NXPCGAMEID_SETAPPID_OFFSET UNITYSDK_OFFSET(0x9D2C3D0)
#define NPA_EX_STEAM_NXPCGAMEID_SETTYPE_OFFSET UNITYSDK_OFFSET(0x9D2C4A0)
#define NPA_EX_STEAM_NXPCGAMEID_SETMODID_OFFSET UNITYSDK_OFFSET(0x9D2C4B0)
#define NPA_EX_STEAM_NXPCGAMEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2C790)
#define NPA_EX_STEAM_NXPCGAMEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2C7A0)
#define NPA_EX_STEAM_NXPCGAMEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2C820)
#define NPA_EX_STEAM_NXPCGAMEID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2C810)
#define NPA_EX_STEAM_NXPCGAMEID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2C830)
#define NPA_EX_STEAM_NXPCGAMEID_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2C840)
#define NPA_EX_STEAM_NXPCGAMEID_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2C850)
#define NPA_EX_STEAM_NXPCGAMEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2C860)
#define NPA_EX_STEAM_NXPCGAMEID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2C870)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPCGameID_TypeDefinitionIndex = 26056;

	class NXPCGameID : public Il2CppObject
	{
	public:
		::System::UInt64 m_GameID; // 0x10

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::Ex::Steam::NXPSteamAppId_t* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSteamApp()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_ISSTEAMAPP_OFFSET))(nullptr);
		}

		::System::Boolean IsMod()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_ISMOD_OFFSET))(nullptr);
		}

		::System::Boolean IsShortcut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_ISSHORTCUT_OFFSET))(nullptr);
		}

		::System::Boolean IsP2PFile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_ISP2PFILE_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAppId_t* AppID()
		{
			return (return (::NPA::Ex::Steam::NXPSteamAppId_t*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_APPID_OFFSET))(nullptr);
		}

		EGameIDType* Type()
		{
			return (return (EGameIDType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_TYPE_OFFSET))(nullptr);
		}

		::System::UInt32 ModID()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_MODID_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_ISVALID_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_RESET_OFFSET))(nullptr);
		}

		::System::Void Set(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_SET_OFFSET))(arg, nullptr);
		}

		::System::Void SetAppID(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_SETAPPID_OFFSET))(arg, nullptr);
		}

		::System::Void SetType(EGameIDType* arg)
		{
			((::System::Void(*)(EGameIDType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_SETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetModID(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_SETMODID_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPCGameID* arg, ::NPA::Ex::Steam::NXPCGameID* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCGameID*, ::NPA::Ex::Steam::NXPCGameID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPCGameID* arg, ::NPA::Ex::Steam::NXPCGameID* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCGameID*, ::NPA::Ex::Steam::NXPCGameID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPCGameID* op_Explicit(::System::UInt64 arg)
		{
			return (return (::NPA::Ex::Steam::NXPCGameID*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 op_Explicit(::NPA::Ex::Steam::NXPCGameID* arg)
		{
			return (return (::System::UInt64(*)(::NPA::Ex::Steam::NXPCGameID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPCGameID* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCGameID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPCGameID* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPCGameID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCGAMEID_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

