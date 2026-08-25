#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define UISHIFTINGCRAFTNODE_PLAYNODEANIMATIONDIRECTING_OFFSET UNITYSDK_OFFSET(0x23AB9B0)
#define UISHIFTINGCRAFTNODE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23AF010)
#define UISHIFTINGCRAFTNODE_CLOSENODEINIT_OFFSET UNITYSDK_OFFSET(0x23AE550)
#define UISHIFTINGCRAFTNODE_SETDATA_OFFSET UNITYSDK_OFFSET(0x23AE700)
#define UISHIFTINGCRAFTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23AF0A0)
#define UISHIFTINGCRAFTNODE_SETFRENAPATISCARDFRAGMENTNOTICE_OFFSET UNITYSDK_OFFSET(0x23AF120)
#define UISHIFTINGCRAFTNODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x23AF1E0)
#define UISHIFTINGCRAFTNODE_CO_PLAYNODEANIMATIONDIRECTING_OFFSET UNITYSDK_OFFSET(0x23AF1F0)
#define UISHIFTINGCRAFTNODE_CO_CHECKDIRECTINGQUEUE_OFFSET UNITYSDK_OFFSET(0x23AEFA0)
#define UISHIFTINGCRAFTNODE_CLOSENODE_OFFSET UNITYSDK_OFFSET(0x23AF2B0)
#define UISHIFTINGCRAFTNODE_OPENNODE_OFFSET UNITYSDK_OFFSET(0x23AF350)
#define UISHIFTINGCRAFTNODE_SETOFFSLOTMARK_OFFSET UNITYSDK_OFFSET(0x23AF3D0)
#define UISHIFTINGCRAFTNODE_SETONSLOTMARK_OFFSET UNITYSDK_OFFSET(0x23AF480)
#define UISHIFTINGCRAFTNODE_RESETNODE_OFFSET UNITYSDK_OFFSET(0x23AC020)
#define UISHIFTINGCRAFTNODE_CO_PLAYSLOTEFFECT_OFFSET UNITYSDK_OFFSET(0x23AF520)

	inline static constexpr unsigned int UIShiftingCraftNode_TypeDefinitionIndex = 5220;

	class UIShiftingCraftNode : public Il2CppObject
	{
	public:
		UITexture* texture; // 0x50
		UILabel* slotCount; // 0x58
		Il2CppObject* slotEffects; // 0x60
		Il2CppObject* slotLightOnEffects; // 0x68
		::UnityEngine::GameObject* frenapatisCardFragmentNotice; // 0x70
		Il2CppObject* directingQueue; // 0x78
		::MX::Data::ShiftingCraftRecipeExcelInfo* Info; // 0x80
		::System::Int64 inputExpHistory; // 0x88
		::System::Int64 beforeSlotCount; // 0x90
		::System::Boolean inputState; // 0x98
		::System::String* OpenNodeAnim; // 0x0
		::System::String* CloseNodeAnim; // 0x0

		::System::Void PlayNodeAnimationDirecting(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_PLAYNODEANIMATIONDIRECTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void CloseNodeInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_CLOSENODEINIT_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFrenapatisCardFragmentNotice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_SETFRENAPATISCARDFRAGMENTNOTICE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_PlayNodeAnimationDirecting(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_CO_PLAYNODEANIMATIONDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_CheckDirectingQueue()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_CO_CHECKDIRECTINGQUEUE_OFFSET))(nullptr);
		}

		::System::Void CloseNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_CLOSENODE_OFFSET))(nullptr);
		}

		::System::Void OpenNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_OPENNODE_OFFSET))(nullptr);
		}

		::System::Void SetOffSlotMark(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_SETOFFSLOTMARK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnSlotMark(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_SETONSLOTMARK_OFFSET))(arg, nullptr);
		}

		::System::Void ResetNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_RESETNODE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_PlaySlotEffect(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTNODE_CO_PLAYSLOTEFFECT_OFFSET))(arg, nullptr);
		}

	};

