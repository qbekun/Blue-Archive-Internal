#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class BMPAlloc; }
namespace UnityEngine::UIElements::UIR { class BaseShaderInfoStorage; }

#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA341A30)
#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_FORCEFIRSTALLOC_OFFSET UNITYSDK_OFFSET(0xA341B40)
#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA341CE0)
#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_FREE_OFFSET UNITYSDK_OFFSET(0xA3421E0)
#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_GET_ENTRYWIDTH_OFFSET UNITYSDK_OFFSET(0xA342310)
#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_GET_ENTRYHEIGHT_OFFSET UNITYSDK_OFFSET(0xA342320)
#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_GETALLOCPAGEATLASLOCATION_OFFSET UNITYSDK_OFFSET(0xA342330)
#define UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_COUNTTRAILINGZEROES_OFFSET UNITYSDK_OFFSET(0xA342170)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int BitmapAllocator32_TypeDefinitionIndex = 30761;

	class BitmapAllocator32 : public Il2CppObject
	{
	public:
		::System::Int32 m_PageHeight; // 0x10
		Il2CppObject* m_Pages; // 0x18
		Il2CppObject* m_AllocMap; // 0x20
		::System::Int32 m_EntryWidth; // 0x28
		::System::Int32 m_EntryHeight; // 0x2C

		::System::Void Construct(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_CONSTRUCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ForceFirstAlloc(::System::UInt16 arg, ::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_FORCEFIRSTALLOC_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::BMPAlloc* Allocate(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* arg)
		{
			return (return (::UnityEngine::UIElements::UIR::BMPAlloc*(*)(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_ALLOCATE_OFFSET))(arg, nullptr);
		}

		::System::Void Free(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_FREE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_entryWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_GET_ENTRYWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_entryHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_GET_ENTRYHEIGHT_OFFSET))(nullptr);
		}

		::System::Void GetAllocPageAtlasLocation(::System::Int32 arg, uint16_t&* arg, uint16_t&* arg)
		{
			((::System::Void(*)(::System::Int32, uint16_t&*, uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_GETALLOCPAGEATLASLOCATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Byte CountTrailingZeroes(::System::UInt32 arg)
		{
			return (return (::System::Byte(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BITMAPALLOCATOR32_COUNTTRAILINGZEROES_OFFSET))(arg, nullptr);
		}

	};
}

