#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define ATLASMATERIALOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9611A00)

	inline static constexpr unsigned int AtlasMaterialOverride_TypeDefinitionIndex = 35325;

	class AtlasMaterialOverride : public Il2CppObject
	{
	public:
		::System::Boolean overrideDisabled; // 0x10
		::UnityEngine::Material* originalMaterial; // 0x18
		::UnityEngine::Material* replacementMaterial; // 0x20

		::System::Boolean Equals(AtlasMaterialOverride* arg)
		{
			return (return (::System::Boolean(*)(AtlasMaterialOverride*, ::PVOID))((::PBYTE)hIl2Cpp + ATLASMATERIALOVERRIDE_EQUALS_OFFSET))(arg, nullptr);
		}

	};

