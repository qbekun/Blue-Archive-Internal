#pragma once
#include "unitysdk.h"

#define BMGLYPH_GETKERNING_OFFSET UNITYSDK_OFFSET(0xA464C0)
#define BMGLYPH_SETKERNING_OFFSET UNITYSDK_OFFSET(0xA46580)
#define BMGLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46140)
#define BMGLYPH_TRIM_OFFSET UNITYSDK_OFFSET(0xA46370)

	inline static constexpr unsigned int BMGlyph_TypeDefinitionIndex = 95;

	class BMGlyph : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::System::Int32 x; // 0x14
		::System::Int32 y; // 0x18
		::System::Int32 width; // 0x1C
		::System::Int32 height; // 0x20
		::System::Int32 offsetX; // 0x24
		::System::Int32 offsetY; // 0x28
		::System::Int32 advance; // 0x2C
		::System::Int32 channel; // 0x30
		Il2CppObject* kerning; // 0x38

		::System::Int32 GetKerning(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMGLYPH_GETKERNING_OFFSET))(arg, nullptr);
		}

		::System::Void SetKerning(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMGLYPH_SETKERNING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLYPH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Trim(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMGLYPH_TRIM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

