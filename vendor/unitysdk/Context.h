#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }

#define CONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08D340)

	inline static constexpr unsigned int Context_TypeDefinitionIndex = 32789;

	class Context : public Il2CppObject
	{
	public:
		::System::String* k_Name; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* submit; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};

