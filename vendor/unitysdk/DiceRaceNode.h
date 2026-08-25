#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class DiceRaceParceUnit;
namespace FlatData { class EventContentDiceRaceNodeType; }
namespace MX::Data { class EventContentDiceRaceNodeInfo; }

#define DICERACENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D5F90)
#define DICERACENODE_NODETOPOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0x23D5FA0)
#define DICERACENODE_SETNODEPARCELTWEENALPHA_OFFSET UNITYSDK_OFFSET(0x23D6020)
#define DICERACENODE_SETNODEDATA_OFFSET UNITYSDK_OFFSET(0x23D60A0)
#define DICERACENODE_GET_DICERACENODETYPE_OFFSET UNITYSDK_OFFSET(0x23D6400)

	inline static constexpr unsigned int DiceRaceNode_TypeDefinitionIndex = 5321;

	class DiceRaceNode : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* nodeTopObject; // 0x18
		DiceRaceParceUnit* diceRaceParceUnit; // 0x20
		::FlatData::EventContentDiceRaceNodeType* diceRaceNodeType; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void NodeTopObjectActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODE_NODETOPOBJECTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNodeParcelTweenAlpha(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODE_SETNODEPARCELTWEENALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void SetNodeData(::MX::Data::EventContentDiceRaceNodeInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentDiceRaceNodeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODE_SETNODEDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentDiceRaceNodeType* get_DiceRaceNodeType()
		{
			return ((::FlatData::EventContentDiceRaceNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODE_GET_DICERACENODETYPE_OFFSET))(nullptr);
		}

	};

