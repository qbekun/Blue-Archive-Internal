#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RectInt; }
namespace UnityEngine::UIElements::UIR { class BestFitAllocator; }

#define AREA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA42C110)

	inline static constexpr unsigned int Area_TypeDefinitionIndex = 30712;

	class Area : public Il2CppObject
	{
	public:
		::UnityEngine::RectInt* rect; // 0x10
		::UnityEngine::UIElements::UIR::BestFitAllocator* allocator; // 0x20

		::System::Void .ctor(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + AREA_.CTOR_OFFSET))(arg, nullptr);
		}

	};

