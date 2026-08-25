#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine { class RectInt; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class Color; }

	inline static constexpr unsigned int BlitInfo_TypeDefinitionIndex = 30748;

	class BlitInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Texture* src; // 0x10
		::UnityEngine::RectInt* srcRect; // 0x18
		::UnityEngine::Vector2Int* dstPos; // 0x28
		::System::Int32 border; // 0x30
		::UnityEngine::Color* tint; // 0x34

	};

