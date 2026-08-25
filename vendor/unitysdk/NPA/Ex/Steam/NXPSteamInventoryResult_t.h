#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t; }

#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2DB00)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2DB10)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DB20)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2DBC0)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DBB0)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DBD0)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DC20)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DC30)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DC40)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2DC50)
#define NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2DC60)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamInventoryResult_t_TypeDefinitionIndex = 26059;

	class NXPSteamInventoryResult_t : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamInventoryResult_t* Invalid; // 0x0
		::System::Int32 m_SteamInventoryResult; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg, ::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg, ::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamInventoryResult_t* op_Explicit(::System::Int32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamInventoryResult_t*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMINVENTORYRESULT_T_.CCTOR_OFFSET))(nullptr);
		}

	};
}

