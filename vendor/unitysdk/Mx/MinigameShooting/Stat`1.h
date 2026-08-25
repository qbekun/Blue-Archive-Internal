#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }

#define MX_MINIGAMESHOOTING_STAT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_GET_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_SET_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_GET_RATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_ADDSTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_SET_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_GET_BASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_MULTIPLAYSTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_SET_BASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_SUM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_SET_RATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_STAT`1_GET_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Stat`1_TypeDefinitionIndex = 15104;

	class Stat`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Base_k__BackingField; // 0x0
		Il2CppObject* _Add_k__BackingField; // 0x0
		::MX::Core::Math::BasisPoint* _Rate_k__BackingField; // 0x0
		::System::Action* onChanged; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Add()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_GET_ADD_OFFSET))(nullptr);
		}

		::System::Void set_Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_SET_ADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Multiply(Il2CppObject* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_Rate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_GET_RATE_OFFSET))(nullptr);
		}

		::System::Void AddStat(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_ADDSTAT_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_SET_ONCHANGED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Base()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_GET_BASE_OFFSET))(nullptr);
		}

		::System::Void MultiplayStat(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_MULTIPLAYSTAT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Base(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_SET_BASE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Sum(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_SUM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Rate(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_SET_RATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Action* get_OnChanged()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_STAT`1_GET_ONCHANGED_OFFSET))(nullptr);
		}

	};
}

