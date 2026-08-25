#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualTreeAsset; }

#define USINGENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA429710)
#define USINGENTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4299A0)

	inline static constexpr unsigned int UsingEntry_TypeDefinitionIndex = 30702;

	class UsingEntry : public Il2CppObject
	{
	public:
		Il2CppObject* comparer; // 0x0
		::System::String* alias; // 0x10
		::System::String* path; // 0x18
		::UnityEngine::UIElements::VisualTreeAsset* asset; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + USINGENTRY_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USINGENTRY_.CCTOR_OFFSET))(nullptr);
		}

	};

