#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define INTPROPERTYSETTER_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x12758B0)
#define INTPROPERTYSETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12758E0)

	inline static constexpr unsigned int IntPropertySetter_TypeDefinitionIndex = 14071;

	class IntPropertySetter : public Il2CppObject
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void SetProperty(::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + INTPROPERTYSETTER_SETPROPERTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTPROPERTYSETTER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

