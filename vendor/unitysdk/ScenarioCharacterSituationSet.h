#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioCharacterBehaviors; }
class ScenarioCharacterTarget;
namespace FlatData { class ScenarioCharacterAction; }
namespace FlatData { class ScenarioCharacterShapes; }
namespace MX::Data::Excel { class ScenarioCharacterSituationSetExcel; }

#define SCENARIOCHARACTERSITUATIONSET_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1ED4AD0)
#define SCENARIOCHARACTERSITUATIONSET_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1ED4AE0)
#define SCENARIOCHARACTERSITUATIONSET_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1ED4AF0)
#define SCENARIOCHARACTERSITUATIONSET_GET_EFFECTHASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED4B00)
#define SCENARIOCHARACTERSITUATIONSET_SET_HASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED4B10)
#define SCENARIOCHARACTERSITUATIONSET_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1ED4B20)
#define SCENARIOCHARACTERSITUATIONSET_GET_FACE_OFFSET UNITYSDK_OFFSET(0x1ED4B30)
#define SCENARIOCHARACTERSITUATIONSET_SET_MOVETARGET_OFFSET UNITYSDK_OFFSET(0x1ED4B40)
#define SCENARIOCHARACTERSITUATIONSET_GET_EMOTIONHASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED4B50)
#define SCENARIOCHARACTERSITUATIONSET_SET_EMOTIONHASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED4B60)
#define SCENARIOCHARACTERSITUATIONSET_SET_FACE_OFFSET UNITYSDK_OFFSET(0x1ED4B70)
#define SCENARIOCHARACTERSITUATIONSET_SET_EFFECTHASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED4B80)
#define SCENARIOCHARACTERSITUATIONSET_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1ED4B90)
#define SCENARIOCHARACTERSITUATIONSET_GET_MOVETARGET_OFFSET UNITYSDK_OFFSET(0x1ED4BA0)
#define SCENARIOCHARACTERSITUATIONSET_SET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1ED4BB0)
#define SCENARIOCHARACTERSITUATIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED4BC0)
#define SCENARIOCHARACTERSITUATIONSET_GET_HASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED56E0)

	inline static constexpr unsigned int ScenarioCharacterSituationSet_TypeDefinitionIndex = 1805;

	class ScenarioCharacterSituationSet : public Il2CppObject
	{
	public:
		::System::UInt32 _HashKey_k__BackingField; // 0x10
		::System::String* _Face_k__BackingField; // 0x18
		::FlatData::ScenarioCharacterBehaviors* _Behavior_k__BackingField; // 0x20
		ScenarioCharacterTarget* _MoveTarget_k__BackingField; // 0x24
		::FlatData::ScenarioCharacterAction* _Action_k__BackingField; // 0x28
		::FlatData::ScenarioCharacterShapes* _Shape_k__BackingField; // 0x2C
		::System::UInt32 _EffectHashKey_k__BackingField; // 0x30
		::System::UInt32 _EmotionHashKey_k__BackingField; // 0x34

		::System::Void set_Action(::FlatData::ScenarioCharacterAction* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterAction*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_ACTION_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioCharacterBehaviors* get_Behavior()
		{
			return ((::FlatData::ScenarioCharacterBehaviors*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterAction* get_Action()
		{
			return ((::FlatData::ScenarioCharacterAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_ACTION_OFFSET))(nullptr);
		}

		::System::UInt32 get_EffectHashKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_EFFECTHASHKEY_OFFSET))(nullptr);
		}

		::System::Void set_HashKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_HASHKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Shape(::FlatData::ScenarioCharacterShapes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterShapes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_SHAPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Face()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_FACE_OFFSET))(nullptr);
		}

		::System::Void set_MoveTarget(ScenarioCharacterTarget* arg)
		{
			((::System::Void(*)(ScenarioCharacterTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_MOVETARGET_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_EmotionHashKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_EMOTIONHASHKEY_OFFSET))(nullptr);
		}

		::System::Void set_EmotionHashKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_EMOTIONHASHKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Face(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_FACE_OFFSET))(str, nullptr);
		}

		::System::Void set_EffectHashKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_EFFECTHASHKEY_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioCharacterShapes* get_Shape()
		{
			return ((::FlatData::ScenarioCharacterShapes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_SHAPE_OFFSET))(nullptr);
		}

		ScenarioCharacterTarget* get_MoveTarget()
		{
			return ((ScenarioCharacterTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_MOVETARGET_OFFSET))(nullptr);
		}

		::System::Void set_Behavior(::FlatData::ScenarioCharacterBehaviors* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterBehaviors*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_SET_BEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ScenarioCharacterSituationSetExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioCharacterSituationSetExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_HashKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSITUATIONSET_GET_HASHKEY_OFFSET))(nullptr);
		}

	};

