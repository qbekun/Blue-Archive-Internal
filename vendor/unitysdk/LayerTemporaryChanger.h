#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define LAYERTEMPORARYCHANGER_CHANGELAYERRECURSIVELYINTERNAL_OFFSET UNITYSDK_OFFSET(0x15A0FF0)
#define LAYERTEMPORARYCHANGER_RESTORE_OFFSET UNITYSDK_OFFSET(0x15A11D0)
#define LAYERTEMPORARYCHANGER_CHANGELAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x15A12F0)
#define LAYERTEMPORARYCHANGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A1310)

	inline static constexpr unsigned int LayerTemporaryChanger_TypeDefinitionIndex = 1080;

	class LayerTemporaryChanger : public Il2CppObject
	{
	public:
		Il2CppObject* cachedObjectsLayers; // 0x10

		::System::Void ChangeLayerRecursivelyInternal(::UnityEngine::Transform* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LAYERTEMPORARYCHANGER_CHANGELAYERRECURSIVELYINTERNAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Restore(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERTEMPORARYCHANGER_RESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeLayerRecursively(::UnityEngine::Transform* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERTEMPORARYCHANGER_CHANGELAYERRECURSIVELY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERTEMPORARYCHANGER_.CTOR_OFFSET))(nullptr);
		}

	};

