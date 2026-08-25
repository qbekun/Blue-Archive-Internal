#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }

#define SHEETHANDLEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA371270)

	inline static constexpr unsigned int SheetHandleKey_TypeDefinitionIndex = 30809;

	class SheetHandleKey : public Il2CppObject
	{
	public:
		::System::Int32 sheetInstanceID; // 0x10
		::System::Int32 index; // 0x14

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheet* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SHEETHANDLEKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

