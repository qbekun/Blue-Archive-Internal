#pragma once
#include "unitysdk.h"

class UICraftNodeInfoScrollController;
class UICraftDuration;
class MXButton;
namespace UnityEngine { class GameObject; }
class UICraftNodeIcon;
namespace MX::Data { class CraftNodeExcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIQUICKCRAFTNODELIST_REFRESH_OFFSET UNITYSDK_OFFSET(0x23A6460)
#define UIQUICKCRAFTNODELIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x23A6830)
#define UIQUICKCRAFTNODELIST_FINDNODEINFOPRIORITY_OFFSET UNITYSDK_OFFSET(0x23A6AF0)
#define UIQUICKCRAFTNODELIST_GET_NODEINFOS_OFFSET UNITYSDK_OFFSET(0x23A6B50)
#define UIQUICKCRAFTNODELIST_GET_NODESLOTS_OFFSET UNITYSDK_OFFSET(0x23A6B60)
#define UIQUICKCRAFTNODELIST_ONNEXT_OFFSET UNITYSDK_OFFSET(0x23A6B70)
#define UIQUICKCRAFTNODELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A6E60)
#define UIQUICKCRAFTNODELIST_ISFULLNODEPRIORITY_OFFSET UNITYSDK_OFFSET(0x23A67C0)
#define UIQUICKCRAFTNODELIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23A6F30)
#define UIQUICKCRAFTNODELIST_CONTAINSNODEPRIORITY_OFFSET UNITYSDK_OFFSET(0x23A70B0)
#define UIQUICKCRAFTNODELIST_ONPRESETSAVE_OFFSET UNITYSDK_OFFSET(0x23A7110)
#define UIQUICKCRAFTNODELIST_REORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x23A73E0)
#define UIQUICKCRAFTNODELIST_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x23A7540)
#define UIQUICKCRAFTNODELIST_RETURNMATERIALSETTING_OFFSET UNITYSDK_OFFSET(0x23A7570)
#define UIQUICKCRAFTNODELIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23A7770)
#define UIQUICKCRAFTNODELIST_TRYADDNODEPRIORITY_OFFSET UNITYSDK_OFFSET(0x23A7870)
#define UIQUICKCRAFTNODELIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x23A7A30)
#define UIQUICKCRAFTNODELIST_HANDLECRAFTNODEINFOCLICKMESSAGE_OFFSET UNITYSDK_OFFSET(0x23A7E30)
#define UIQUICKCRAFTNODELIST_TRYREMOVENODEPRIORITY_OFFSET UNITYSDK_OFFSET(0x23A83B0)

	inline static constexpr unsigned int UIQuickCraftNodeList_TypeDefinitionIndex = 5196;

	class UIQuickCraftNodeList : public Il2CppObject
	{
	public:
		UICraftNodeInfoScrollController* scrollController; // 0x18
		UICraftDuration* craftDuration; // 0x20
		MXButton* selectBtn; // 0x28
		::UnityEngine::GameObject* selectDisableBtn; // 0x30
		MXButton* returnBtn; // 0x38
		UICraftNodeIcon* _curSelectNodeSlot; // 0x40
		::MX::Data::CraftNodeExcelInfo* curSelectNodeInfo; // 0x48
		Il2CppObject* nodeSlots; // 0x50
		Il2CppObject* nodeInfos; // 0x58
		::System::Int64 currentTier; // 0x60

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean FindNodeInfoPriority(::MX::Data::CraftNodeExcelInfo* arg, int32_t&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::CraftNodeExcelInfo*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_FINDNODEINFOPRIORITY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_NodeInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_GET_NODEINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_NodeSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_GET_NODESLOTS_OFFSET))(nullptr);
		}

		::System::Void OnNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_ONNEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsFullNodePriority()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_ISFULLNODEPRIORITY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean ContainsNodePriority(UICraftNodeIcon* arg)
		{
			return ((::System::Boolean(*)(UICraftNodeIcon*, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_CONTAINSNODEPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void OnPresetSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_ONPRESETSAVE_OFFSET))(nullptr);
		}

		::System::Void ReorderPriority()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_REORDERPRIORITY_OFFSET))(nullptr);
		}

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_ONCLICKSELECT_OFFSET))(nullptr);
		}

		::System::Void ReturnMaterialSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_RETURNMATERIALSETTING_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean TryAddNodePriority(UICraftNodeIcon* arg)
		{
			return ((::System::Boolean(*)(UICraftNodeIcon*, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_TRYADDNODEPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCraftNodeInfoClickMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_HANDLECRAFTNODEINFOCLICKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryRemoveNodePriority(UICraftNodeIcon* arg)
		{
			return ((::System::Boolean(*)(UICraftNodeIcon*, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODELIST_TRYREMOVENODEPRIORITY_OFFSET))(arg, nullptr);
		}

	};

