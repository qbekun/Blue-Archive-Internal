#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AreaShapeType; }
namespace MX::Logic::Battles { class AreaTargetType; }
namespace MX::Logic::Battles { class AreaTriggerType; }
class CheckProcess;
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class RectData; }
namespace MX::Logic::Battles { class CircleData; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Logic::Battles { class GroundEvent; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13445B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_COUPDATE_OFFSET UNITYSDK_OFFSET(0x13449B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1344A40)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_START_OFFSET UNITYSDK_OFFSET(0x1346340)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_END_OFFSET UNITYSDK_OFFSET(0x1346440)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_TRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1346480)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK__GETCHARACTERLIST_B__23_1_OFFSET UNITYSDK_OFFSET(0x1346880)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_GETCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x1346500)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13445C0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_GETSHAPE_OFFSET UNITYSDK_OFFSET(0x13468F0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_MAKEPROCESS_OFFSET UNITYSDK_OFFSET(0x1346A40)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_GET_CHARACTERIDTOCHECK_OFFSET UNITYSDK_OFFSET(0x1346BA0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK__GETCHARACTERLIST_B__23_0_OFFSET UNITYSDK_OFFSET(0x1346BB0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x13462F0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1346BE0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1346CC0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_SET_CHARACTERIDTOCHECK_OFFSET UNITYSDK_OFFSET(0x1347CF0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1347D00)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionAreaAlwaysCheck_TypeDefinitionIndex = 14313;

	class GroundConditionAreaAlwaysCheck : public Il2CppObject
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

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_COUPDATE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_START_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_END_OFFSET))(nullptr);
		}

		::System::Int32 TriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_TRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean _GetCharacterList_b__23_1(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK__GETCHARACTERLIST_B__23_1_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharacterList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_GETCHARACTERLIST_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* GetShape()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_GETSHAPE_OFFSET))(nullptr);
		}

		CheckProcess* MakeProcess()
		{
			return ((CheckProcess*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_MAKEPROCESS_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterIdToCheck()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_GET_CHARACTERIDTOCHECK_OFFSET))(nullptr);
		}

		::System::Boolean _GetCharacterList_b__23_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK__GETCHARACTERLIST_B__23_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroundEvent* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CharacterIdToCheck(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_SET_CHARACTERIDTOCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void Activate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONAREAALWAYSCHECK_ACTIVATE_OFFSET))(nullptr);
		}

	};
}

