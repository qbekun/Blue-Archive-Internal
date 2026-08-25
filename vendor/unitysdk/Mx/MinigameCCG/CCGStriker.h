#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntityStatType; }
namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class ICCGCharacterData; }

#define MX_MINIGAMECCG_CCGSTRIKER_GET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1DCAA70)
#define MX_MINIGAMECCG_CCGSTRIKER_GETSTATBASEVALUE_OFFSET UNITYSDK_OFFSET(0x1DCAA80)
#define MX_MINIGAMECCG_CCGSTRIKER_GET_SWAPCOST_OFFSET UNITYSDK_OFFSET(0x1DCABF0)
#define MX_MINIGAMECCG_CCGSTRIKER_GET_ISSPAWNED_OFFSET UNITYSDK_OFFSET(0x1DCAC10)
#define MX_MINIGAMECCG_CCGSTRIKER_RESET_OFFSET UNITYSDK_OFFSET(0x1DCAC20)
#define MX_MINIGAMECCG_CCGSTRIKER_GET_SHIELD_OFFSET UNITYSDK_OFFSET(0x1DCAC30)
#define MX_MINIGAMECCG_CCGSTRIKER_GET_ISFRONT_OFFSET UNITYSDK_OFFSET(0x1DCAC40)
#define MX_MINIGAMECCG_CCGSTRIKER_SET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1DCAC60)
#define MX_MINIGAMECCG_CCGSTRIKER_GET_CANSWAPTOFRONTSTRIKER_OFFSET UNITYSDK_OFFSET(0x1DCAC70)
#define MX_MINIGAMECCG_CCGSTRIKER_CHECKTARGETCATEGORYRULE_OFFSET UNITYSDK_OFFSET(0x1DCAF70)
#define MX_MINIGAMECCG_CCGSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE830)
#define MX_MINIGAMECCG_CCGSTRIKER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1DCAFB0)
#define MX_MINIGAMECCG_CCGSTRIKER_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x1DCB120)
#define MX_MINIGAMECCG_CCGSTRIKER_GETSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1DCB130)
#define MX_MINIGAMECCG_CCGSTRIKER_SET_SHIELD_OFFSET UNITYSDK_OFFSET(0x1DCB230)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGStriker_TypeDefinitionIndex = 20514;

	class CCGStriker : public Il2CppObject
	{
	public:
		::System::Int32 _Health_k__BackingField; // 0x50
		::System::Int32 _Shield_k__BackingField; // 0x54
		::System::Boolean _IsSpawned_k__BackingField; // 0x58

		::System::Int32 get_Health()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GET_HEALTH_OFFSET))(nullptr);
		}

		::System::Int32 GetStatBaseValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GETSTATBASEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SwapCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GET_SWAPCOST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSpawned()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GET_ISSPAWNED_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 get_Shield()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GET_SHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFront()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GET_ISFRONT_OFFSET))(nullptr);
		}

		::System::Void set_Health(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_SET_HEALTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSwapToFrontStriker()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GET_CANSWAPTOFRONTSTRIKER_OFFSET))(nullptr);
		}

		::System::Boolean CheckTargetCategoryRule(::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_CHECKTARGETCATEGORYRULE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCharacterData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCharacterData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GETFIELD_OFFSET))(str, nullptr);
		}

		::System::Boolean get_Alive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GET_ALIVE_OFFSET))(nullptr);
		}

		::System::Int32 GetStatValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_GETSTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Shield(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSTRIKER_SET_SHIELD_OFFSET))(arg, nullptr);
		}

	};
}

