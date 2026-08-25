#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Tilemaps { class TileFlags; }

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileDataNative_TypeDefinitionIndex = 37915;

	class TileDataNative : public Il2CppObject
	{
	public:
		::System::Int32 m_Sprite; // 0x10
		::UnityEngine::Color* m_Color; // 0x14
		::UnityEngine::Matrix4x4* m_Transform; // 0x24
		::System::Int32 m_GameObject; // 0x64
		::UnityEngine::Tilemaps::TileFlags* m_Flags; // 0x68
		ColliderType* m_ColliderType; // 0x6C

	};
}

