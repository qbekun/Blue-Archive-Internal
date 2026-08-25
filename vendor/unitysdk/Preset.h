#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Preset_TypeDefinitionIndex = 3647;

	class Preset : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EnableObjects; // 0x10
		::Il2CppArray<::System::Object*>* DisableObjects; // 0x18
		::System::Boolean AssureRendererOnEnable; // 0x20

	};

