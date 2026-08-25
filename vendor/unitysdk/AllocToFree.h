#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements::UIR { class Alloc; }
namespace UnityEngine::UIElements::UIR { class Page; }

	inline static constexpr unsigned int AllocToFree_TypeDefinitionIndex = 30766;

	class AllocToFree : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UIR::Alloc* alloc; // 0x10
		::UnityEngine::UIElements::UIR::Page* page; // 0x28
		::System::Boolean vertices; // 0x30

	};

