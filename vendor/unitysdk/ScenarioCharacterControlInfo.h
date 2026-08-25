#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioCharacterBehaviors; }
namespace FlatData { class ScenarioCharacterAction; }
namespace FlatData { class ScenarioCharacterShapes; }
class ScenarioCharacterTarget;
class ScenarioCharacterSituationSet;

#define SCENARIOCHARACTERCONTROLINFO_SET_HASHCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1ED40A0)
#define SCENARIOCHARACTERCONTROLINFO_SET_EMOTIONKEY_OFFSET UNITYSDK_OFFSET(0x1ED40B0)
#define SCENARIOCHARACTERCONTROLINFO_GETSHAPE_OFFSET UNITYSDK_OFFSET(0x1ED40D0)
#define SCENARIOCHARACTERCONTROLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED43E0)
#define SCENARIOCHARACTERCONTROLINFO_GET_SPINECHARACTERPREFAB_OFFSET UNITYSDK_OFFSET(0x1ED4440)
#define SCENARIOCHARACTERCONTROLINFO_APPENDSHAPE_OFFSET UNITYSDK_OFFSET(0x1ED44E0)
#define SCENARIOCHARACTERCONTROLINFO_GET_EMOTICONPREFAB_OFFSET UNITYSDK_OFFSET(0x1ED44F0)
#define SCENARIOCHARACTERCONTROLINFO_SET_EFFECTKEY_OFFSET UNITYSDK_OFFSET(0x1ED4620)
#define SCENARIOCHARACTERCONTROLINFO_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1ED4640)
#define SCENARIOCHARACTERCONTROLINFO_GET_MOVETARGET_OFFSET UNITYSDK_OFFSET(0x1ED4650)
#define SCENARIOCHARACTERCONTROLINFO_SET_FACE_OFFSET UNITYSDK_OFFSET(0x1ED4710)
#define SCENARIOCHARACTERCONTROLINFO_GET_EFFECTHASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED4720)
#define SCENARIOCHARACTERCONTROLINFO_GET_HIDE_OFFSET UNITYSDK_OFFSET(0x1ED47D0)
#define SCENARIOCHARACTERCONTROLINFO_GET_CHARACTERDEFAULTSHAPE_OFFSET UNITYSDK_OFFSET(0x1ED4340)
#define SCENARIOCHARACTERCONTROLINFO_SET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1ED47E0)
#define SCENARIOCHARACTERCONTROLINFO_GET_EFFECTPREFAB_OFFSET UNITYSDK_OFFSET(0x1ED47F0)
#define SCENARIOCHARACTERCONTROLINFO_GET_EMOTIONHASHKEY_OFFSET UNITYSDK_OFFSET(0x1ED4570)
#define SCENARIOCHARACTERCONTROLINFO_GET_HASSITUATIONSET_OFFSET UNITYSDK_OFFSET(0x1ED4210)
#define SCENARIOCHARACTERCONTROLINFO_GET_HASHCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1ED4870)
#define SCENARIOCHARACTERCONTROLINFO_GET_FACE_OFFSET UNITYSDK_OFFSET(0x1ED4880)
#define SCENARIOCHARACTERCONTROLINFO_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1ED4930)
#define SCENARIOCHARACTERCONTROLINFO_SET_MOVETARGET_OFFSET UNITYSDK_OFFSET(0x1ED49E0)
#define SCENARIOCHARACTERCONTROLINFO_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1ED49F0)
#define SCENARIOCHARACTERCONTROLINFO_SET_SITUATIONKEY_OFFSET UNITYSDK_OFFSET(0x1ED4AA0)
#define SCENARIOCHARACTERCONTROLINFO_SET_HIDE_OFFSET UNITYSDK_OFFSET(0x1ED4AC0)
#define SCENARIOCHARACTERCONTROLINFO_GET_SITUATIONSET_OFFSET UNITYSDK_OFFSET(0x1ED42A0)

	inline static constexpr unsigned int ScenarioCharacterControlInfo_TypeDefinitionIndex = 1804;

	class ScenarioCharacterControlInfo : public Il2CppObject
	{
	public:
		::System::String* _HashCharacterName_k__BackingField; // 0x10
		::System::String* face; // 0x18
		::FlatData::ScenarioCharacterBehaviors* behavior; // 0x20
		::FlatData::ScenarioCharacterAction* action; // 0x24
		::FlatData::ScenarioCharacterShapes* shape; // 0x28
		ScenarioCharacterTarget* moveTarget; // 0x2C
		::System::UInt32 effectHashKey; // 0x30
		::System::UInt32 SituationHashKey; // 0x34
		::System::UInt32 emotionHashKey; // 0x38
		::System::Boolean _Hide_k__BackingField; // 0x3C

		::System::Void set_HashCharacterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_HASHCHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_EmotionKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_EMOTIONKEY_OFFSET))(str, nullptr);
		}

		::FlatData::ScenarioCharacterShapes* GetShape()
		{
			return ((::FlatData::ScenarioCharacterShapes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GETSHAPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_SpineCharacterPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_SPINECHARACTERPREFAB_OFFSET))(nullptr);
		}

		::System::Void AppendShape(::FlatData::ScenarioCharacterShapes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterShapes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_APPENDSHAPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_EmoticonPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_EMOTICONPREFAB_OFFSET))(nullptr);
		}

		::System::Void set_EffectKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_EFFECTKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_Action(::FlatData::ScenarioCharacterAction* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterAction*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_ACTION_OFFSET))(arg, nullptr);
		}

		ScenarioCharacterTarget* get_MoveTarget()
		{
			return ((ScenarioCharacterTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_MOVETARGET_OFFSET))(nullptr);
		}

		::System::Void set_Face(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_FACE_OFFSET))(str, nullptr);
		}

		::System::UInt32 get_EffectHashKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_EFFECTHASHKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_Hide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_HIDE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterShapes* get_CharacterDefaultShape()
		{
			return ((::FlatData::ScenarioCharacterShapes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_CHARACTERDEFAULTSHAPE_OFFSET))(nullptr);
		}

		::System::Void set_Behavior(::FlatData::ScenarioCharacterBehaviors* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterBehaviors*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_BEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_EffectPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_EFFECTPREFAB_OFFSET))(nullptr);
		}

		::System::UInt32 get_EmotionHashKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_EMOTIONHASHKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_HasSituationSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_HASSITUATIONSET_OFFSET))(nullptr);
		}

		::System::String* get_HashCharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_HASHCHARACTERNAME_OFFSET))(nullptr);
		}

		::System::String* get_Face()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_FACE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterBehaviors* get_Behavior()
		{
			return ((::FlatData::ScenarioCharacterBehaviors*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_MoveTarget(ScenarioCharacterTarget* arg)
		{
			((::System::Void(*)(ScenarioCharacterTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_MOVETARGET_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioCharacterAction* get_Action()
		{
			return ((::FlatData::ScenarioCharacterAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_ACTION_OFFSET))(nullptr);
		}

		::System::Void set_SituationKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_SITUATIONKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_Hide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_SET_HIDE_OFFSET))(arg, nullptr);
		}

		ScenarioCharacterSituationSet* get_SituationSet()
		{
			return ((ScenarioCharacterSituationSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERCONTROLINFO_GET_SITUATIONSET_OFFSET))(nullptr);
		}

	};

