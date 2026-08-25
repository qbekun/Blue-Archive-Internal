#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define LAYERPRESETLOADER_RESTORELAYERS_OFFSET UNITYSDK_OFFSET(0x1FB2880)
#define LAYERPRESETLOADER_LOADLAYERS_OFFSET UNITYSDK_OFFSET(0x1FB2AA0)
#define LAYERPRESETLOADER_FILLPRESETDICIFDICISEMPTY_OFFSET UNITYSDK_OFFSET(0x1FB2B30)
#define LAYERPRESETLOADER_CHANGELAYERSRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1FB2C50)
#define LAYERPRESETLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3110)
#define LAYERPRESETLOADER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1FB3230)

	inline static constexpr unsigned int LayerPresetLoader_TypeDefinitionIndex = 2906;

	class LayerPresetLoader : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* root; // 0x18
		::System::Int32 defaultTargetLayer; // 0x20
		::System::Int32 ignoreLayerMask; // 0x24
		Il2CppObject* customSettings; // 0x28
		::System::Int32 collectedLayerMask; // 0x30
		Il2CppObject* customPresetDic; // 0x38
		Il2CppObject* previousLayers; // 0x40

		::System::Void RestoreLayers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPRESETLOADER_RESTORELAYERS_OFFSET))(nullptr);
		}

		::System::Void LoadLayers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPRESETLOADER_LOADLAYERS_OFFSET))(nullptr);
		}

		::System::Void FillPresetDicIfDicIsEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPRESETLOADER_FILLPRESETDICIFDICISEMPTY_OFFSET))(nullptr);
		}

		::System::Void ChangeLayersRecursively(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERPRESETLOADER_CHANGELAYERSRECURSIVELY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPRESETLOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetLayerMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPRESETLOADER_GETLAYERMASK_OFFSET))(nullptr);
		}

	};

