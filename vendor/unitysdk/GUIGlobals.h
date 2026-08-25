#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Color; }

	inline static constexpr unsigned int GUIGlobals_TypeDefinitionIndex = 30109;

	class GUIGlobals : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* matrix; // 0x10
		::UnityEngine::Color* color; // 0x50
		::UnityEngine::Color* contentColor; // 0x60
		::UnityEngine::Color* backgroundColor; // 0x70
		::System::Boolean enabled; // 0x80
		::System::Boolean changed; // 0x81
		::System::Int32 displayIndex; // 0x84

	};

