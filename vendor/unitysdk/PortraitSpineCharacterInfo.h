#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define PORTRAITSPINECHARACTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E0F00)

	inline static constexpr unsigned int PortraitSpineCharacterInfo_TypeDefinitionIndex = 3764;

	class PortraitSpineCharacterInfo : public Il2CppObject
	{
	public:
		::System::Int64 CharacterId; // 0x10
		::UnityEngine::Transform* SpineRoot; // 0x18
		::System::Int32 RenderQueueOffset; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERINFO_.CTOR_OFFSET))(nullptr);
		}

	};

