#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define FLOATPROPERTYSETTER_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1275870)
#define FLOATPROPERTYSETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12758A0)

	inline static constexpr unsigned int FloatPropertySetter_TypeDefinitionIndex = 14070;

	class FloatPropertySetter : public Il2CppObject
	{
	public:
		::System::Single value; // 0x10

		::System::Void SetProperty(::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + FLOATPROPERTYSETTER_SETPROPERTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLOATPROPERTYSETTER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

