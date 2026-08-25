#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements::UIR { class Page; }

#define DEVICETOFREE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA346CF0)

	inline static constexpr unsigned int DeviceToFree_TypeDefinitionIndex = 30767;

	class DeviceToFree : public Il2CppObject
	{
	public:
		::System::UInt32 handle; // 0x10
		::UnityEngine::UIElements::UIR::Page* page; // 0x18

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICETOFREE_DISPOSE_OFFSET))(nullptr);
		}

	};

