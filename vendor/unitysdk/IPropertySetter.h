#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define IPROPERTYSETTER_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IPropertySetter_TypeDefinitionIndex = 14069;

	class IPropertySetter : public Il2CppObject
	{
	public:
		::System::Void SetProperty(::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + IPROPERTYSETTER_SETPROPERTY_OFFSET))(arg, arg2, nullptr);
		}

	};

