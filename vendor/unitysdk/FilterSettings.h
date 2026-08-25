#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal { class RenderQueueType; }
namespace UnityEngine { class LayerMask; }

#define FILTERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8D90)

	inline static constexpr unsigned int FilterSettings_TypeDefinitionIndex = 32426;

	class FilterSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::RenderQueueType* RenderQueueType; // 0x10
		::UnityEngine::LayerMask* LayerMask; // 0x14
		::Il2CppArray<::System::Object*>* PassNames; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};

