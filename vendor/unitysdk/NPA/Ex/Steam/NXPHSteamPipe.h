#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPHSteamPipe; }

#define NPA_EX_STEAM_NXPHSTEAMPIPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2E480)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D2E490)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E4A0)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D2E520)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E510)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D2E530)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E540)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9D2E550)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D2E560)
#define NPA_EX_STEAM_NXPHSTEAMPIPE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D2E570)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPHSteamPipe_TypeDefinitionIndex = 26066;

	class NXPHSteamPipe : public Il2CppObject
	{
	public:
		::System::Int32 m_HSteamPipe; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::NPA::Ex::Steam::NXPHSteamPipe* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::NPA::Ex::Steam::NXPHSteamPipe*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Ex::Steam::NXPHSteamPipe* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::NPA::Ex::Steam::NXPHSteamPipe*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPHSteamPipe* op_Explicit(::System::Int32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPHSteamPipe*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::NPA::Ex::Steam::NXPHSteamPipe* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Ex::Steam::NXPHSteamPipe* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::Steam::NXPHSteamPipe* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPHSTEAMPIPE_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

