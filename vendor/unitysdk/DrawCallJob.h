#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define DRAWCALLJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03D400)

	inline static constexpr unsigned int DrawCallJob_TypeDefinitionIndex = 32605;

	class DrawCallJob : public Il2CppObject
	{
	public:
		Il2CppObject* decalToWorlds; // 0x10
		Il2CppObject* normalToWorlds; // 0x20
		Il2CppObject* sizeOffsets; // 0x30
		Il2CppObject* drawDistances; // 0x40
		Il2CppObject* angleFades; // 0x50
		Il2CppObject* uvScaleBiases; // 0x60
		Il2CppObject* layerMasks; // 0x70
		Il2CppObject* sceneLayerMasks; // 0x80
		Il2CppObject* fadeFactors; // 0x90
		Il2CppObject* boundingSpheres; // 0xA0
		::UnityEngine::Vector3* cameraPosition; // 0xB0
		::System::UInt64 sceneCullingMask; // 0xC0
		::System::Int32 cullingMask; // 0xC8
		Il2CppObject* visibleDecalIndices; // 0xD0
		::System::Int32 visibleDecalCount; // 0xE0
		::System::Single maxDrawDistance; // 0xE4
		Il2CppObject* decalToWorldsDraw; // 0xE8
		Il2CppObject* normalToDecalsDraw; // 0xF8
		Il2CppObject* subCalls; // 0x108
		Il2CppObject* subCallCount; // 0x118

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRAWCALLJOB_EXECUTE_OFFSET))(nullptr);
		}

	};

