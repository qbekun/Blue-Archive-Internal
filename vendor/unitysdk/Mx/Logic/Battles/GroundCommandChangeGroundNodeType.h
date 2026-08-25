#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AreaShapeType; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class RectData; }
namespace MX::Logic::Battles { class CircleData; }
namespace FlatData { class GroundNodeType; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12C1DA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C20E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C3010)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12C1DB0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12C30A0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C3270)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandChangeGroundNodeType_TypeDefinitionIndex = 14142;

	class GroundCommandChangeGroundNodeType : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::AreaShapeType* ShapeType; // 0x30
		::UnityEngine::Vector3* Position; // 0x34
		::MX::Logic::Battles::RectData* Rect; // 0x40
		::MX::Logic::Battles::CircleData* Circle; // 0x48
		::FlatData::GroundNodeType* GroundNodeTypeToChange; // 0x50
		::System::Boolean IsResetToOriginal; // 0x54

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGEGROUNDNODETYPE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

