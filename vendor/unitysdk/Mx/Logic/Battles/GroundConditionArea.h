#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AreaShapeType; }
namespace MX::Logic::Battles { class AreaTargetType; }
namespace MX::Logic::Battles { class AreaTriggerType; }
class CheckProcess;
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class RectData; }
namespace MX::Logic::Battles { class CircleData; }
namespace MX::Logic::Battles { class GroundEvent; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_GET_CHARACTERIDTOCHECK_OFFSET UNITYSDK_OFFSET(0x133EE50)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x133EE60)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_SET_CHARACTERIDTOCHECK_OFFSET UNITYSDK_OFFSET(0x133F020)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_GETCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x133F030)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x133F450)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1340D50)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_GETSHAPE_OFFSET UNITYSDK_OFFSET(0x1341150)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_START_OFFSET UNITYSDK_OFFSET(0x13412A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_MAKEPROCESS_OFFSET UNITYSDK_OFFSET(0x133EF40)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1341560)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1340D00)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_END_OFFSET UNITYSDK_OFFSET(0x1342590)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1340D60)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_COUPDATE_OFFSET UNITYSDK_OFFSET(0x13413A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1342680)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionArea_TypeDefinitionIndex = 14302;

	class GroundConditionArea : public Il2CppObject
	{
	public:
		::System::String* SpawnTemplateId; // 0x28
		::MX::Logic::Battles::AreaShapeType* Shape; // 0x30
		::MX::Logic::Battles::AreaTargetType* Target; // 0x34
		::MX::Logic::Battles::AreaTriggerType* Trigger; // 0x38
		::System::Int64 StayTime; // 0x40
		CheckProcess* checkProcess; // 0x48
		::System::Collections::IEnumerator* updateEtor; // 0x50
		::UnityEngine::Vector3* Position; // 0x58
		::MX::Logic::Battles::RectData* Rect; // 0x68
		::MX::Logic::Battles::CircleData* Circle; // 0x70
		::System::Boolean InactivateWhenStart; // 0x78
		::System::Boolean isActive; // 0x79
		::System::Int64 _CharacterIdToCheck_k__BackingField; // 0x80

		::System::Int64 get_CharacterIdToCheck()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_GET_CHARACTERIDTOCHECK_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroundEvent* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterIdToCheck(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_SET_CHARACTERIDTOCHECK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharacterList(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_GETCHARACTERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* GetShape()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_GETSHAPE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_START_OFFSET))(nullptr);
		}

		CheckProcess* MakeProcess()
		{
			return ((CheckProcess*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_MAKEPROCESS_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_END_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_COUPDATE_OFFSET))(nullptr);
		}

		::System::Void Activate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREA_ACTIVATE_OFFSET))(nullptr);
		}

	};
}

