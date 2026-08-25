#pragma once
#include "unitysdk.h"

class TooltipType;
namespace UnityEngine { class Transform; }
class UITooltipBase;

#define TOOLTIPFACTORY_GETASYNC_OFFSET UNITYSDK_OFFSET(0x2746800)
#define TOOLTIPFACTORY_RELEASE_OFFSET UNITYSDK_OFFSET(0x27468F0)
#define TOOLTIPFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x27469F0)
#define TOOLTIPFACTORY_GETINTERNAL_OFFSET UNITYSDK_OFFSET(0x2746C30)
#define TOOLTIPFACTORY_DEACTIVATETOOLTIPS_OFFSET UNITYSDK_OFFSET(0x2746D10)

	inline static constexpr unsigned int TooltipFactory_TypeDefinitionIndex = 7237;

	class TooltipFactory : public Il2CppObject
	{
	public:
		::System::String* ASSET_BASE_PATH; // 0x0
		Il2CppObject* resources; // 0x10
		Il2CppObject* objectPools; // 0x18

		Il2CppObject* GetAsync(TooltipType* arg, ::UnityEngine::Transform* arg2)
		{
			return ((Il2CppObject*(*)(TooltipType*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPFACTORY_GETASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Release(TooltipType* arg)
		{
			((::System::Void(*)(TooltipType*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPFACTORY_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPFACTORY_.CTOR_OFFSET))(nullptr);
		}

		UITooltipBase* GetInternal(TooltipType* arg, ::UnityEngine::Transform* arg2)
		{
			return ((UITooltipBase*(*)(TooltipType*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPFACTORY_GETINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DeactivateTooltips()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPFACTORY_DEACTIVATETOOLTIPS_OFFSET))(nullptr);
		}

	};

