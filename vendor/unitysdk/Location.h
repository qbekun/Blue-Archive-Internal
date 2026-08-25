#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
class GroundNode;
namespace FlatData { class FormationLine; }

#define LOCATION_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x136F3E0)
#define LOCATION_SET_NODE_OFFSET UNITYSDK_OFFSET(0x136F3F0)
#define LOCATION_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x136F400)
#define LOCATION_GET_NODE_OFFSET UNITYSDK_OFFSET(0x136F410)
#define LOCATION_GET_LINE_OFFSET UNITYSDK_OFFSET(0x136F420)
#define LOCATION_GET_LINEINDEX_OFFSET UNITYSDK_OFFSET(0x136F430)
#define LOCATION_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x136F440)
#define LOCATION_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x136F450)
#define LOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x136F2A0)
#define LOCATION_SET_LINEINDEX_OFFSET UNITYSDK_OFFSET(0x136F460)
#define LOCATION_SET_LINE_OFFSET UNITYSDK_OFFSET(0x136F470)

	inline static constexpr unsigned int Location_TypeDefinitionIndex = 14359;

	class Location : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _Position_k__BackingField; // 0x10
		::UnityEngine::Vector2* _LocalPosition_k__BackingField; // 0x18
		GroundNode* _Node_k__BackingField; // 0x20
		::FlatData::FormationLine* _Line_k__BackingField; // 0x28
		::System::Int32 _LineIndex_k__BackingField; // 0x2C

		::System::Void set_LocalPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LOCATION_SET_LOCALPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Node(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + LOCATION_SET_NODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCATION_GET_POSITION_OFFSET))(nullptr);
		}

		GroundNode* get_Node()
		{
			return ((GroundNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCATION_GET_NODE_OFFSET))(nullptr);
		}

		::FlatData::FormationLine* get_Line()
		{
			return ((::FlatData::FormationLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCATION_GET_LINE_OFFSET))(nullptr);
		}

		::System::Int32 get_LineIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCATION_GET_LINEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LOCATION_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_LocalPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCATION_GET_LOCALPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, GroundNode* arg3, ::FlatData::FormationLine* arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, GroundNode*, ::FlatData::FormationLine*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOCATION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_LineIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOCATION_SET_LINEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Line(::FlatData::FormationLine* arg)
		{
			((::System::Void(*)(::FlatData::FormationLine*, ::PVOID))((::PBYTE)hIl2Cpp + LOCATION_SET_LINE_OFFSET))(arg, nullptr);
		}

	};

