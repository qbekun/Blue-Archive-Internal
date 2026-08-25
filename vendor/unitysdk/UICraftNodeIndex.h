#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }

#define UICRAFTNODEINDEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x2393BE0)
#define UICRAFTNODEINDEX_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2388960)
#define UICRAFTNODEINDEX_REFRESHINDEX_OFFSET UNITYSDK_OFFSET(0x2389270)
#define UICRAFTNODEINDEX_REFRESHINDEX_OFFSET UNITYSDK_OFFSET(0x2393EB0)
#define UICRAFTNODEINDEX_ONCLICKOPENNODEMAP_OFFSET UNITYSDK_OFFSET(0x2394200)
#define UICRAFTNODEINDEX_ONCLICKCLOSENODEMAP_OFFSET UNITYSDK_OFFSET(0x2394260)
#define UICRAFTNODEINDEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x23942B0)

	inline static constexpr unsigned int UICraftNodeIndex_TypeDefinitionIndex = 5162;

	class UICraftNodeIndex : public Il2CppObject
	{
	public:
		MXButton* openNodeMapBtn; // 0x18
		MXButton* closeNodeMapBtn; // 0x20
		::UnityEngine::GameObject* nodeInfosPopup; // 0x28
		Il2CppObject* nodeInfos; // 0x30
		Il2CppObject* smallNodeInfos; // 0x38

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINDEX_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINDEX_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void RefreshIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINDEX_REFRESHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINDEX_REFRESHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenNodeMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINDEX_ONCLICKOPENNODEMAP_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseNodeMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINDEX_ONCLICKCLOSENODEMAP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINDEX_.CTOR_OFFSET))(nullptr);
		}

	};

