#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int FavorLine_TypeDefinitionIndex = 4894;

	class FavorLine : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Lines; // 0x10
		::UnityEngine::Color* OwnColor; // 0x18
		::UnityEngine::Color* NotOwnColor; // 0x28

	};

