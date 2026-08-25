#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class BMPAlloc; }
namespace UnityEngine::UIElements::UIR { class OwnedState; }

#define UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3418E0)
#define UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_ISVALID_OFFSET UNITYSDK_OFFSET(0xA341910)
#define UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA341920)
#define UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3419F0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int BMPAlloc_TypeDefinitionIndex = 30759;

	class BMPAlloc : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UIR::BMPAlloc* Invalid; // 0x0
		::System::Int32 page; // 0x10
		::System::UInt16 pageLine; // 0x14
		::System::Byte bitIndex; // 0x16
		::UnityEngine::UIElements::UIR::OwnedState* ownedState; // 0x17

		::System::Boolean Equals(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_ISVALID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BMPALLOC_.CCTOR_OFFSET))(nullptr);
		}

	};
}

