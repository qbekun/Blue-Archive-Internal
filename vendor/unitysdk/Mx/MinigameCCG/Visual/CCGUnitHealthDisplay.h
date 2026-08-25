#pragma once
#include "../../../unitysdk.h"

namespace TMPro { class TMP_Text; }
namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG { class CCGStriker; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E85CC0)
#define MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_ACTIVEEXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x1E85F00)
#define MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x1E86330)
#define MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_GETEXPECTEDVALUETEXT_OFFSET UNITYSDK_OFFSET(0x1E863C0)
#define MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E86940)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGUnitHealthDisplay_TypeDefinitionIndex = 21158;

	class CCGUnitHealthDisplay : public Il2CppObject
	{
	public:
		::TMPro::TMP_Text* health; // 0x18
		::UnityEngine::GameObject* playerHealthIcon; // 0x20
		::UnityEngine::GameObject* EnemyHealthIcon; // 0x28
		::TMPro::TMP_Text* shield; // 0x30
		::UnityEngine::GameObject* expectedValueRoot; // 0x38
		::TMPro::TMP_Text* expectedDamage; // 0x40
		::TMPro::TMP_Text* expectedShield; // 0x48
		::TMPro::TMP_Text* expectedHeal; // 0x50
		::System::Single z_FloorA; // 0x58
		::System::Single z_FloorB; // 0x5C
		::MX::MinigameCCG::CCGStriker* striker; // 0x60

		::System::Void Refresh(::MX::MinigameCCG::CCGStriker* arg, ::MX::MinigameCCG::EventHealthChange* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_REFRESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ActiveExpectedValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_ACTIVEEXPECTEDVALUE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGFlowProcessor* get_processor()
		{
			return (return (::MX::MinigameCCG::Visual::CCGFlowProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_GET_PROCESSOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetExpectedValueText(::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_GETEXPECTEDVALUETEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGUNITHEALTHDISPLAY_.CTOR_OFFSET))(nullptr);
		}

	};
}

