#pragma once
#include "unitysdk.h"

#define NXTOUCHAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA8780)

	inline static constexpr unsigned int NXTouchArea_TypeDefinitionIndex = 26373;

	class NXTouchArea : public Il2CppObject
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 top; // 0x14
		::System::Int32 right; // 0x18
		::System::Int32 bottom; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NXTOUCHAREA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

