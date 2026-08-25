#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RectInt; }
namespace UnityEngine::UIElements::UIR { class Alloc; }

#define ALLOC2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA42C3F0)

	inline static constexpr unsigned int Alloc2D_TypeDefinitionIndex = 30714;

	class Alloc2D : public Il2CppObject
	{
	public:
		::UnityEngine::RectInt* rect; // 0x10
		Row* row; // 0x20
		::UnityEngine::UIElements::UIR::Alloc* alloc; // 0x28

		::System::Void .ctor(Row* arg, ::UnityEngine::UIElements::UIR::Alloc* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Row*, ::UnityEngine::UIElements::UIR::Alloc*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ALLOC2D_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

