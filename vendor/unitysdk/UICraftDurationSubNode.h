#pragma once
#include "unitysdk.h"

class UICraftDurationSubNodeMode;
class MXButton;
namespace UnityEngine { class GameObject; }
class ShaderTextureController;
class UICraftDurationNode;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Texture; }

#define UICRAFTDURATIONSUBNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2390290)
#define UICRAFTDURATIONSUBNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x2390310)
#define UICRAFTDURATIONSUBNODE_REFRESHCENTERNODE_OFFSET UNITYSDK_OFFSET(0x2390320)
#define UICRAFTDURATIONSUBNODE__SETDATA_B__29_0_OFFSET UNITYSDK_OFFSET(0x2390750)
#define UICRAFTDURATIONSUBNODE_SETSELECTNODEANIM_OFFSET UNITYSDK_OFFSET(0x2390770)
#define UICRAFTDURATIONSUBNODE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2390830)
#define UICRAFTDURATIONSUBNODE_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0x2390890)
#define UICRAFTDURATIONSUBNODE_REFRESHNONEFIRSTPRIORITYNODE_OFFSET UNITYSDK_OFFSET(0x23908A0)
#define UICRAFTDURATIONSUBNODE_ONCLICKSUBNODE_OFFSET UNITYSDK_OFFSET(0x2390B30)
#define UICRAFTDURATIONSUBNODE_SETDATA_OFFSET UNITYSDK_OFFSET(0x238FDD0)
#define UICRAFTDURATIONSUBNODE__REFRESHCENTERNODE_B__36_1_OFFSET UNITYSDK_OFFSET(0x2390BA0)
#define UICRAFTDURATIONSUBNODE__PRESETINIT_B__31_0_OFFSET UNITYSDK_OFFSET(0x2390BC0)
#define UICRAFTDURATIONSUBNODE_PRESETINIT_OFFSET UNITYSDK_OFFSET(0x238E7D0)
#define UICRAFTDURATIONSUBNODE_PRESETNODEANIMSTATE_OFFSET UNITYSDK_OFFSET(0x238F5C0)
#define UICRAFTDURATIONSUBNODE_SETACTIVECOLLIDER_OFFSET UNITYSDK_OFFSET(0x238B480)
#define UICRAFTDURATIONSUBNODE_SUBNODEPRESET_OFFSET UNITYSDK_OFFSET(0x238ED70)
#define UICRAFTDURATIONSUBNODE__REFRESHCENTERNODE_B__36_0_OFFSET UNITYSDK_OFFSET(0x2390BE0)
#define UICRAFTDURATIONSUBNODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2390C00)

	inline static constexpr unsigned int UICraftDurationSubNode_TypeDefinitionIndex = 5151;

	class UICraftDurationSubNode : public Il2CppObject
	{
	public:
		UICraftDurationSubNodeMode* mode; // 0x18
		MXButton* subNodeButton; // 0x20
		::UnityEngine::GameObject* SelectIcon; // 0x28
		::Il2CppArray<::System::Object*>* SubIconValue; // 0x30
		::Il2CppArray<::System::Object*>* HDRSubValue; // 0x38
		ShaderTextureController* SubIcon; // 0x40
		ShaderTextureController* HDRSub; // 0x48
		::UnityEngine::GameObject* SizeWrapper; // 0x50
		::UnityEngine::GameObject* FX_UI_Node_Sub01; // 0x58
		::UnityEngine::GameObject* FX_UI_Node_Sub02; // 0x60
		UICraftDurationNode* parentNode; // 0x68
		::UnityEngine::GameObject* effect; // 0x70
		::System::Int64 nodeId; // 0x78
		::System::String* NodeEnabled; // 0x0
		::System::String* NodeDisabled; // 0x0
		::System::String* CraftNodeUnknown; // 0x0
		::System::String* QuickCraftNodeSlot; // 0x0
		::UnityEngine::Animation* anim; // 0x80
		::UnityEngine::Animation* QuickNodeAnim; // 0x88
		::UnityEngine::BoxCollider* col; // 0x90
		::UnityEngine::GameObject* QuickSubRoot; // 0x98
		Il2CppObject* UiQuickCraftNodeSlots; // 0xA0
		::System::Boolean isPresetNodeOpen; // 0xA8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void RefreshCenterNode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_REFRESHCENTERNODE_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__29_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE__SETDATA_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectNodeAnim(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_SETSELECTNODEANIM_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_ONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Effect()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_GET_EFFECT_OFFSET))(nullptr);
		}

		::System::Void RefreshNoneFirstPriorityNode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_REFRESHNONEFIRSTPRIORITYNODE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSubNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_ONCLICKSUBNODE_OFFSET))(nullptr);
		}

		::System::Void SetData(UICraftDurationNode* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(UICraftDurationNode*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void _RefreshCenterNode_b__36_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE__REFRESHCENTERNODE_B__36_1_OFFSET))(arg, nullptr);
		}

		::System::Void _PresetInit_b__31_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE__PRESETINIT_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Void PresetInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_PRESETINIT_OFFSET))(nullptr);
		}

		::System::Void PresetNodeAnimState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_PRESETNODEANIMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveCollider(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_SETACTIVECOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void SubNodePreset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_SUBNODEPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void _RefreshCenterNode_b__36_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE__REFRESHCENTERNODE_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONSUBNODE_AWAKE_OFFSET))(nullptr);
		}

	};

