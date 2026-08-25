#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPCSteamID; }
namespace NPA::Ex::Steam { class NXPSteamAccountID_t; }
namespace NPA::Ex::Steam { class ENXPSteamUniverse; }
namespace NPA::Ex::Steam { class ENXPSteamAccountType; }

#define NPA_EX_STEAM_NXPCSTEAMID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2C880)
#define NPA_EX_STEAM_NXPCSTEAMID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2C9D0)
#define NPA_EX_STEAM_NXPCSTEAMID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2CB80)
#define NPA_EX_STEAM_NXPCSTEAMID_SET_OFFSET UNITYSDK_OFFSET(0x9D2C8F0)
#define NPA_EX_STEAM_NXPCSTEAMID_INSTANCEDSET_OFFSET UNITYSDK_OFFSET(0x9D2CAF0)
#define NPA_EX_STEAM_NXPCSTEAMID_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D2CBF0)
#define NPA_EX_STEAM_NXPCSTEAMID_CREATEBLANKANONLOGON_OFFSET UNITYSDK_OFFSET(0x9D2CC00)
#define NPA_EX_STEAM_NXPCSTEAMID_CREATEBLANKANONUSERLOGON_OFFSET UNITYSDK_OFFSET(0x9D2CC60)
#define NPA_EX_STEAM_NXPCSTEAMID_BBLANKANONACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2CCC0)
#define NPA_EX_STEAM_NXPCSTEAMID_BGAMESERVERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2CEB0)
#define NPA_EX_STEAM_NXPCSTEAMID_BPERSISTENTGAMESERVERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2CF40)
#define NPA_EX_STEAM_NXPCSTEAMID_BANONGAMESERVERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2CF90)
#define NPA_EX_STEAM_NXPCSTEAMID_BCONTENTSERVERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2CFE0)
#define NPA_EX_STEAM_NXPCSTEAMID_BCLANACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2D030)
#define NPA_EX_STEAM_NXPCSTEAMID_BCHATACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2D080)
#define NPA_EX_STEAM_NXPCSTEAMID_ISLOBBY_OFFSET UNITYSDK_OFFSET(0x9D2D0D0)
#define NPA_EX_STEAM_NXPCSTEAMID_BINDIVIDUALACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2D150)
#define NPA_EX_STEAM_NXPCSTEAMID_BANONACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2CE20)
#define NPA_EX_STEAM_NXPCSTEAMID_BANONUSERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2D1D0)
#define NPA_EX_STEAM_NXPCSTEAMID_BCONSOLEUSERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D2D220)
#define NPA_EX_STEAM_NXPCSTEAMID_SETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9D2CB90)
#define NPA_EX_STEAM_NXPCSTEAMID_SETACCOUNTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9D2CBD0)
#define NPA_EX_STEAM_NXPCSTEAMID_SETEACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x9D2CBB0)
#define NPA_EX_STEAM_NXPCSTEAMID_SETEUNIVERSE_OFFSET UNITYSDK_OFFSET(0x9D2CBA0)
#define NPA_EX_STEAM_NXPCSTEAMID_GETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9D2CE00)
#define NPA_EX_STEAM_NXPCSTEAMID_GETUNACCOUNTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9D2CEA0)
#define NPA_EX_STEAM_NXPCSTEAMID_GETEACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x9D2CF30)
#define NPA_EX_STEAM_NXPCSTEAMID_GETEUNIVERSE_OFFSET UNITYSDK_OFFSET(0x9D2D270)
#define NPA_EX_STEAM_NXPCSTEAMID_ISVALID_OFFSET UNITYSDK_OFFSET(0x9D2D280)
#define NPA_EX_STEAM_NXPCSTEAMID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2D4A0)
#define NPA_EX_STEAM_NXPCSTEAMID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2D4B0)
#define NPA_EX_STEAM_NXPCSTEAMID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2D550)
#define NPA_EX_STEAM_NXPCSTEAMID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2D540)
#define NPA_EX_STEAM_NXPCSTEAMID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2D560)
#define NPA_EX_STEAM_NXPCSTEAMID_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2D5B0)
#define NPA_EX_STEAM_NXPCSTEAMID_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2D5C0)
#define NPA_EX_STEAM_NXPCSTEAMID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2D5D0)
#define NPA_EX_STEAM_NXPCSTEAMID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2D5E0)
#define NPA_EX_STEAM_NXPCSTEAMID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2D5F0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPCSteamID_TypeDefinitionIndex = 26057;

	class NXPCSteamID : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPCSteamID* Nil; // 0x0
		::NPA::Ex::Steam::NXPCSteamID* OutofDateGS; // 0x8
		::NPA::Ex::Steam::NXPCSteamID* LanModeGS; // 0x10
		::NPA::Ex::Steam::NXPCSteamID* NotInitYetGS; // 0x18
		::NPA::Ex::Steam::NXPCSteamID* NonSteamGS; // 0x20
		::System::UInt64 m_SteamID; // 0x10

		::System::Void .ctor(::NPA::Ex::Steam::NXPSteamAccountID_t* arg, ::NPA::Ex::Steam::ENXPSteamUniverse* arg, ::NPA::Ex::Steam::ENXPSteamAccountType* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::NPA::Ex::Steam::ENXPSteamUniverse*, ::NPA::Ex::Steam::ENXPSteamAccountType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::NPA::Ex::Steam::NXPSteamAccountID_t* arg, ::System::UInt32 arg, ::NPA::Ex::Steam::ENXPSteamUniverse* arg, ::NPA::Ex::Steam::ENXPSteamAccountType* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::System::UInt32, ::NPA::Ex::Steam::ENXPSteamUniverse*, ::NPA::Ex::Steam::ENXPSteamAccountType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::NPA::Ex::Steam::NXPSteamAccountID_t* arg, ::NPA::Ex::Steam::ENXPSteamUniverse* arg, ::NPA::Ex::Steam::ENXPSteamAccountType* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::NPA::Ex::Steam::ENXPSteamUniverse*, ::NPA::Ex::Steam::ENXPSteamAccountType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InstancedSet(::NPA::Ex::Steam::NXPSteamAccountID_t* arg, ::System::UInt32 arg, ::NPA::Ex::Steam::ENXPSteamUniverse* arg, ::NPA::Ex::Steam::ENXPSteamAccountType* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::System::UInt32, ::NPA::Ex::Steam::ENXPSteamUniverse*, ::NPA::Ex::Steam::ENXPSteamAccountType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_INSTANCEDSET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_CLEAR_OFFSET))(nullptr);
		}

		::System::Void CreateBlankAnonLogon(::NPA::Ex::Steam::ENXPSteamUniverse* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::ENXPSteamUniverse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_CREATEBLANKANONLOGON_OFFSET))(arg, nullptr);
		}

		::System::Void CreateBlankAnonUserLogon(::NPA::Ex::Steam::ENXPSteamUniverse* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::ENXPSteamUniverse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_CREATEBLANKANONUSERLOGON_OFFSET))(arg, nullptr);
		}

		::System::Boolean BBlankAnonAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BBLANKANONACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BGameServerAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BGAMESERVERACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BPersistentGameServerAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BPERSISTENTGAMESERVERACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BAnonGameServerAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BANONGAMESERVERACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BContentServerAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BCONTENTSERVERACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BClanAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BCLANACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BChatAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BCHATACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsLobby()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_ISLOBBY_OFFSET))(nullptr);
		}

		::System::Boolean BIndividualAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BINDIVIDUALACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BAnonAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BANONACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BAnonUserAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BANONUSERACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean BConsoleUserAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_BCONSOLEUSERACCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetAccountID(::NPA::Ex::Steam::NXPSteamAccountID_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAccountID_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_SETACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void SetAccountInstance(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_SETACCOUNTINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEAccountType(::NPA::Ex::Steam::ENXPSteamAccountType* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::ENXPSteamAccountType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_SETEACCOUNTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEUniverse(::NPA::Ex::Steam::ENXPSteamUniverse* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::ENXPSteamUniverse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_SETEUNIVERSE_OFFSET))(arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAccountID_t* GetAccountID()
		{
			return (return (::NPA::Ex::Steam::NXPSteamAccountID_t*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_GETACCOUNTID_OFFSET))(nullptr);
		}

		::System::UInt32 GetUnAccountInstance()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_GETUNACCOUNTINSTANCE_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::ENXPSteamAccountType* GetEAccountType()
		{
			return (return (::NPA::Ex::Steam::ENXPSteamAccountType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_GETEACCOUNTTYPE_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::ENXPSteamUniverse* GetEUniverse()
		{
			return (return (::NPA::Ex::Steam::ENXPSteamUniverse*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_GETEUNIVERSE_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_ISVALID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPCSteamID* arg, ::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCSteamID*, ::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPCSteamID* arg, ::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCSteamID*, ::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPCSteamID* op_Explicit(::System::UInt64 arg)
		{
			return (return (::NPA::Ex::Steam::NXPCSteamID*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 op_Explicit(::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::UInt64(*)(::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPCSTEAMID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

