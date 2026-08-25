#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Mesh; }

	inline static constexpr unsigned int XRRenderParameter_TypeDefinitionIndex = 37601;

	class XRRenderParameter : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* view; // 0x10
		::UnityEngine::Matrix4x4* projection; // 0x50
		::UnityEngine::Rect* viewport; // 0x90
		::UnityEngine::Mesh* occlusionMesh; // 0xA0
		::System::Int32 textureArraySlice; // 0xA8
		::UnityEngine::Matrix4x4* previousView; // 0xAC
		::System::Boolean isPreviousViewValid; // 0xEC

	};

