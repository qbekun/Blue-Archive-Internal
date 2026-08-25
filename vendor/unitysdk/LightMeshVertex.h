#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }

#define LIGHTMESHVERTEX_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0172D0)

	inline static constexpr unsigned int LightMeshVertex_TypeDefinitionIndex = 32474;

	class LightMeshVertex : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::UnityEngine::Color* color; // 0x1C
		::UnityEngine::Vector2* uv; // 0x2C
		::Il2CppArray<::System::Object*>* VertexLayout; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTMESHVERTEX_.CCTOR_OFFSET))(nullptr);
		}

	};

