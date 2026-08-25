#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class StencilOp; }
namespace UnityEngine::Rendering { class CompareFunction; }
namespace UnityEngine::Rendering { class ColorWriteMask; }

#define MATENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA482120)

	inline static constexpr unsigned int MatEntry_TypeDefinitionIndex = 34851;

	class MatEntry : public Il2CppObject
	{
	public:
		::UnityEngine::Material* baseMat; // 0x10
		::UnityEngine::Material* customMat; // 0x18
		::System::Int32 count; // 0x20
		::System::Int32 stencilId; // 0x24
		::UnityEngine::Rendering::StencilOp* operation; // 0x28
		::UnityEngine::Rendering::CompareFunction* compareFunction; // 0x2C
		::System::Int32 readMask; // 0x30
		::System::Int32 writeMask; // 0x34
		::System::Boolean useAlphaClip; // 0x38
		::UnityEngine::Rendering::ColorWriteMask* colorMask; // 0x3C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATENTRY_.CTOR_OFFSET))(nullptr);
		}

	};

