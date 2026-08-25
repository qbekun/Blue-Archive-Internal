#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_GET_ZONECARD_OFFSET UNITYSDK_OFFSET(0x1E86950)
#define MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_SETSPAWNSTRIKER_OFFSET UNITYSDK_OFFSET(0x1E86960)
#define MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_TRYGETVISUALENTITY_OFFSET UNITYSDK_OFFSET(0x1E869F0)
#define MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E87050)
#define MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_GET_STRIKERS_OFFSET UNITYSDK_OFFSET(0x1E87270)
#define MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E873A0)
#define MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E876B0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGVisualPlayerCard_TypeDefinitionIndex = 21162;

	class CCGVisualPlayerCard : public Il2CppObject
	{
	public:
		Il2CppObject* strikers; // 0x18
		Il2CppObject* specials; // 0x20
		CCGVisualZoneCard* zoneCard; // 0x28
		::MX::MinigameCCG::CCGPlayer* player; // 0x30

		CCGVisualZoneCard* get_ZoneCard()
		{
			return (return (CCGVisualZoneCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_GET_ZONECARD_OFFSET))(nullptr);
		}

		::System::Void SetSpawnStriker(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_SETSPAWNSTRIKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetVisualEntity(::System::Int32 arg, CCGVisualEntity&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, CCGVisualEntity&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_TRYGETVISUALENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Strikers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_GET_STRIKERS_OFFSET))(nullptr);
		}

		::System::Void Refresh(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGVISUALPLAYERCARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

