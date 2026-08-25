#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define COLORFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB3330)
#define COLORFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9FB3390)

	inline static constexpr unsigned int ColorField_TypeDefinitionIndex = 33968;

	class ColorField : public ::MX::Logic::Actions::ActionProgress
	{
	public:
		::System::Boolean hdr; // 0x60
		::System::Boolean showAlpha; // 0x61
		::System::Boolean showPicker; // 0x62
		::System::Single incStep; // 0x64
		::System::Single incStepMult; // 0x68
		::System::Int32 decimals; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLORFIELD_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* ValidateValue(::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + COLORFIELD_VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

	};

