#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class SelectionContainer; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace FlatData { class CCGEntityType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define VISUALACTIONSELECTENTITIES_OFFEFFECTPOWER_OFFSET UNITYSDK_OFFSET(0x26E35D0)
#define VISUALACTIONSELECTENTITIES_SELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x26E3830)
#define VISUALACTIONSELECTENTITIES_PROGRESSCARDENTITY_OFFSET UNITYSDK_OFFSET(0x26E39D0)
#define VISUALACTIONSELECTENTITIES__PROGRESSCHARACTERENTITY_B__8_0_OFFSET UNITYSDK_OFFSET(0x26E3B70)
#define VISUALACTIONSELECTENTITIES_PROGRESSCHARACTERENTITY_OFFSET UNITYSDK_OFFSET(0x26E3BD0)
#define VISUALACTIONSELECTENTITIES_RESPONSESELECTIONCONFIRMEDEVENT_OFFSET UNITYSDK_OFFSET(0x26E3D70)
#define VISUALACTIONSELECTENTITIES_GET_HASSOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x26E3DE0)
#define VISUALACTIONSELECTENTITIES_SETHIGHLIGHTENTITIES_OFFSET UNITYSDK_OFFSET(0x26E3E00)
#define VISUALACTIONSELECTENTITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E3FC0)

	inline static constexpr unsigned int VisualActionSelectEntities_TypeDefinitionIndex = 393;

	class VisualActionSelectEntities : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::SelectionContainer* selection; // 0x28
		Il2CppObject* highlightEntities; // 0x30
		::System::Int32 selectableCount; // 0x38

		::System::Void OffEffectPower()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_OFFEFFECTPOWER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* SelectTargets(::MX::MinigameCCG::CCGPlayer* arg, ::FlatData::CCGEntityType* arg2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGPlayer*, ::FlatData::CCGEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_SELECTTARGETS_OFFSET))(arg, arg2, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ProgressCardEntity(::MX::MinigameCCG::CCGPlayer* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_PROGRESSCARDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProgressCharacterEntity_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES__PROGRESSCHARACTERENTITY_B__8_0_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ProgressCharacterEntity(::MX::MinigameCCG::CCGPlayer* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_PROGRESSCHARACTERENTITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ResponseSelectionConfirmedEvent(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_RESPONSESELECTIONCONFIRMEDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasSourceEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_GET_HASSOURCEENTITY_OFFSET))(nullptr);
		}

		::System::Void SetHighlightEntities(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_SETHIGHLIGHTENTITIES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg2, ::MX::MinigameCCG::SelectionContainer* arg3)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::SelectionContainer*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALACTIONSELECTENTITIES_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

