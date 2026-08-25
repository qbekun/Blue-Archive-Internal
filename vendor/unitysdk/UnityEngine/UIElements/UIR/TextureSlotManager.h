#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class TextureRegistry; }
namespace UnityEngine::UIElements { class TextureId; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA33F820)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33FBB0)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0xA33FD60)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_STARTNEWBATCH_OFFSET UNITYSDK_OFFSET(0xA33FE90)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_INDEXOF_OFFSET UNITYSDK_OFFSET(0xA33FEF0)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_MARKUSED_OFFSET UNITYSDK_OFFSET(0xA340000)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_GET_FREESLOTS_OFFSET UNITYSDK_OFFSET(0xA340050)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_SET_FREESLOTS_OFFSET UNITYSDK_OFFSET(0xA340060)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_FINDOLDESTSLOT_OFFSET UNITYSDK_OFFSET(0xA340070)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_BIND_OFFSET UNITYSDK_OFFSET(0xA340250)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int TextureSlotManager_TypeDefinitionIndex = 30750;

	class TextureSlotManager : public Il2CppObject
	{
	public:
		::System::Int32 k_SlotCount; // 0x0
		::Il2CppArray<::System::Object*>* slotIds; // 0x8
		::System::Int32 textureTableId; // 0x10
		::Il2CppArray<::System::Object*>* m_Textures; // 0x10
		::Il2CppArray<::System::Object*>* m_Tickets; // 0x18
		::System::Int32 m_CurrentTicket; // 0x20
		::System::Int32 m_FirstUsedTicket; // 0x24
		::Il2CppArray<::System::Object*>* m_GpuTextures; // 0x28
		::System::Int32 _FreeSlots_k__BackingField; // 0x30
		::UnityEngine::UIElements::TextureRegistry* textureRegistry; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_RESET_OFFSET))(nullptr);
		}

		::System::Void StartNewBatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_STARTNEWBATCH_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::UnityEngine::UIElements::TextureId* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void MarkUsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_MARKUSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FreeSlots()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_GET_FREESLOTS_OFFSET))(nullptr);
		}

		::System::Void set_FreeSlots(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_SET_FREESLOTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindOldestSlot()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_FINDOLDESTSLOT_OFFSET))(nullptr);
		}

		::System::Void Bind(::UnityEngine::UIElements::TextureId* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextureId*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTURESLOTMANAGER_BIND_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

