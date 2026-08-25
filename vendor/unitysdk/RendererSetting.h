#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }

	inline static constexpr unsigned int RendererSetting_TypeDefinitionIndex = 3643;

	class RendererSetting : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::Il2CppArray<::System::Object*>* MaterialSettings; // 0x18

	};

