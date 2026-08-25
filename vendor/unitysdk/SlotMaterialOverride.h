#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define SLOTMATERIALOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9611970)

	inline static constexpr unsigned int SlotMaterialOverride_TypeDefinitionIndex = 35324;

	class SlotMaterialOverride : public Il2CppObject
	{
	public:
		::System::Boolean overrideDisabled; // 0x10
		::System::String* slotName; // 0x18
		::UnityEngine::Material* material; // 0x20

		::System::Boolean Equals(SlotMaterialOverride* arg)
		{
			return (return (::System::Boolean(*)(SlotMaterialOverride*, ::PVOID))((::PBYTE)hIl2Cpp + SLOTMATERIALOVERRIDE_EQUALS_OFFSET))(arg, nullptr);
		}

	};

