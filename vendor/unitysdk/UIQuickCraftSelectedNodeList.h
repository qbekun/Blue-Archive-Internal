#pragma once
#include "unitysdk.h"

class UICraftNodeInfoScrollController;
class UICraftDuration;
class MXButton;
class UINodeMap;
class UINodeEditSection;

#define UIQUICKCRAFTSELECTEDNODELIST_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x23A8A30)
#define UIQUICKCRAFTSELECTEDNODELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A8C20)
#define UIQUICKCRAFTSELECTEDNODELIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x23A6D30)
#define UIQUICKCRAFTSELECTEDNODELIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x23A8C30)
#define UIQUICKCRAFTSELECTEDNODELIST_ONCLICKCRAFTNEXT_OFFSET UNITYSDK_OFFSET(0x23A8EF0)

	inline static constexpr unsigned int UIQuickCraftSelectedNodeList_TypeDefinitionIndex = 5200;

	class UIQuickCraftSelectedNodeList : public Il2CppObject
	{
	public:
		UICraftNodeInfoScrollController* scrollController; // 0x18
		UICraftDuration* craftDuration; // 0x20
		MXButton* confirmBtn; // 0x28
		MXButton* craftNextBtn; // 0x30
		UINodeMap* NodeMap; // 0x38
		UINodeEditSection* nodeEditSection; // 0x40
		::System::Int64 currentTier; // 0x48
		::System::Int64 maxTier; // 0x0

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTSELECTEDNODELIST_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTSELECTEDNODELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTSELECTEDNODELIST_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTSELECTEDNODELIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCraftNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTSELECTEDNODELIST_ONCLICKCRAFTNEXT_OFFSET))(nullptr);
		}

	};

