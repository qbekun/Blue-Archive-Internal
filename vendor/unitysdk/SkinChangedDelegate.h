#pragma once
#include "unitysdk.h"

#define SKINCHANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2827F0)
#define SKINCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2828B0)

	inline static constexpr unsigned int SkinChangedDelegate_TypeDefinitionIndex = 36544;

	class SkinChangedDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKINCHANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKINCHANGEDDELEGATE_INVOKE_OFFSET))(nullptr);
		}

	};

