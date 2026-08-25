#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDGLOBAL_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x136F4B0)
#define MX_LOGIC_BATTLES_GROUNDGLOBAL_START_OFFSET UNITYSDK_OFFSET(0x136F4C0)
#define MX_LOGIC_BATTLES_GROUNDGLOBAL_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x136F550)
#define MX_LOGIC_BATTLES_GROUNDGLOBAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x136F560)
#define MX_LOGIC_BATTLES_GROUNDGLOBAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x136F570)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundGlobal_TypeDefinitionIndex = 14362;

	class GroundGlobal : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Position; // 0x10
		Il2CppObject* GroundEvents; // 0x20
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x28

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDGLOBAL_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDGLOBAL_START_OFFSET))(nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDGLOBAL_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDGLOBAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDGLOBAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

