#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0xA3E5EA0)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0xA3E5F50)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3E5FF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 30526;

	class PointerType : public Il2CppObject
	{
	public:
		::System::String* mouse; // 0x0
		::System::String* touch; // 0x8
		::System::String* pen; // 0x10
		::System::String* unknown; // 0x18

		::System::String* GetPointerType(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDirectManipulationDevice(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

