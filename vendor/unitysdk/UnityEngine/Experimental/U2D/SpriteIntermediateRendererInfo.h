#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Bounds; }

namespace UnityEngine::Experimental::U2D
{
	inline static constexpr unsigned int SpriteIntermediateRendererInfo_TypeDefinitionIndex = 31625;

	class SpriteIntermediateRendererInfo : public Il2CppObject
	{
	public:
		::System::Int32 SpriteID; // 0x10
		::System::Int32 TextureID; // 0x14
		::System::Int32 MaterialID; // 0x18
		::UnityEngine::Color* Color; // 0x1C
		::UnityEngine::Matrix4x4* Transform; // 0x2C
		::UnityEngine::Bounds* Bounds; // 0x6C
		::System::Int32 Layer; // 0x84
		::System::Int32 SortingLayer; // 0x88
		::System::Int32 SortingOrder; // 0x8C
		::System::UInt64 SceneCullingMask; // 0x90
		::System::Int32 IndexData; // 0x98
		::System::Int32 VertexData; // 0xA0
		::System::Int32 IndexCount; // 0xA8
		::System::Int32 VertexCount; // 0xAC
		::System::Int32 ShaderChannelMask; // 0xB0

	};
}

