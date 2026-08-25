#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define POPUPTEXTELEMENT_DOMEASURE_OFFSET UNITYSDK_OFFSET(0xA3A24E0)
#define POPUPTEXTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A1090)

	inline static constexpr unsigned int PopupTextElement_TypeDefinitionIndex = 30318;

	class PopupTextElement : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* DoMeasure(::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + POPUPTEXTELEMENT_DOMEASURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPUPTEXTELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

