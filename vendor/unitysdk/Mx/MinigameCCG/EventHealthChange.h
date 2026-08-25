#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_SHIELDBEFORE_OFFSET UNITYSDK_OFFSET(0x1DCCEE0)
#define MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_HEALTHAFTER_OFFSET UNITYSDK_OFFSET(0x1DCCEF0)
#define MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_SHIELDAFTER_OFFSET UNITYSDK_OFFSET(0x1DCCF00)
#define MX_MINIGAMECCG_EVENTHEALTHCHANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DCCF10)
#define MX_MINIGAMECCG_EVENTHEALTHCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD140)
#define MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_HEALTHBEFORE_OFFSET UNITYSDK_OFFSET(0x1DCD190)
#define MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_STRIKERENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCD1A0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int EventHealthChange_TypeDefinitionIndex = 20546;

	class EventHealthChange : public Il2CppObject
	{
	public:
		::System::Int32 _StrikerEntityId_k__BackingField; // 0x10
		::System::Int32 _HealthBefore_k__BackingField; // 0x14
		::System::Int32 _HealthAfter_k__BackingField; // 0x18
		::System::Int32 _ShieldBefore_k__BackingField; // 0x1C
		::System::Int32 _ShieldAfter_k__BackingField; // 0x20

		::System::Int32 get_ShieldBefore()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_SHIELDBEFORE_OFFSET))(nullptr);
		}

		::System::Int32 get_HealthAfter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_HEALTHAFTER_OFFSET))(nullptr);
		}

		::System::Int32 get_ShieldAfter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_SHIELDAFTER_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTHEALTHCHANGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTHEALTHCHANGE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_HealthBefore()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_HEALTHBEFORE_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_EVENTHEALTHCHANGE_GET_STRIKERENTITYID_OFFSET))(nullptr);
		}

	};
}

