#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERID_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3E60F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerId_TypeDefinitionIndex = 30527;

	class PointerId : public Il2CppObject
	{
	public:
		::System::Int32 maxPointers; // 0x0
		::System::Int32 invalidPointerId; // 0x4
		::System::Int32 mousePointerId; // 0x8
		::System::Int32 touchPointerIdBase; // 0xC
		::System::Int32 touchPointerCount; // 0x10
		::System::Int32 penPointerIdBase; // 0x14
		::System::Int32 penPointerCount; // 0x18
		::Il2CppArray<::System::Object*>* hoveringPointers; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

