#pragma once
#include "unitysdk.h"

#define STATICTYPEREINITATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2E720)

	inline static constexpr unsigned int StaticTypeReinitAttribute_TypeDefinitionIndex = 37231;

	class StaticTypeReinitAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* reinitType; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + STATICTYPEREINITATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

