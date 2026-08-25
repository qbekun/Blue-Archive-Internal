#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }

	inline static constexpr unsigned int ResolveContext_TypeDefinitionIndex = 30660;

	class ResolveContext : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheet* sheet; // 0x10
		::Il2CppArray<::System::Object*>* handles; // 0x18

	};

