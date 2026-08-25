#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Material; }

#define SHADERVECTORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCA60)
#define SHADERVECTORINFO_APPLYVALUE_OFFSET UNITYSDK_OFFSET(0x20DCCF0)

	inline static constexpr unsigned int ShaderVectorInfo_TypeDefinitionIndex = 3752;

	class ShaderVectorInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* Value; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERVECTORINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyValue(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERVECTORINFO_APPLYVALUE_OFFSET))(arg, nullptr);
		}

	};

