#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPHAuthTicket; }

#define NPA_EX_STEAM_NXPHAUTHTICKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2D960)
#define NPA_EX_STEAM_NXPHAUTHTICKET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2D970)
#define NPA_EX_STEAM_NXPHAUTHTICKET_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2D980)
#define NPA_EX_STEAM_NXPHAUTHTICKET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2DA20)
#define NPA_EX_STEAM_NXPHAUTHTICKET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DA10)
#define NPA_EX_STEAM_NXPHAUTHTICKET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2DA30)
#define NPA_EX_STEAM_NXPHAUTHTICKET_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DA80)
#define NPA_EX_STEAM_NXPHAUTHTICKET_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2DA90)
#define NPA_EX_STEAM_NXPHAUTHTICKET_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2DAA0)
#define NPA_EX_STEAM_NXPHAUTHTICKET_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2DAB0)
#define NPA_EX_STEAM_NXPHAUTHTICKET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2DAC0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPHAuthTicket_TypeDefinitionIndex = 26058;

	class NXPHAuthTicket : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPHAuthTicket* Invalid; // 0x0
		::System::UInt32 m_HAuthTicket; // 0x10

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPHAuthTicket* arg, ::NPA::Ex::Steam::NXPHAuthTicket* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHAuthTicket*, ::NPA::Ex::Steam::NXPHAuthTicket*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPHAuthTicket* arg, ::NPA::Ex::Steam::NXPHAuthTicket* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHAuthTicket*, ::NPA::Ex::Steam::NXPHAuthTicket*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPHAuthTicket* op_Explicit(::System::UInt32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPHAuthTicket*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 op_Explicit(::NPA::Ex::Steam::NXPHAuthTicket* arg)
		{
			return (return (::System::UInt32(*)(::NPA::Ex::Steam::NXPHAuthTicket*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPHAuthTicket* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHAuthTicket*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPHAuthTicket* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHAuthTicket*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHAUTHTICKET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

