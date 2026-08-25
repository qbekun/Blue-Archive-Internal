#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3Int; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileChangeData_TypeDefinitionIndex = 37916;

	class TileChangeData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3Int* m_Position; // 0x10
		::UnityEngine::Object* m_TileAsset; // 0x20
		::UnityEngine::Color* m_Color; // 0x28
		::UnityEngine::Matrix4x4* m_Transform; // 0x38

	};
}

